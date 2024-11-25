<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment6
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
        Me.lstMonthIncome = New System.Windows.Forms.ListBox()
        Me.lstMonthExpense = New System.Windows.Forms.ListBox()
        Me.btnEnterIncome = New System.Windows.Forms.Button()
        Me.btnEnterExpense = New System.Windows.Forms.Button()
        Me.lblAmount = New System.Windows.Forms.Label()
        Me.lblTotalIncome = New System.Windows.Forms.Label()
        Me.txtAmount = New System.Windows.Forms.TextBox()
        Me.txtTotalIncome = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'lstMonthIncome
        '
        Me.lstMonthIncome.FormattingEnabled = True
        Me.lstMonthIncome.Items.AddRange(New Object() {"Current month income", "-----------------------------------------", ""})
        Me.lstMonthIncome.Location = New System.Drawing.Point(40, 54)
        Me.lstMonthIncome.Name = "lstMonthIncome"
        Me.lstMonthIncome.Size = New System.Drawing.Size(230, 329)
        Me.lstMonthIncome.TabIndex = 3
        Me.lstMonthIncome.TabStop = False
        '
        'lstMonthExpense
        '
        Me.lstMonthExpense.FormattingEnabled = True
        Me.lstMonthExpense.Items.AddRange(New Object() {"Current month expenses", "-----------------------------------------", ""})
        Me.lstMonthExpense.Location = New System.Drawing.Point(495, 54)
        Me.lstMonthExpense.Name = "lstMonthExpense"
        Me.lstMonthExpense.Size = New System.Drawing.Size(230, 329)
        Me.lstMonthExpense.TabIndex = 4
        Me.lstMonthExpense.TabStop = False
        '
        'btnEnterIncome
        '
        Me.btnEnterIncome.Location = New System.Drawing.Point(329, 159)
        Me.btnEnterIncome.Name = "btnEnterIncome"
        Me.btnEnterIncome.Size = New System.Drawing.Size(105, 44)
        Me.btnEnterIncome.TabIndex = 1
        Me.btnEnterIncome.Text = "Enter &Income"
        Me.btnEnterIncome.UseVisualStyleBackColor = True
        '
        'btnEnterExpense
        '
        Me.btnEnterExpense.Location = New System.Drawing.Point(329, 232)
        Me.btnEnterExpense.Name = "btnEnterExpense"
        Me.btnEnterExpense.Size = New System.Drawing.Size(105, 44)
        Me.btnEnterExpense.TabIndex = 2
        Me.btnEnterExpense.Text = "Enter &Expense"
        Me.btnEnterExpense.UseVisualStyleBackColor = True
        '
        'lblAmount
        '
        Me.lblAmount.AutoSize = True
        Me.lblAmount.Location = New System.Drawing.Point(363, 54)
        Me.lblAmount.Name = "lblAmount"
        Me.lblAmount.Size = New System.Drawing.Size(43, 13)
        Me.lblAmount.TabIndex = 4
        Me.lblAmount.Text = "Amount"
        '
        'lblTotalIncome
        '
        Me.lblTotalIncome.AutoSize = True
        Me.lblTotalIncome.Location = New System.Drawing.Point(351, 359)
        Me.lblTotalIncome.Name = "lblTotalIncome"
        Me.lblTotalIncome.Size = New System.Drawing.Size(69, 13)
        Me.lblTotalIncome.TabIndex = 5
        Me.lblTotalIncome.Text = "Total Income"
        '
        'txtAmount
        '
        Me.txtAmount.Location = New System.Drawing.Point(334, 81)
        Me.txtAmount.Multiline = True
        Me.txtAmount.Name = "txtAmount"
        Me.txtAmount.Size = New System.Drawing.Size(100, 56)
        Me.txtAmount.TabIndex = 1
        Me.txtAmount.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'txtTotalIncome
        '
        Me.txtTotalIncome.Location = New System.Drawing.Point(334, 384)
        Me.txtTotalIncome.Multiline = True
        Me.txtTotalIncome.Name = "txtTotalIncome"
        Me.txtTotalIncome.ReadOnly = True
        Me.txtTotalIncome.Size = New System.Drawing.Size(100, 54)
        Me.txtTotalIncome.TabIndex = 5
        Me.txtTotalIncome.TabStop = False
        Me.txtTotalIncome.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'frmAssignment6
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = Global.rk_classes_and_objects_programming.My.Resources.Resources.imgFinances
        Me.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.ClientSize = New System.Drawing.Size(801, 518)
        Me.Controls.Add(Me.txtTotalIncome)
        Me.Controls.Add(Me.txtAmount)
        Me.Controls.Add(Me.lblTotalIncome)
        Me.Controls.Add(Me.lblAmount)
        Me.Controls.Add(Me.btnEnterExpense)
        Me.Controls.Add(Me.btnEnterIncome)
        Me.Controls.Add(Me.lstMonthExpense)
        Me.Controls.Add(Me.lstMonthIncome)
        Me.Name = "frmAssignment6"
        Me.Text = "Assignment 6"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents lstMonthIncome As ListBox
    Friend WithEvents lstMonthExpense As ListBox
    Friend WithEvents btnEnterIncome As Button
    Friend WithEvents btnEnterExpense As Button
    Friend WithEvents lblAmount As Label
    Friend WithEvents lblTotalIncome As Label
    Friend WithEvents txtAmount As TextBox
    Friend WithEvents txtTotalIncome As TextBox
End Class
