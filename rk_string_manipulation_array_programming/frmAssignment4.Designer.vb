<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment4
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.lblMissionHours = New System.Windows.Forms.Label()
        Me.lblMissionOne = New System.Windows.Forms.Label()
        Me.lblHoursDonated = New System.Windows.Forms.Label()
        Me.lblMissionThree = New System.Windows.Forms.Label()
        Me.lblMissionTwo = New System.Windows.Forms.Label()
        Me.lblMissionFour = New System.Windows.Forms.Label()
        Me.lstMissions = New System.Windows.Forms.ListBox()
        Me.lstTotals = New System.Windows.Forms.ListBox()
        Me.btnAddHours = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.txtHoursDonated = New System.Windows.Forms.TextBox()
        Me.lblMissionFourHrs = New System.Windows.Forms.Label()
        Me.lblMissionThreeHrs = New System.Windows.Forms.Label()
        Me.lblMissionOneHrs = New System.Windows.Forms.Label()
        Me.lblMissionTwoHrs = New System.Windows.Forms.Label()
        Me.lblAddHoursError = New System.Windows.Forms.Label()
        Me.lblErrorIncorrectHrsFormat = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'lblMissionHours
        '
        Me.lblMissionHours.AutoSize = True
        Me.lblMissionHours.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionHours.Location = New System.Drawing.Point(412, 9)
        Me.lblMissionHours.Name = "lblMissionHours"
        Me.lblMissionHours.Size = New System.Drawing.Size(149, 25)
        Me.lblMissionHours.TabIndex = 4
        Me.lblMissionHours.Text = "Mission Hours"
        Me.lblMissionHours.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'lblMissionOne
        '
        Me.lblMissionOne.AutoSize = True
        Me.lblMissionOne.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionOne.Location = New System.Drawing.Point(829, 44)
        Me.lblMissionOne.Name = "lblMissionOne"
        Me.lblMissionOne.Size = New System.Drawing.Size(96, 20)
        Me.lblMissionOne.TabIndex = 5
        Me.lblMissionOne.Text = "Mission One"
        Me.lblMissionOne.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'lblHoursDonated
        '
        Me.lblHoursDonated.AutoSize = True
        Me.lblHoursDonated.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblHoursDonated.Location = New System.Drawing.Point(145, 145)
        Me.lblHoursDonated.Name = "lblHoursDonated"
        Me.lblHoursDonated.Size = New System.Drawing.Size(118, 20)
        Me.lblHoursDonated.TabIndex = 6
        Me.lblHoursDonated.Text = "Hours Donated"
        Me.lblHoursDonated.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'lblMissionThree
        '
        Me.lblMissionThree.AutoSize = True
        Me.lblMissionThree.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionThree.Location = New System.Drawing.Point(829, 314)
        Me.lblMissionThree.Name = "lblMissionThree"
        Me.lblMissionThree.Size = New System.Drawing.Size(107, 20)
        Me.lblMissionThree.TabIndex = 7
        Me.lblMissionThree.Text = "Mission Three"
        Me.lblMissionThree.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'lblMissionTwo
        '
        Me.lblMissionTwo.AutoSize = True
        Me.lblMissionTwo.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionTwo.Location = New System.Drawing.Point(830, 181)
        Me.lblMissionTwo.Name = "lblMissionTwo"
        Me.lblMissionTwo.Size = New System.Drawing.Size(95, 20)
        Me.lblMissionTwo.TabIndex = 8
        Me.lblMissionTwo.Text = "Mission Two"
        Me.lblMissionTwo.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'lblMissionFour
        '
        Me.lblMissionFour.AutoSize = True
        Me.lblMissionFour.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionFour.Location = New System.Drawing.Point(829, 456)
        Me.lblMissionFour.Name = "lblMissionFour"
        Me.lblMissionFour.Size = New System.Drawing.Size(99, 20)
        Me.lblMissionFour.TabIndex = 9
        Me.lblMissionFour.Text = "Mission Four"
        Me.lblMissionFour.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'lstMissions
        '
        Me.lstMissions.FormattingEnabled = True
        Me.lstMissions.ImeMode = System.Windows.Forms.ImeMode.NoControl
        Me.lstMissions.Items.AddRange(New Object() {"Youth", "Teachings", "Missions", "Greeter"})
        Me.lstMissions.Location = New System.Drawing.Point(76, 194)
        Me.lstMissions.Name = "lstMissions"
        Me.lstMissions.Size = New System.Drawing.Size(255, 251)
        Me.lstMissions.TabIndex = 1
        '
        'lstTotals
        '
        Me.lstTotals.Enabled = False
        Me.lstTotals.FormattingEnabled = True
        Me.lstTotals.Items.AddRange(New Object() {"Hour Recording for 09/07/2024", "Hours Recorded by Robert Kus", "___________________________________"})
        Me.lstTotals.Location = New System.Drawing.Point(475, 120)
        Me.lstTotals.Name = "lstTotals"
        Me.lstTotals.Size = New System.Drawing.Size(300, 368)
        Me.lstTotals.TabIndex = 10
        Me.lstTotals.TabStop = False
        '
        'btnAddHours
        '
        Me.btnAddHours.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnAddHours.Location = New System.Drawing.Point(149, 456)
        Me.btnAddHours.Name = "btnAddHours"
        Me.btnAddHours.Size = New System.Drawing.Size(115, 56)
        Me.btnAddHours.TabIndex = 2
        Me.btnAddHours.Text = "&Add Hours"
        Me.btnAddHours.UseVisualStyleBackColor = True
        '
        'btnClose
        '
        Me.btnClose.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnClose.Location = New System.Drawing.Point(571, 528)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(104, 39)
        Me.btnClose.TabIndex = 3
        Me.btnClose.Text = "&Close"
        Me.btnClose.UseVisualStyleBackColor = True
        '
        'txtHoursDonated
        '
        Me.txtHoursDonated.Location = New System.Drawing.Point(145, 168)
        Me.txtHoursDonated.Name = "txtHoursDonated"
        Me.txtHoursDonated.Size = New System.Drawing.Size(118, 20)
        Me.txtHoursDonated.TabIndex = 0
        '
        'lblMissionFourHrs
        '
        Me.lblMissionFourHrs.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblMissionFourHrs.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionFourHrs.Location = New System.Drawing.Point(823, 487)
        Me.lblMissionFourHrs.Name = "lblMissionFourHrs"
        Me.lblMissionFourHrs.Size = New System.Drawing.Size(142, 89)
        Me.lblMissionFourHrs.TabIndex = 19
        Me.lblMissionFourHrs.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblMissionThreeHrs
        '
        Me.lblMissionThreeHrs.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblMissionThreeHrs.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionThreeHrs.Location = New System.Drawing.Point(823, 344)
        Me.lblMissionThreeHrs.Name = "lblMissionThreeHrs"
        Me.lblMissionThreeHrs.Size = New System.Drawing.Size(142, 89)
        Me.lblMissionThreeHrs.TabIndex = 20
        Me.lblMissionThreeHrs.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblMissionOneHrs
        '
        Me.lblMissionOneHrs.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblMissionOneHrs.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionOneHrs.Location = New System.Drawing.Point(823, 67)
        Me.lblMissionOneHrs.Name = "lblMissionOneHrs"
        Me.lblMissionOneHrs.Size = New System.Drawing.Size(142, 89)
        Me.lblMissionOneHrs.TabIndex = 21
        Me.lblMissionOneHrs.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblMissionTwoHrs
        '
        Me.lblMissionTwoHrs.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblMissionTwoHrs.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionTwoHrs.Location = New System.Drawing.Point(823, 207)
        Me.lblMissionTwoHrs.Name = "lblMissionTwoHrs"
        Me.lblMissionTwoHrs.Size = New System.Drawing.Size(142, 89)
        Me.lblMissionTwoHrs.TabIndex = 22
        Me.lblMissionTwoHrs.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblAddHoursError
        '
        Me.lblAddHoursError.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblAddHoursError.ForeColor = System.Drawing.Color.Red
        Me.lblAddHoursError.Location = New System.Drawing.Point(81, 44)
        Me.lblAddHoursError.Name = "lblAddHoursError"
        Me.lblAddHoursError.Size = New System.Drawing.Size(670, 23)
        Me.lblAddHoursError.TabIndex = 25
        '
        'lblErrorIncorrectHrsFormat
        '
        Me.lblErrorIncorrectHrsFormat.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblErrorIncorrectHrsFormat.ForeColor = System.Drawing.Color.Red
        Me.lblErrorIncorrectHrsFormat.Location = New System.Drawing.Point(81, 67)
        Me.lblErrorIncorrectHrsFormat.Name = "lblErrorIncorrectHrsFormat"
        Me.lblErrorIncorrectHrsFormat.Size = New System.Drawing.Size(670, 30)
        Me.lblErrorIncorrectHrsFormat.TabIndex = 26
        '
        'frmAssignment4
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.Info
        Me.ClientSize = New System.Drawing.Size(1008, 643)
        Me.Controls.Add(Me.lblErrorIncorrectHrsFormat)
        Me.Controls.Add(Me.lblAddHoursError)
        Me.Controls.Add(Me.lblMissionTwoHrs)
        Me.Controls.Add(Me.lblMissionOneHrs)
        Me.Controls.Add(Me.lblMissionThreeHrs)
        Me.Controls.Add(Me.lblMissionFourHrs)
        Me.Controls.Add(Me.txtHoursDonated)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnAddHours)
        Me.Controls.Add(Me.lstTotals)
        Me.Controls.Add(Me.lstMissions)
        Me.Controls.Add(Me.lblMissionFour)
        Me.Controls.Add(Me.lblMissionTwo)
        Me.Controls.Add(Me.lblMissionThree)
        Me.Controls.Add(Me.lblHoursDonated)
        Me.Controls.Add(Me.lblMissionOne)
        Me.Controls.Add(Me.lblMissionHours)
        Me.Name = "frmAssignment4"
        Me.Text = "Assignment 4"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents lblMissionHours As Label
    Friend WithEvents lblMissionOne As Label
    Friend WithEvents lblHoursDonated As Label
    Friend WithEvents lblMissionThree As Label
    Friend WithEvents lblMissionTwo As Label
    Friend WithEvents lblMissionFour As Label
    Friend WithEvents lstMissions As ListBox
    Friend WithEvents lstTotals As ListBox
    Friend WithEvents btnAddHours As Button
    Friend WithEvents btnClose As Button
    Friend WithEvents txtHoursDonated As TextBox
    Friend WithEvents lblMissionFourHrs As Label
    Friend WithEvents lblMissionThreeHrs As Label
    Friend WithEvents lblMissionOneHrs As Label
    Friend WithEvents lblMissionTwoHrs As Label
    Friend WithEvents lblAddHoursError As Label
    Friend WithEvents lblErrorIncorrectHrsFormat As Label
End Class
