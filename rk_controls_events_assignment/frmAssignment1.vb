'CONTROLS AND EVENTS PROGRAMMING ASSIGNMENT

'This assignment covers the basics for creating a form application. 
'The application should include a label, image, two buttons, And a textbox.
'When a user clicks the Update button, the background color and the content in the textbox should change.
'When a user clicks the Quit button, the application should close.

'Robert Kus

Public Class frmAssignment1
    'Includes the logic for updating the following in the application:
    '  - Changes the textbox content from a bible verse to an assignment integrity statement.
    '  - Changes the background color from ActiveBorder to ActiveCaption.
    Public Sub Update_Click(sender As Object, e As EventArgs) Handles Update.Click
        Me.txtCore.Text = “I will not use code that was never covered in class or in our textbook. " &
            "If you do you must be able to explain your code when asked by the professor.  " &
            "Using code outside of the resources provided, it can be flagged and reported as an " &
            "academic integrity violation if there is any suspicion of copying/cheating.”
        Me.BackColor = System.Drawing.SystemColors.ActiveCaption
    End Sub

    'Includes the logic for closing the application
    Public Sub Quit_Click(sender As Object, e As EventArgs) Handles Quit.Click
        Me.Close()
    End Sub

End Class
