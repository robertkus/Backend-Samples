<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment2
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
        Me.radioBoxGroup = New System.Windows.Forms.GroupBox()
        Me.radioSustain = New System.Windows.Forms.RadioButton()
        Me.radioGiving = New System.Windows.Forms.RadioButton()
        Me.radioCourage = New System.Windows.Forms.RadioButton()
        Me.radioForgive = New System.Windows.Forms.RadioButton()
        Me.radioHope = New System.Windows.Forms.RadioButton()
        Me.lblVisits = New System.Windows.Forms.Label()
        Me.ckBoxContact = New System.Windows.Forms.CheckBox()
        Me.txtVerse = New System.Windows.Forms.TextBox()
        Me.btnClear = New System.Windows.Forms.Button()
        Me.btnShowVerse = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.lblVisitCount = New System.Windows.Forms.Label()
        Me.lblInstInfo = New System.Windows.Forms.Label()
        Me.lblStudentInfo = New System.Windows.Forms.Label()
        Me.lblWarning = New System.Windows.Forms.Label()
        Me.radioBoxGroup.SuspendLayout()
        Me.SuspendLayout()
        '
        'radioBoxGroup
        '
        Me.radioBoxGroup.Controls.Add(Me.radioSustain)
        Me.radioBoxGroup.Controls.Add(Me.radioGiving)
        Me.radioBoxGroup.Controls.Add(Me.radioCourage)
        Me.radioBoxGroup.Controls.Add(Me.radioForgive)
        Me.radioBoxGroup.Controls.Add(Me.radioHope)
        Me.radioBoxGroup.Location = New System.Drawing.Point(37, 65)
        Me.radioBoxGroup.Name = "radioBoxGroup"
        Me.radioBoxGroup.Size = New System.Drawing.Size(200, 166)
        Me.radioBoxGroup.TabIndex = 1
        Me.radioBoxGroup.TabStop = False
        Me.radioBoxGroup.Text = "What do you need?"
        '
        'radioSustain
        '
        Me.radioSustain.AutoSize = True
        Me.radioSustain.Location = New System.Drawing.Point(24, 126)
        Me.radioSustain.Name = "radioSustain"
        Me.radioSustain.Size = New System.Drawing.Size(104, 17)
        Me.radioSustain.TabIndex = 6
        Me.radioSustain.Text = "Self-Sustainment"
        Me.radioSustain.UseVisualStyleBackColor = True
        '
        'radioGiving
        '
        Me.radioGiving.AutoSize = True
        Me.radioGiving.Location = New System.Drawing.Point(24, 103)
        Me.radioGiving.Name = "radioGiving"
        Me.radioGiving.Size = New System.Drawing.Size(55, 17)
        Me.radioGiving.TabIndex = 5
        Me.radioGiving.Text = "Giving"
        Me.radioGiving.UseVisualStyleBackColor = True
        '
        'radioCourage
        '
        Me.radioCourage.AutoSize = True
        Me.radioCourage.Location = New System.Drawing.Point(24, 80)
        Me.radioCourage.Name = "radioCourage"
        Me.radioCourage.Size = New System.Drawing.Size(65, 17)
        Me.radioCourage.TabIndex = 4
        Me.radioCourage.Text = "Courage"
        Me.radioCourage.UseVisualStyleBackColor = True
        '
        'radioForgive
        '
        Me.radioForgive.AutoSize = True
        Me.radioForgive.Location = New System.Drawing.Point(24, 57)
        Me.radioForgive.Name = "radioForgive"
        Me.radioForgive.Size = New System.Drawing.Size(82, 17)
        Me.radioForgive.TabIndex = 3
        Me.radioForgive.Text = "Forgiveness"
        Me.radioForgive.UseVisualStyleBackColor = True
        '
        'radioHope
        '
        Me.radioHope.AutoSize = True
        Me.radioHope.Location = New System.Drawing.Point(24, 34)
        Me.radioHope.Name = "radioHope"
        Me.radioHope.Size = New System.Drawing.Size(51, 17)
        Me.radioHope.TabIndex = 2
        Me.radioHope.Text = "Hope"
        Me.radioHope.UseVisualStyleBackColor = True
        '
        'lblVisits
        '
        Me.lblVisits.Location = New System.Drawing.Point(197, 321)
        Me.lblVisits.Name = "lblVisits"
        Me.lblVisits.Size = New System.Drawing.Size(74, 45)
        Me.lblVisits.TabIndex = 7
        Me.lblVisits.Text = "Number of Visits"
        Me.lblVisits.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'ckBoxContact
        '
        Me.ckBoxContact.AutoSize = True
        Me.ckBoxContact.Location = New System.Drawing.Point(380, 41)
        Me.ckBoxContact.Name = "ckBoxContact"
        Me.ckBoxContact.Size = New System.Drawing.Size(101, 17)
        Me.ckBoxContact.TabIndex = 8
        Me.ckBoxContact.TabStop = False
        Me.ckBoxContact.Text = "Include Contact"
        Me.ckBoxContact.UseVisualStyleBackColor = True
        '
        'txtVerse
        '
        Me.txtVerse.Font = New System.Drawing.Font("MS UI Gothic", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtVerse.Location = New System.Drawing.Point(302, 65)
        Me.txtVerse.Multiline = True
        Me.txtVerse.Name = "txtVerse"
        Me.txtVerse.Size = New System.Drawing.Size(250, 119)
        Me.txtVerse.TabIndex = 9
        Me.txtVerse.TabStop = False
        '
        'btnShowVerse
        '
        Me.btnShowVerse.Location = New System.Drawing.Point(82, 321)
        Me.btnShowVerse.Name = "btnShowVerse"
        Me.btnShowVerse.Size = New System.Drawing.Size(61, 40)
        Me.btnShowVerse.TabIndex = 10
        Me.btnShowVerse.Text = "&Show Verse"
        Me.btnShowVerse.UseVisualStyleBackColor = True
        '
        'btnClear
        '
        Me.btnClear.Location = New System.Drawing.Point(454, 274)
        Me.btnClear.Name = "btnClear"
        Me.btnClear.Size = New System.Drawing.Size(75, 60)
        Me.btnClear.TabIndex = 11
        Me.btnClear.Text = "Cl&ear"
        Me.btnClear.UseVisualStyleBackColor = True
        '
        'btnClose
        '
        Me.btnClose.Location = New System.Drawing.Point(454, 352)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(75, 57)
        Me.btnClose.TabIndex = 12
        Me.btnClose.Text = "&Close"
        Me.btnClose.UseVisualStyleBackColor = True
        '
        'lblVisitCount
        '
        Me.lblVisitCount.Font = New System.Drawing.Font("Microsoft Sans Serif", 16.0!)
        Me.lblVisitCount.Location = New System.Drawing.Point(297, 298)
        Me.lblVisitCount.Name = "lblVisitCount"
        Me.lblVisitCount.Size = New System.Drawing.Size(93, 85)
        Me.lblVisitCount.TabIndex = 13
        Me.lblVisitCount.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblInstInfo
        '
        Me.lblInstInfo.AutoSize = True
        Me.lblInstInfo.Location = New System.Drawing.Point(377, 205)
        Me.lblInstInfo.Name = "lblInstInfo"
        Me.lblInstInfo.Size = New System.Drawing.Size(0, 13)
        Me.lblInstInfo.TabIndex = 14
        '
        'lblStudentInfo
        '
        Me.lblStudentInfo.AutoSize = True
        Me.lblStudentInfo.Location = New System.Drawing.Point(387, 218)
        Me.lblStudentInfo.Name = "lblStudentInfo"
        Me.lblStudentInfo.Size = New System.Drawing.Size(0, 13)
        Me.lblStudentInfo.TabIndex = 15
        '
        'lblWarning
        '
        Me.lblWarning.AutoSize = True
        Me.lblWarning.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblWarning.ForeColor = System.Drawing.Color.Red
        Me.lblWarning.Location = New System.Drawing.Point(34, 40)
        Me.lblWarning.Name = "lblWarning"
        Me.lblWarning.Size = New System.Drawing.Size(0, 15)
        Me.lblWarning.TabIndex = 0
        '
        'fmAssignment2
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.GradientInactiveCaption
        Me.ClientSize = New System.Drawing.Size(587, 450)
        Me.Controls.Add(Me.lblWarning)
        Me.Controls.Add(Me.lblStudentInfo)
        Me.Controls.Add(Me.lblInstInfo)
        Me.Controls.Add(Me.lblVisitCount)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnShowVerse)
        Me.Controls.Add(Me.btnClear)
        Me.Controls.Add(Me.txtVerse)
        Me.Controls.Add(Me.ckBoxContact)
        Me.Controls.Add(Me.lblVisits)
        Me.Controls.Add(Me.radioBoxGroup)
        Me.Name = "fmAssignment2"
        Me.Text = "Bible Verse"
        Me.radioBoxGroup.ResumeLayout(False)
        Me.radioBoxGroup.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents radioBoxGroup As GroupBox
    Friend WithEvents radioSustain As RadioButton
    Friend WithEvents radioGiving As RadioButton
    Friend WithEvents radioCourage As RadioButton
    Friend WithEvents radioForgive As RadioButton
    Friend WithEvents radioHope As RadioButton
    Friend WithEvents lblVisits As Label
    Friend WithEvents ckBoxContact As CheckBox
    Friend WithEvents txtVerse As TextBox
    Friend WithEvents btnClear As Button
    Friend WithEvents btnShowVerse As Button
    Friend WithEvents btnClose As Button
    Friend WithEvents lblVisitCount As Label
    Friend WithEvents lblInstInfo As Label
    Friend WithEvents lblStudentInfo As Label
    Friend WithEvents lblWarning As Label
End Class
