'SEQUENTIAL ACCESS AND FILES PROGRAMMING ASSIGNMENT 
'The purpose of this assignment is to create a text file from an application based on user input.
'Users will use menu buttons to interact with the application, which includes commands to add or remove names from a list,
'and creating a new file. A file will be uploaded based on the user's selection when the application starts, and upload the
'default file if none is selected or if the file cannot be found.
'Robert Kus

'I will not use code that was never covered in class or in our textbook.
'If you do you must be able to explain your code when asked by the professor.
'Using code outside of the resources provided, it can be flagged and reported
'as an academic integrity violation if there is any suspicion of copying/cheating.

Public Class frmAssignment5
    'Declare and initialize global variables as needed.
    Dim currentFileName As String = "Mission.txt"

    'Display an input box that allows users to select a file and show a list of names when the application opens.
    Private Sub frmAssignment5_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Dim fileName = InputBox("Please enter the name of the text file you wish to open.")

        'Add .txt extension to file name if it does not exist
        fileName = SetFileAsTextFile(fileName)

        'If a file name is entered and it can be found, set the current file name to it.
        If fileName <> "" And IO.File.Exists(fileName) Then
            currentFileName = fileName
        Else
            MessageBox.Show("No file name was entered/the file name could not be found. Loading " & currentFileName)
        End If

        'Update the lstMembers list and count. The Sub will use the default file if the file name entry was blank or not found.
        UpdateListAndCount()
    End Sub

    'Close the application
    Private Sub mnuExit_Click(sender As Object, e As EventArgs) Handles mnuExit.Click
        Me.Close()
    End Sub

    'Create the file
    Private Sub mnuCreate_Click(sender As Object, e As EventArgs) Handles mnuCreate.Click
        'Get the file name from the user's input.
        Dim fileName = InputBox("Please enter a name for the new file.")

        'If no member name is entered, show the proper error message box and exit the Sub.
        If fileName = "" Then
            MessageBox.Show("No file name was entered.")
            Return
        End If

        'Append the .txt extension to the file name if needed.
        Dim textFileName = SetFileAsTextFile(fileName)

        'Update the current file name to the newly created file name. If it does not exist, create it.
        'If the file name is the same as the one currently loaded, exit the Sub.
        If textFileName = currentFileName Then
            MessageBox.Show(textFileName & " is already loaded.")
            Return
        ElseIf IO.File.Exists(textFileName) Then
            MessageBox.Show("File name already exists. Loading " & textFileName)
            currentFileName = textFileName
        Else
            Dim outputFile As IO.StreamWriter
            currentFileName = textFileName
            outputFile = IO.File.CreateText(currentFileName)
            outputFile.Close()
        End If

        'Update the lstMembers list and count.
        UpdateListAndCount()
    End Sub

    'Add a member to the file
    Private Sub mnuAdd_Click(sender As Object, e As EventArgs) Handles mnuAdd.Click
        Dim memberName = InputBox("Enter the Member's name.")

        'If no member name is entered, show the proper error message box and exit the Sub.
        If memberName = "" Then
            MessageBox.Show("No member name was entered.")
            Return
        End If

        'Append the newly entered name to the file.
        Dim outputFile As IO.StreamWriter
        outputFile = IO.File.AppendText(currentFileName)
        outputFile.WriteLine(memberName)
        outputFile.Close()

        'Update the lstMembers list and count.
        UpdateListAndCount()
    End Sub

    'Delete a member from the file
    Private Sub mnuDelete_Click(sender As Object, e As EventArgs) Handles mnuDelete.Click
        'If the file has no members to remove or no member is selected from the list, show the proper error message and end the Sub.
        If lstMembers.Items.Count < 1 Then
            MessageBox.Show("There are no member names to delete.")
            Return
        ElseIf lstMembers.SelectedItem = "" Then
            MessageBox.Show("Please select a name from the member name box.")
            Return
        End If

        'Read all members in the current file minus the one selected for deletion.
        Dim newMembersQuery = From member In IO.File.ReadAllLines(currentFileName)
                              Where member <> lstMembers.SelectedItem
                              Select member

        'Create a new file with the same name, but with the new members.
        IO.File.WriteAllLines(currentFileName, newMembersQuery)

        'Update the lstMembers list and count.
        UpdateListAndCount()
    End Sub

    'Sort member names in ascending order
    Private Sub mnuAscending_Click(sender As Object, e As EventArgs) Handles mnuAscending.Click
        Dim memberquery = From member In IO.File.ReadAllLines(currentFileName)
                          Order By member Ascending
                          Select member

        lstMembers.DataSource = memberquery.ToList
    End Sub

    'Sort member names in descending order
    Private Sub mnuDescending_Click(sender As Object, e As EventArgs) Handles mnuDescending.Click
        Dim memberquery = From member In IO.File.ReadAllLines(currentFileName)
                          Order By member Descending
                          Select member

        lstMembers.DataSource = memberquery.ToList
    End Sub

    'Update the Member List and Count based on the names in the current file.
    Private Sub UpdateListAndCount()
        'Add the member names in the file to the list.
        Dim membersQuery = From member In IO.File.ReadAllLines(currentFileName)
                           Select member

        lstMembers.DataSource = membersQuery.ToList
        txtCount.Text = lstMembers.Items.Count
    End Sub

    'Return the file name as is if it ends with the .txt extension. Otherwise, append the .txt extension to the file name.
    Private Function SetFileAsTextFile(fileName As String) As String
        Dim extension = fileName.Substring(fileName.IndexOf(".") + 1)
        If extension = "txt" Then
            Return fileName
        Else
            Return fileName & ".txt"
        End If
    End Function
End Class
