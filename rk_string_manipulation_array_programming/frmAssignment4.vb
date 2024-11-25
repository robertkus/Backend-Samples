'STRING MANIPULATION AND ARRAYS PROGRAMMING ASSIGNMENT 
'This project applies string and array manipulation concepts. The application allows users to enter
'a name, the number of hours they wish to donate, a mission they wish to donate to,
'and that information will be displayed. Running totals of hours donated to each mission 
'and cumulative hours will be displayed.
'Robert Kus

'I will not use code that was never covered in class or in our textbook.
'If you do you must be able to explain your code when asked by the professor.
'Using code outside of the resources provided, it can be flagged and reported
'as an academic integrity violation if there is any suspicion of copying/cheating.

Public Class frmAssignment4
    'Declare/Initialize global constants.
    Const addedNameCount As Int32 = 10

    Const errorMissingFields As String = "Please enter your name, select a mission type, and input the hours donated."
    Const errorIncorrectHrFormat As String = "Please enter a valid whole number for Hours Donated (0 or greater)."

    'Declare/Initialize global variables
    Dim fullDonorName As String
    Dim currentDonorMax As Int32 = addedNameCount
    Dim donorNameHours(currentDonorMax, 2) As String
    Dim currentNameIndex As Int32 = 0

    'Add the Name and hours donated from a person when the Add Hours button is clicked.
    'The hours donated should also be added to the mission as chosen by the donor.
    'Handle errors and display messages when needed.
    Private Sub btnAddHours_Click(sender As Object, e As EventArgs) Handles btnAddHours.Click
        'Check if all entries are made correctly.
        'Exit out of code and display proper error messages
        'for any missing/incorrect entries

        lblAddHoursError.Text = ""
        lblErrorIncorrectHrsFormat.Text = ""

        If (Me.txtHoursDonated.Text = "" Or
            Me.lstMissions.SelectedIndex < 0
        ) Then
            lblAddHoursError.Text = errorMissingFields
            Return
        End If

        Dim parsedHrs As Int32
        Dim validHrsEntry = Int32.TryParse(txtHoursDonated.Text, parsedHrs)

        If (validHrsEntry = False Or parsedHrs < 0) Then
            lblErrorIncorrectHrsFormat.Text = errorIncorrectHrFormat
            Return
        End If

        Dim donorNameEntered = ValidDonorNameEntered()

        'If donorNameEntered is False, that means the request was cancelled
        'and the method should be stopped without displaying an error message.
        If (donorNameEntered = False) Then
            Return
        End If

        Dim volunteerLastName As String = GetLastNameOnly(fullDonorName)

        DisplayMissionHours(parsedHrs)

        Dim isUpdate = False

        'Record the donor name and hours (update hours if the name is the same).
        For donorIndex = 0 To currentNameIndex
            If (donorNameHours(donorIndex, 0) = volunteerLastName) Then
                isUpdate = True
                Dim donorHours = Int32.Parse(donorNameHours(donorIndex, 1)) + parsedHrs
                donorNameHours(donorIndex, 1) = donorHours.ToString()
            End If
        Next donorIndex

        If (isUpdate = False) Then
            'Add ten fields to the existing array if the array max is reached.
            If (currentNameIndex >= currentDonorMax) Then
                currentDonorMax += addedNameCount
                ReDim donorNameHours(currentDonorMax, 2)
            End If

            donorNameHours(currentNameIndex, 0) = volunteerLastName
            donorNameHours(currentNameIndex, 1) = parsedHrs
            currentNameIndex += 1
        End If

        DisplayListResults()
        ClearInputsAndSelections()
    End Sub

    'Closes the application when the Close Button is clicked .
    Private Sub btnClose_Click(sender As Object, e As EventArgs) Handles btnClose.Click
        Me.Close()
    End Sub

    'Display the running total hours per mission.
    Private Sub DisplayMissionHours(hoursAdded As Int32)
        'Initialize a static array for holding the number of hours per mission.
        Static hoursPerMission(3) As Int32

        hoursPerMission(Me.lstMissions.SelectedIndex) += hoursAdded

        Me.lblMissionOneHrs.Text = hoursPerMission(0).ToString()
        Me.lblMissionTwoHrs.Text = hoursPerMission(1).ToString()
        Me.lblMissionThreeHrs.Text = hoursPerMission(2).ToString()
        Me.lblMissionFourHrs.Text = hoursPerMission(3).ToString()
    End Sub

    'Capture a username and return True if a name was successfully added.
    'Return False if the Cancel button was clicked.
    Private Function ValidDonorNameEntered() As Boolean
        Dim hasName As Boolean = False

        While hasName = False
            Dim tempName As String = InputBox("Please enter the donor's name (Only the last name, or single name, entered will be displayed)")

            'If the string reference is String.Empty, that means the Cancel button was clicked
            'and the function will return False.
            'If the user clicks Ok and no name, then the proper error message should show and
            'the user should be prompted again.
            If (tempName = "") Then
                MsgBox("No name was entered.")
                Return False
            End If

            hasName = True
            fullDonorName = tempName
        End While

        Return True
    End Function

    'Displays volunteer names and hours served.
    Private Sub DisplayListResults()
        Me.lstTotals.Items.Clear()
        Me.lstTotals.Items.Add("Hour Recording for 09/07/2024")
        Me.lstTotals.Items.Add("Hours Recorded by Robert Kus")
        Me.lstTotals.Items.Add("___________________________________")

        For nameIndex = 0 To currentNameIndex - 1
            Me.lstTotals.Items.Add(donorNameHours(nameIndex, 0) + "- Served " + donorNameHours(nameIndex, 1) + " hours.")
            Me.lstTotals.Items.Add("")
        Next
    End Sub

    'Clear user inputs and selections.
    Private Sub ClearInputsAndSelections()
        Me.txtHoursDonated.Text = ""
        Me.lstMissions.ClearSelected()
    End Sub

    'Split the full name into an array of strings and retrieves the final element of that array (the last name).
    Private Function GetLastNameOnly(fullName As String) As String
        Dim nameElements As String() = fullName.Split(" ")
        Return nameElements(nameElements.Length - 1)
    End Function
End Class
