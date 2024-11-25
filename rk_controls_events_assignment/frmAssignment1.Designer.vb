<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment1
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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(frmAssignment1))
        Me.lblStudent = New System.Windows.Forms.Label()
        Me.Quit = New System.Windows.Forms.Button()
        Me.Update = New System.Windows.Forms.Button()
        Me.txtCore = New System.Windows.Forms.TextBox()
        Me.picStudentImage = New System.Windows.Forms.PictureBox()
        CType(Me.picStudentImage, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'lblStudent
        '
        Me.lblStudent.AutoSize = True
        Me.lblStudent.Location = New System.Drawing.Point(29, 23)
        Me.lblStudent.Name = "lblStudent"
        Me.lblStudent.Size = New System.Drawing.Size(85, 39)
        Me.lblStudent.TabIndex = 3
        Me.lblStudent.Text = "Robert Kus" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Miranda Dyer" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "August 24, 2024"
        Me.lblStudent.UseMnemonic = False
        '
        'Quit
        '
        Me.Quit.Location = New System.Drawing.Point(465, 324)
        Me.Quit.Name = "Quit"
        Me.Quit.Size = New System.Drawing.Size(92, 67)
        Me.Quit.TabIndex = 1
        Me.Quit.Text = "&Quit"
        Me.Quit.UseVisualStyleBackColor = True
        '
        'Update
        '
        Me.Update.Location = New System.Drawing.Point(32, 143)
        Me.Update.Name = "Update"
        Me.Update.Size = New System.Drawing.Size(75, 66)
        Me.Update.TabIndex = 0
        Me.Update.Text = "&Update"
        Me.Update.UseVisualStyleBackColor = True
        '
        'txtCore
        '
        Me.txtCore.Font = New System.Drawing.Font("Lato", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtCore.Location = New System.Drawing.Point(32, 324)
        Me.txtCore.Multiline = True
        Me.txtCore.Name = "txtCore"
        Me.txtCore.Size = New System.Drawing.Size(356, 97)
        Me.txtCore.TabIndex = 2
        Me.txtCore.TabStop = False
        Me.txtCore.Text = "Therefore, if anyone is in Christ, he is a new creation. The old has passed away;" &
    " behold, the new has come."
        Me.txtCore.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'picStudentImage
        '
        Me.picStudentImage.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.picStudentImage.Image = CType(resources.GetObject("picStudentImage.Image"), System.Drawing.Image)
        Me.picStudentImage.Location = New System.Drawing.Point(211, 12)
        Me.picStudentImage.Name = "picStudentImage"
        Me.picStudentImage.Size = New System.Drawing.Size(355, 279)
        Me.picStudentImage.TabIndex = 4
        Me.picStudentImage.TabStop = False
        '
        'frmAssignment1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.ActiveBorder
        Me.ClientSize = New System.Drawing.Size(628, 450)
        Me.Controls.Add(Me.picStudentImage)
        Me.Controls.Add(Me.txtCore)
        Me.Controls.Add(Me.Update)
        Me.Controls.Add(Me.Quit)
        Me.Controls.Add(Me.lblStudent)
        Me.Name = "frmAssignment1"
        Me.Text = "Foundation Assignment"
        CType(Me.picStudentImage, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents lblStudent As Label
    Friend WithEvents Quit As Button
    Friend WithEvents Update As Button
    Friend WithEvents txtCore As TextBox
    Friend WithEvents picStudentImage As PictureBox
End Class
