' GENERAL PROCEDURES AND REPETITION PROGRAMMING ASSIGNMENT
' This assignment demonstrates the use of function calculations, such as multiplication, addition, exc.
' These functions return a value that can be used in a procedure/sub procedure.
' New UI objects include a list box, which lets users select from a list of predefined items.
' Robert Kus

' I will not use code that was never covered in class or in our textbook.
' If you do you must be able to explain your code when the professor asks.
' Using code outside of the resources provided can be flagged and reported
' as an academic integrity violation if there is any suspicion of copying/cheating.

Public Class frmAssignment3
    ' Declare and initialize global error message constants.
    Const mealCountMissingErrorMsg As String = "Please enter a meal count."
    Const mealCountFormatErrorMsg As String = "Enter an interger greater than 0 (1, 2, 3, etc.) for meal counts."
    Const volunteerCountMissingErrorMsg As String = "Please enter a volunteer count."
    Const volunteerCountFormatErrorMsg As String = "Enter an interger greater than 0 (1, 2, 3, etc.) for volunteer counts."
    Const servingPeriodMissingErrorMsg As String = "Please select a serving period from the dropdown box."

    ' Declare and initialize global variables.
    Dim mealCount As Int32 = 0
    Dim volunteerCount As Int32 = 0
    Dim mealCost As Double = 0
    Dim discount As Double = 0
    Dim totalCost As Double = 0
    Dim volunteerNameList As ListBox = New ListBox

    ' Calculate the costs and discount of all meals and display the results in the Results ListBox.
    ' Display appropriate error messages when needed
    Private Sub btnCalculate_Click(sender As Object, e As EventArgs) Handles btnCalculate.Click
        ' Clear all previous error messages.
        ClearErrorMessages()

        ' Display new error messages if required and set global variables when able to.
        Dim hasMealCount As Boolean = Int32.TryParse(txtMealsServed.Text, mealCount)

        If (hasMealCount = False Or mealCount = 0) Then
            lblMealCountErrorMsg.Text = mealCountFormatErrorMsg
        End If

        Dim hasVolunteerCount As Boolean = Int32.TryParse(txtNumOfVolunteers.Text, volunteerCount)

        If (hasVolunteerCount = False Or volunteerCount = 0) Then
            lblVolunteerCountErrorMsg.Text = volunteerCountFormatErrorMsg
        End If

        mealCost = GetMealCost()

        ' If there are no errors in the entries, then the code in the If statement will execute.
        If (hasMealCount _
            And hasVolunteerCount _
            And mealCost > 0 _
            And mealCount > 0 _
            And volunteerCount > 0
        ) Then
            Dim namesEntered = VolunteerNamesEntered()

            'If no names were entered (the user cancelled the request),
            'exit the method, but don't show an error message.
            If (namesEntered = False) Then
                Return
            End If

            GetTotalCost()
            ShowListBoxText()
        End If
    End Sub

    ' Clears all fields, selections, and error messages in the application when the Clear button is clicked. 
    Private Sub btnClear_Click(sender As Object, e As EventArgs) Handles btnClear.Click
        ClearErrorMessages()
        txtMealsServed.Text = ""
        txtNumOfVolunteers.Text = ""
        cmbServingOptions.Text = ""
        volunteerNameList.Items.Clear()
        lstResults.Items.Clear()
    End Sub

    ' Closes the application when a user clicks the Close button.
    Private Sub btnClose_Click(sender As Object, e As EventArgs) Handles btnClose.Click
        Me.Close()
    End Sub

    ' Obtain the meal cost based on the selected serving period.
    ' Display an error message if no selection is made.
    Private Function GetMealCost() As Double
        Const BreakfastCost As Double = 8
        Const LunchCost As Double = 7.5
        Const DinnerCost As Double = 9.75

        Select Case cmbServingOptions.Text
            Case "Breakfast"
                Return BreakfastCost
            Case "Lunch"
                Return LunchCost
            Case "Dinner"
                Return DinnerCost
            Case Else
                lblServePeriodErrorMsg.Text = servingPeriodMissingErrorMsg
                Return 0
        End Select

    End Function

    ' Get the volunteer names based on the user's input.
    ' If there are no errors and the user has entered a valid set of names, return True.
    ' If the user clicks Cancel, return False
    Private Function VolunteerNamesEntered() As Boolean
        Const volunteerNamesInputMsg As String = "Enter volunteer names, separating each name by a comma."
        Const volunteerNamesMissingErrorMsg As String = "Please enter in at least one name in the Input box."
        Const volunteerCountAndNameErrorMsg As String = "The number of volunteer names must match the volunteer count entered."

        Dim isValidNameList As Boolean = False

        While (isValidNameList = False)
            Dim volunteerNames As String = InputBox(volunteerNamesInputMsg)

            'If the volunteerNames variable is String.Empty, then that means the cancel button
            'was pressed and the user has cancelled their request.
            'Show an error message if no name was entered and Ok was pressed.
            If (String.ReferenceEquals(volunteerNames, String.Empty)) Then
                MsgBox(volunteerNamesMissingErrorMsg)
                Return False
            ElseIf (volunteerNames = "") Then
                MsgBox(volunteerNamesMissingErrorMsg)
                Continue While
            End If

            volunteerNameList.Items.Clear()

            ' Parse the names from the volunteer name text box based on the text on each line.
            ' The For Each loop below retrieves the value from the list of parsed
            ' names and adds it to the list box items of volunteer names.
            For Each volunteerName As String In volunteerNames.Split(",")
                volunteerNameList.Items.Add(volunteerName)
            Next volunteerName

            ' Ensure that the number of volunteer names match the volunteer count set and display the appropriate error message if needed.
            ' Ask the user to reenter their inputs if there are any errors.
            If (volunteerNameList.Items.Count <> volunteerCount) Then
                MsgBox(volunteerCountAndNameErrorMsg)
                Continue While
            End If

            isValidNameList = True

        End While

        Return True
    End Function

    ' Clear all current error messages
    Private Sub ClearErrorMessages()
        lblMealCountErrorMsg.Text = ""
        lblVolunteerCountErrorMsg.Text = ""
        lblServePeriodErrorMsg.Text = ""
    End Sub

    'Calculate the total cost of the meals served, applying a discount if more than ten people are served.
    Private Sub GetTotalCost()
        ' Reset the discount variable
        discount = 0

        Dim groupMealCost As Double = mealCost * mealCount

        If (mealCount > 10) Then
            discount = groupMealCost * 0.1
        End If

        totalCost = groupMealCost - discount
    End Sub

    ' Populate the List Box with the serving period (breakfast, lunch, or dinner), meal cost per person,
    ' meal discount (if applicable), the total cost of all meals during the period, a count of 
    ' volunteers during the period, and the names of those volunteers.
    Private Sub ShowListBoxText()
        If (volunteerCount > 0) Then
            ' Clear the current items in the list results
            lstResults.Items.Clear()

            lstResults.Items.Add(String.Concat("You are volunteering to serve ", cmbServingOptions.Text, "."))

            ' Display all costs and discounts in currency format.
            lstResults.Items.Add(String.Concat("Your cost per person is ", mealCost.ToString("C"), "."))

            ' Only display a discount if applicable.
            If (discount > 0) Then
                lstResults.Items.Add(String.Concat("The applied discount is ", discount.ToString("C"), "."))
            End If

            lstResults.Items.Add(String.Concat("The total cost is ", totalCost.ToString("C"), "."))

            lstResults.Items.Add(String.Concat("You are bringing ", volunteerCount, " to help serve."))

            lstResults.Items.Add("The following is a list of volunteers:")
            lstResults.Items.Add("--------------------------")

            ' Use a For loop to display each volunteer name.
            ' Pull each name from the volunteerNames variable and add it to the lstResults property.
            For index As Int32 = 0 To volunteerCount - 1
                lstResults.Items.Add(volunteerNameList.Items.Item(index))
            Next index
        End If
    End Sub
End Class
