'VARIABLES AND DECISIONS PROGRAMMING ASSIGNMENT

'The purpose of this assignment is to build a form that allows users to select verses based on their needs, using a radio button selection.
'Each verse addresses a user's specific need.
'The form must include a check box that, when checked, shows the name of the instructor and student/creator.
'The form must also include a button that shows the verse associated with a selection,
'a button that clears all selections, and a button to close the application.
'The form must show a running count of each visit (the number of times a user makes a different needs selection.

'Robert Kus

'Integrity Statement:
'"I will not use code that was never covered in class or in our textbook.
'If you do you must be able to explain your code when the professor asks.
'Using code outside of the resources provided can be flagged and reported as an
'academic integrity violation if there is any suspicion of copying/cheating."

Public Class frmAssignment2
    'Declare and initialize class constants
    Private Const empText As String = ""
    Private Const warningMessage As String = "Please select a need"

    Private Const hopeVerse As String = "May the God of hope fill you with all joy and peace in believing, " &
        "so that by the power of the Holy Spirit you may abound in hope. (Roman 15:13, ESV)"

    Private Const forgiveVerse As String = "Be kind to one another, tenderhearted, forgiving one another, " &
        "as God in Christ forgave you. (Ephesians 4:32, ESV)"

    Private Const courageVerse As String = "Be strong, and let your heart take courage, " &
        "all you who wait for the Lord! (Psalm 31:24, ESV)"

    Private Const givingVerse As String = "Do not withhold good from those to whom it is due, when it " &
        "is in your power to do it. (Proverbs 3:27, ESV)"

    Private Const sustainVerse As String = "Then he said to them, Go your way. Eat the fat and drink " &
        "sweet wine and send portions to anyone who has nothing ready, for this day is holy to our Lord. " &
        "And do not be grieved, for the joy of the Lord is your strength. (Nehemiah 8:10, ESV)"

    'Declare and initialize class variables
    Dim selectedVerse As String = empText
    Dim visitCount As Int32 = 0

    'Initialize each radio option as unchecked.
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        radioHope.Checked = False
        radioForgive.Checked = False
        radioCourage.Checked = False
        radioGiving.Checked = False
        radioSustain.Checked = False
    End Sub

    'If the Include Contact box is checked, then show the instructor and student contact info.
    Private Sub ckBoxContact_CheckedChanged(sender As Object, e As EventArgs) Handles ckBoxContact.CheckedChanged
        Const instName As String = "Miranda Dyer"
        Const studentName As String = "Robert Kus"

        If ckBoxContact.Checked = True Then
            lblInstInfo.Text = instName
            lblStudentInfo.Text = studentName
        Else
            lblInstInfo.Text = empText
            lblStudentInfo.Text = empText
        End If
    End Sub

    'If the Show Verse button is clicked, shows the verse associated with the radio button selection
    'and add to the visit count for each selection (by one).
    'Show a warning message if the button is clicked and no Need is selected.
    Private Sub btnShowVerse_Click(sender As Object, e As EventArgs) Handles btnShowVerse.Click
        'Set the text box content equal to a given verse based on the radio button selection
        Select Case True
            Case radioHope.Checked
                selectedVerse = hopeVerse
            Case radioForgive.Checked
                selectedVerse = forgiveVerse
            Case radioCourage.Checked
                selectedVerse = courageVerse
            Case radioGiving.Checked
                selectedVerse = givingVerse
            Case radioSustain.Checked
                selectedVerse = sustainVerse
        End Select

        'Display the selected text
        txtVerse.Text = selectedVerse

        If txtVerse.Text = empText Then
            'Show a warning if no selection is made.
            lblWarning.Text = warningMessage
        Else
            'Increase the visit count by 1 and show the new count.
            visitCount += 1
            lblVisitCount.Text = visitCount.ToString()
        End If
    End Sub

    'Clears all previous selections and resets the form to its original state.
    Private Sub btnClear_Click(sender As Object, e As EventArgs) Handles btnClear.Click
        'Clear text fields and variables
        txtVerse.Text = empText
        lblInstInfo.Text = empText
        lblStudentInfo.Text = empText
        lblWarning.Text = empText
        selectedVerse = empText

        'Unselect all radio button selections as well as the Include Contact checkbox
        ckBoxContact.Checked = False
        radioHope.Checked = False
        radioForgive.Checked = False
        radioCourage.Checked = False
        radioGiving.Checked = False
        radioSustain.Checked = False

        'Clear the Visit Count label and reset the visitCount variable to 0
        lblVisitCount.Text = empText
        visitCount = 0

    End Sub

    'Closes the application.
    Private Sub btnClose_Click(sender As Object, e As EventArgs) Handles btnClose.Click
        Me.Close()
    End Sub
End Class
