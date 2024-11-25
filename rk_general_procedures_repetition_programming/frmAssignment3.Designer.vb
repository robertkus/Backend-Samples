<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment3
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
        Me.lblMealsServed = New System.Windows.Forms.Label()
        Me.lblNumOfVolunteers = New System.Windows.Forms.Label()
        Me.btnCalculate = New System.Windows.Forms.Button()
        Me.btnClear = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.cmbServingOptions = New System.Windows.Forms.ComboBox()
        Me.txtMealsServed = New System.Windows.Forms.TextBox()
        Me.txtNumOfVolunteers = New System.Windows.Forms.TextBox()
        Me.lstResults = New System.Windows.Forms.ListBox()
        Me.lblServePeriodErrorMsg = New System.Windows.Forms.Label()
        Me.lblResults = New System.Windows.Forms.Label()
        Me.lblServingPeriod = New System.Windows.Forms.Label()
        Me.lblMealCountErrorMsg = New System.Windows.Forms.Label()
        Me.lblVolunteerCountErrorMsg = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'lblMealsServed
        '
        Me.lblMealsServed.AutoSize = True
        Me.lblMealsServed.Location = New System.Drawing.Point(59, 170)
        Me.lblMealsServed.Name = "lblMealsServed"
        Me.lblMealsServed.Size = New System.Drawing.Size(124, 13)
        Me.lblMealsServed.TabIndex = 10
        Me.lblMealsServed.Text = "Number of Meals Served"
        '
        'lblNumOfVolunteers
        '
        Me.lblNumOfVolunteers.AutoSize = True
        Me.lblNumOfVolunteers.Location = New System.Drawing.Point(276, 170)
        Me.lblNumOfVolunteers.Name = "lblNumOfVolunteers"
        Me.lblNumOfVolunteers.Size = New System.Drawing.Size(109, 13)
        Me.lblNumOfVolunteers.TabIndex = 11
        Me.lblNumOfVolunteers.Text = "Number of Volunteers"
        '
        'btnCalculate
        '
        Me.btnCalculate.Location = New System.Drawing.Point(178, 530)
        Me.btnCalculate.Name = "btnCalculate"
        Me.btnCalculate.Size = New System.Drawing.Size(75, 49)
        Me.btnCalculate.TabIndex = 4
        Me.btnCalculate.Text = "&Calculate"
        Me.btnCalculate.UseVisualStyleBackColor = True
        '
        'btnClear
        '
        Me.btnClear.Location = New System.Drawing.Point(533, 530)
        Me.btnClear.Name = "btnClear"
        Me.btnClear.Size = New System.Drawing.Size(75, 49)
        Me.btnClear.TabIndex = 5
        Me.btnClear.Text = "C&lear"
        Me.btnClear.UseVisualStyleBackColor = True
        '
        'btnClose
        '
        Me.btnClose.Location = New System.Drawing.Point(770, 530)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(75, 49)
        Me.btnClose.TabIndex = 6
        Me.btnClose.Text = "Clos&e"
        Me.btnClose.UseVisualStyleBackColor = True
        '
        'cmbServingOptions
        '
        Me.cmbServingOptions.FormattingEnabled = True
        Me.cmbServingOptions.Items.AddRange(New Object() {"Breakfast", "Lunch", "Dinner"})
        Me.cmbServingOptions.Location = New System.Drawing.Point(162, 334)
        Me.cmbServingOptions.Name = "cmbServingOptions"
        Me.cmbServingOptions.Size = New System.Drawing.Size(121, 21)
        Me.cmbServingOptions.TabIndex = 2
        '
        'txtMealsServed
        '
        Me.txtMealsServed.Font = New System.Drawing.Font("Microsoft Sans Serif", 20.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtMealsServed.Location = New System.Drawing.Point(84, 186)
        Me.txtMealsServed.Multiline = True
        Me.txtMealsServed.Name = "txtMealsServed"
        Me.txtMealsServed.Size = New System.Drawing.Size(81, 68)
        Me.txtMealsServed.TabIndex = 0
        Me.txtMealsServed.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'txtNumOfVolunteers
        '
        Me.txtNumOfVolunteers.Font = New System.Drawing.Font("Microsoft Sans Serif", 20.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtNumOfVolunteers.Location = New System.Drawing.Point(291, 186)
        Me.txtNumOfVolunteers.Multiline = True
        Me.txtNumOfVolunteers.Name = "txtNumOfVolunteers"
        Me.txtNumOfVolunteers.Size = New System.Drawing.Size(81, 68)
        Me.txtNumOfVolunteers.TabIndex = 1
        Me.txtNumOfVolunteers.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'lstResults
        '
        Me.lstResults.FormattingEnabled = True
        Me.lstResults.Location = New System.Drawing.Point(499, 63)
        Me.lstResults.Name = "lstResults"
        Me.lstResults.Size = New System.Drawing.Size(382, 407)
        Me.lstResults.TabIndex = 9
        Me.lstResults.TabStop = False
        '
        'lblServePeriodErrorMsg
        '
        Me.lblServePeriodErrorMsg.AutoSize = True
        Me.lblServePeriodErrorMsg.ForeColor = System.Drawing.Color.Red
        Me.lblServePeriodErrorMsg.Location = New System.Drawing.Point(92, 287)
        Me.lblServePeriodErrorMsg.Name = "lblServePeriodErrorMsg"
        Me.lblServePeriodErrorMsg.Size = New System.Drawing.Size(0, 13)
        Me.lblServePeriodErrorMsg.TabIndex = 15
        '
        'lblResults
        '
        Me.lblResults.AutoSize = True
        Me.lblResults.Location = New System.Drawing.Point(672, 47)
        Me.lblResults.Name = "lblResults"
        Me.lblResults.Size = New System.Drawing.Size(42, 13)
        Me.lblResults.TabIndex = 17
        Me.lblResults.Text = "Results"
        '
        'lblServingPeriod
        '
        Me.lblServingPeriod.AutoSize = True
        Me.lblServingPeriod.Location = New System.Drawing.Point(189, 318)
        Me.lblServingPeriod.Name = "lblServingPeriod"
        Me.lblServingPeriod.Size = New System.Drawing.Size(76, 13)
        Me.lblServingPeriod.TabIndex = 18
        Me.lblServingPeriod.Text = "Serving Period"
        '
        'lblMealCountErrorMsg
        '
        Me.lblMealCountErrorMsg.AutoSize = True
        Me.lblMealCountErrorMsg.ForeColor = System.Drawing.Color.Red
        Me.lblMealCountErrorMsg.Location = New System.Drawing.Point(59, 106)
        Me.lblMealCountErrorMsg.Name = "lblMealCountErrorMsg"
        Me.lblMealCountErrorMsg.Size = New System.Drawing.Size(0, 13)
        Me.lblMealCountErrorMsg.TabIndex = 13
        '
        'lblVolunteerCountErrorMsg
        '
        Me.lblVolunteerCountErrorMsg.AutoSize = True
        Me.lblVolunteerCountErrorMsg.ForeColor = System.Drawing.Color.Red
        Me.lblVolunteerCountErrorMsg.Location = New System.Drawing.Point(59, 121)
        Me.lblVolunteerCountErrorMsg.Name = "lblVolunteerCountErrorMsg"
        Me.lblVolunteerCountErrorMsg.Size = New System.Drawing.Size(0, 13)
        Me.lblVolunteerCountErrorMsg.TabIndex = 14
        '
        'frmAssignment3
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.GradientInactiveCaption
        Me.ClientSize = New System.Drawing.Size(947, 635)
        Me.Controls.Add(Me.lblServingPeriod)
        Me.Controls.Add(Me.lblResults)
        Me.Controls.Add(Me.lblServePeriodErrorMsg)
        Me.Controls.Add(Me.lblVolunteerCountErrorMsg)
        Me.Controls.Add(Me.lblMealCountErrorMsg)
        Me.Controls.Add(Me.lstResults)
        Me.Controls.Add(Me.txtNumOfVolunteers)
        Me.Controls.Add(Me.txtMealsServed)
        Me.Controls.Add(Me.cmbServingOptions)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnClear)
        Me.Controls.Add(Me.btnCalculate)
        Me.Controls.Add(Me.lblNumOfVolunteers)
        Me.Controls.Add(Me.lblMealsServed)
        Me.Name = "frmAssignment3"
        Me.Text = "Meal Cost Calculator"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents lblMealsServed As Label
    Friend WithEvents lblNumOfVolunteers As Label
    Friend WithEvents btnCalculate As Button
    Friend WithEvents btnClear As Button
    Friend WithEvents btnClose As Button
    Friend WithEvents cmbServingOptions As ComboBox
    Friend WithEvents txtMealsServed As TextBox
    Friend WithEvents txtNumOfVolunteers As TextBox
    Friend WithEvents lstResults As ListBox
    Friend WithEvents lblServePeriodErrorMsg As Label
    Friend WithEvents lblResults As Label
    Friend WithEvents lblServingPeriod As Label
    Friend WithEvents lblMealCountErrorMsg As Label
    Friend WithEvents lblVolunteerCountErrorMsg As Label
End Class
