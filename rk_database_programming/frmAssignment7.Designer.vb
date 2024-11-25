<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment7
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
        Me.components = New System.ComponentModel.Container()
        Dim lblID As System.Windows.Forms.Label
        Dim lblTitle As System.Windows.Forms.Label
        Dim lblPlatform As System.Windows.Forms.Label
        Dim lblRating As System.Windows.Forms.Label
        Dim lblPrice As System.Windows.Forms.Label
        Dim lblNewUsed As System.Windows.Forms.Label
        Dim lblQuantity As System.Windows.Forms.Label
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(frmAssignment7))
        Me.GaloreDataSet = New rk_database_programming.GaloreDataSet()
        Me.GamesBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.GamesTableAdapter = New rk_database_programming.GaloreDataSetTableAdapters.GamesTableAdapter()
        Me.TableAdapterManager = New rk_database_programming.GaloreDataSetTableAdapters.TableAdapterManager()
        Me.GamesBindingNavigator = New System.Windows.Forms.BindingNavigator(Me.components)
        Me.BindingNavigatorAddNewItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorCountItem = New System.Windows.Forms.ToolStripLabel()
        Me.BindingNavigatorDeleteItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMoveFirstItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMovePreviousItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorSeparator = New System.Windows.Forms.ToolStripSeparator()
        Me.BindingNavigatorPositionItem = New System.Windows.Forms.ToolStripTextBox()
        Me.BindingNavigatorSeparator1 = New System.Windows.Forms.ToolStripSeparator()
        Me.BindingNavigatorMoveNextItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMoveLastItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorSeparator2 = New System.Windows.Forms.ToolStripSeparator()
        Me.GamesBindingNavigatorSaveItem = New System.Windows.Forms.ToolStripButton()
        Me.txtID = New System.Windows.Forms.TextBox()
        Me.txtTitle = New System.Windows.Forms.TextBox()
        Me.txtPlatform = New System.Windows.Forms.TextBox()
        Me.txtRating = New System.Windows.Forms.TextBox()
        Me.txtPrice = New System.Windows.Forms.TextBox()
        Me.txtNewUsed = New System.Windows.Forms.TextBox()
        Me.txtQuantity = New System.Windows.Forms.TextBox()
        Me.btnQuery1 = New System.Windows.Forms.Button()
        Me.btnQuery2 = New System.Windows.Forms.Button()
        Me.btnQuery3 = New System.Windows.Forms.Button()
        Me.btnQuery4 = New System.Windows.Forms.Button()
        Me.btnQuery5 = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        lblID = New System.Windows.Forms.Label()
        lblTitle = New System.Windows.Forms.Label()
        lblPlatform = New System.Windows.Forms.Label()
        lblRating = New System.Windows.Forms.Label()
        lblPrice = New System.Windows.Forms.Label()
        lblNewUsed = New System.Windows.Forms.Label()
        lblQuantity = New System.Windows.Forms.Label()
        CType(Me.GaloreDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.GamesBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.GamesBindingNavigator, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.GamesBindingNavigator.SuspendLayout()
        Me.SuspendLayout()
        '
        'lblID
        '
        lblID.AutoSize = True
        lblID.Location = New System.Drawing.Point(99, 69)
        lblID.Name = "lblID"
        lblID.Size = New System.Drawing.Size(21, 13)
        lblID.TabIndex = 1
        lblID.Text = "ID:"
        '
        'lblTitle
        '
        lblTitle.AutoSize = True
        lblTitle.Location = New System.Drawing.Point(123, 105)
        lblTitle.Name = "lblTitle"
        lblTitle.Size = New System.Drawing.Size(30, 13)
        lblTitle.TabIndex = 3
        lblTitle.Text = "Title:"
        '
        'lblPlatform
        '
        lblPlatform.AutoSize = True
        lblPlatform.Location = New System.Drawing.Point(105, 131)
        lblPlatform.Name = "lblPlatform"
        lblPlatform.Size = New System.Drawing.Size(48, 13)
        lblPlatform.TabIndex = 5
        lblPlatform.Text = "Platform:"
        '
        'lblRating
        '
        lblRating.AutoSize = True
        lblRating.Location = New System.Drawing.Point(112, 157)
        lblRating.Name = "lblRating"
        lblRating.Size = New System.Drawing.Size(41, 13)
        lblRating.TabIndex = 7
        lblRating.Text = "Rating:"
        '
        'lblPrice
        '
        lblPrice.AutoSize = True
        lblPrice.Location = New System.Drawing.Point(119, 183)
        lblPrice.Name = "lblPrice"
        lblPrice.Size = New System.Drawing.Size(34, 13)
        lblPrice.TabIndex = 9
        lblPrice.Text = "Price:"
        '
        'lblNewUsed
        '
        lblNewUsed.AutoSize = True
        lblNewUsed.Location = New System.Drawing.Point(93, 209)
        lblNewUsed.Name = "lblNewUsed"
        lblNewUsed.Size = New System.Drawing.Size(60, 13)
        lblNewUsed.TabIndex = 11
        lblNewUsed.Text = "New Used:"
        '
        'lblQuantity
        '
        lblQuantity.AutoSize = True
        lblQuantity.Location = New System.Drawing.Point(104, 235)
        lblQuantity.Name = "lblQuantity"
        lblQuantity.Size = New System.Drawing.Size(49, 13)
        lblQuantity.TabIndex = 13
        lblQuantity.Text = "Quantity:"
        '
        'GaloreDataSet
        '
        Me.GaloreDataSet.DataSetName = "GaloreDataSet"
        Me.GaloreDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'GamesBindingSource
        '
        Me.GamesBindingSource.DataMember = "Games"
        Me.GamesBindingSource.DataSource = Me.GaloreDataSet
        '
        'GamesTableAdapter
        '
        Me.GamesTableAdapter.ClearBeforeFill = True
        '
        'TableAdapterManager
        '
        Me.TableAdapterManager.BackupDataSetBeforeUpdate = False
        Me.TableAdapterManager.GamesTableAdapter = Me.GamesTableAdapter
        Me.TableAdapterManager.UpdateOrder = rk_database_programming.GaloreDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete
        '
        'GamesBindingNavigator
        '
        Me.GamesBindingNavigator.AddNewItem = Me.BindingNavigatorAddNewItem
        Me.GamesBindingNavigator.BindingSource = Me.GamesBindingSource
        Me.GamesBindingNavigator.CountItem = Me.BindingNavigatorCountItem
        Me.GamesBindingNavigator.DeleteItem = Me.BindingNavigatorDeleteItem
        Me.GamesBindingNavigator.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.BindingNavigatorMoveFirstItem, Me.BindingNavigatorMovePreviousItem, Me.BindingNavigatorSeparator, Me.BindingNavigatorPositionItem, Me.BindingNavigatorCountItem, Me.BindingNavigatorSeparator1, Me.BindingNavigatorMoveNextItem, Me.BindingNavigatorMoveLastItem, Me.BindingNavigatorSeparator2, Me.BindingNavigatorAddNewItem, Me.BindingNavigatorDeleteItem, Me.GamesBindingNavigatorSaveItem})
        Me.GamesBindingNavigator.Location = New System.Drawing.Point(0, 0)
        Me.GamesBindingNavigator.MoveFirstItem = Me.BindingNavigatorMoveFirstItem
        Me.GamesBindingNavigator.MoveLastItem = Me.BindingNavigatorMoveLastItem
        Me.GamesBindingNavigator.MoveNextItem = Me.BindingNavigatorMoveNextItem
        Me.GamesBindingNavigator.MovePreviousItem = Me.BindingNavigatorMovePreviousItem
        Me.GamesBindingNavigator.Name = "GamesBindingNavigator"
        Me.GamesBindingNavigator.PositionItem = Me.BindingNavigatorPositionItem
        Me.GamesBindingNavigator.Size = New System.Drawing.Size(685, 25)
        Me.GamesBindingNavigator.TabIndex = 0
        Me.GamesBindingNavigator.Text = "BindingNavigator1"
        '
        'BindingNavigatorAddNewItem
        '
        Me.BindingNavigatorAddNewItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorAddNewItem.Image = CType(resources.GetObject("BindingNavigatorAddNewItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorAddNewItem.Name = "BindingNavigatorAddNewItem"
        Me.BindingNavigatorAddNewItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorAddNewItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorAddNewItem.Text = "Add new"
        '
        'BindingNavigatorCountItem
        '
        Me.BindingNavigatorCountItem.Name = "BindingNavigatorCountItem"
        Me.BindingNavigatorCountItem.Size = New System.Drawing.Size(35, 22)
        Me.BindingNavigatorCountItem.Text = "of {0}"
        Me.BindingNavigatorCountItem.ToolTipText = "Total number of items"
        '
        'BindingNavigatorDeleteItem
        '
        Me.BindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorDeleteItem.Image = CType(resources.GetObject("BindingNavigatorDeleteItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorDeleteItem.Name = "BindingNavigatorDeleteItem"
        Me.BindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorDeleteItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorDeleteItem.Text = "Delete"
        '
        'BindingNavigatorMoveFirstItem
        '
        Me.BindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveFirstItem.Image = CType(resources.GetObject("BindingNavigatorMoveFirstItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveFirstItem.Name = "BindingNavigatorMoveFirstItem"
        Me.BindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveFirstItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMoveFirstItem.Text = "Move first"
        '
        'BindingNavigatorMovePreviousItem
        '
        Me.BindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMovePreviousItem.Image = CType(resources.GetObject("BindingNavigatorMovePreviousItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMovePreviousItem.Name = "BindingNavigatorMovePreviousItem"
        Me.BindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMovePreviousItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMovePreviousItem.Text = "Move previous"
        '
        'BindingNavigatorSeparator
        '
        Me.BindingNavigatorSeparator.Name = "BindingNavigatorSeparator"
        Me.BindingNavigatorSeparator.Size = New System.Drawing.Size(6, 25)
        '
        'BindingNavigatorPositionItem
        '
        Me.BindingNavigatorPositionItem.AccessibleName = "Position"
        Me.BindingNavigatorPositionItem.AutoSize = False
        Me.BindingNavigatorPositionItem.Font = New System.Drawing.Font("Segoe UI", 9.0!)
        Me.BindingNavigatorPositionItem.Name = "BindingNavigatorPositionItem"
        Me.BindingNavigatorPositionItem.Size = New System.Drawing.Size(50, 23)
        Me.BindingNavigatorPositionItem.Text = "0"
        Me.BindingNavigatorPositionItem.ToolTipText = "Current position"
        '
        'BindingNavigatorSeparator1
        '
        Me.BindingNavigatorSeparator1.Name = "BindingNavigatorSeparator1"
        Me.BindingNavigatorSeparator1.Size = New System.Drawing.Size(6, 25)
        '
        'BindingNavigatorMoveNextItem
        '
        Me.BindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveNextItem.Image = CType(resources.GetObject("BindingNavigatorMoveNextItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveNextItem.Name = "BindingNavigatorMoveNextItem"
        Me.BindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveNextItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMoveNextItem.Text = "Move next"
        '
        'BindingNavigatorMoveLastItem
        '
        Me.BindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveLastItem.Image = CType(resources.GetObject("BindingNavigatorMoveLastItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveLastItem.Name = "BindingNavigatorMoveLastItem"
        Me.BindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveLastItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMoveLastItem.Text = "Move last"
        '
        'BindingNavigatorSeparator2
        '
        Me.BindingNavigatorSeparator2.Name = "BindingNavigatorSeparator2"
        Me.BindingNavigatorSeparator2.Size = New System.Drawing.Size(6, 25)
        '
        'GamesBindingNavigatorSaveItem
        '
        Me.GamesBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.GamesBindingNavigatorSaveItem.Image = CType(resources.GetObject("GamesBindingNavigatorSaveItem.Image"), System.Drawing.Image)
        Me.GamesBindingNavigatorSaveItem.Name = "GamesBindingNavigatorSaveItem"
        Me.GamesBindingNavigatorSaveItem.Size = New System.Drawing.Size(23, 22)
        Me.GamesBindingNavigatorSaveItem.Text = "Save Data"
        '
        'txtID
        '
        Me.txtID.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.GamesBindingSource, "ID", True))
        Me.txtID.Location = New System.Drawing.Point(126, 66)
        Me.txtID.Name = "txtID"
        Me.txtID.Size = New System.Drawing.Size(100, 20)
        Me.txtID.TabIndex = 2
        '
        'txtTitle
        '
        Me.txtTitle.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.GamesBindingSource, "Title", True))
        Me.txtTitle.Location = New System.Drawing.Point(159, 102)
        Me.txtTitle.Name = "txtTitle"
        Me.txtTitle.Size = New System.Drawing.Size(100, 20)
        Me.txtTitle.TabIndex = 4
        '
        'txtPlatform
        '
        Me.txtPlatform.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.GamesBindingSource, "Platform", True))
        Me.txtPlatform.Location = New System.Drawing.Point(159, 128)
        Me.txtPlatform.Name = "txtPlatform"
        Me.txtPlatform.Size = New System.Drawing.Size(100, 20)
        Me.txtPlatform.TabIndex = 6
        '
        'txtRating
        '
        Me.txtRating.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.GamesBindingSource, "Rating", True))
        Me.txtRating.Location = New System.Drawing.Point(159, 154)
        Me.txtRating.Name = "txtRating"
        Me.txtRating.Size = New System.Drawing.Size(100, 20)
        Me.txtRating.TabIndex = 8
        '
        'txtPrice
        '
        Me.txtPrice.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.GamesBindingSource, "Price", True, System.Windows.Forms.DataSourceUpdateMode.OnValidation, Nothing, "C2"))
        Me.txtPrice.Location = New System.Drawing.Point(159, 180)
        Me.txtPrice.Name = "txtPrice"
        Me.txtPrice.Size = New System.Drawing.Size(100, 20)
        Me.txtPrice.TabIndex = 10
        '
        'txtNewUsed
        '
        Me.txtNewUsed.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.GamesBindingSource, "NewUsed", True))
        Me.txtNewUsed.Location = New System.Drawing.Point(159, 206)
        Me.txtNewUsed.Name = "txtNewUsed"
        Me.txtNewUsed.Size = New System.Drawing.Size(100, 20)
        Me.txtNewUsed.TabIndex = 12
        '
        'txtQuantity
        '
        Me.txtQuantity.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.GamesBindingSource, "Quantity", True))
        Me.txtQuantity.Location = New System.Drawing.Point(159, 232)
        Me.txtQuantity.Name = "txtQuantity"
        Me.txtQuantity.Size = New System.Drawing.Size(100, 20)
        Me.txtQuantity.TabIndex = 14
        '
        'btnQuery1
        '
        Me.btnQuery1.BackColor = System.Drawing.SystemColors.GradientInactiveCaption
        Me.btnQuery1.ForeColor = System.Drawing.SystemColors.WindowFrame
        Me.btnQuery1.Location = New System.Drawing.Point(360, 73)
        Me.btnQuery1.Name = "btnQuery1"
        Me.btnQuery1.Size = New System.Drawing.Size(174, 49)
        Me.btnQuery1.TabIndex = 15
        Me.btnQuery1.Text = "Get PS or XBox platform items"
        Me.btnQuery1.UseVisualStyleBackColor = False
        '
        'btnQuery2
        '
        Me.btnQuery2.BackColor = System.Drawing.SystemColors.GradientInactiveCaption
        Me.btnQuery2.ForeColor = System.Drawing.SystemColors.WindowFrame
        Me.btnQuery2.Location = New System.Drawing.Point(360, 139)
        Me.btnQuery2.Name = "btnQuery2"
        Me.btnQuery2.Size = New System.Drawing.Size(174, 49)
        Me.btnQuery2.TabIndex = 16
        Me.btnQuery2.Text = "Get items priced at $39.99 or more"
        Me.btnQuery2.UseVisualStyleBackColor = False
        '
        'btnQuery3
        '
        Me.btnQuery3.BackColor = System.Drawing.SystemColors.GradientInactiveCaption
        Me.btnQuery3.ForeColor = System.Drawing.SystemColors.WindowFrame
        Me.btnQuery3.Location = New System.Drawing.Point(360, 206)
        Me.btnQuery3.Name = "btnQuery3"
        Me.btnQuery3.Size = New System.Drawing.Size(174, 49)
        Me.btnQuery3.TabIndex = 17
        Me.btnQuery3.Text = "Get all WII platform items"
        Me.btnQuery3.UseVisualStyleBackColor = False
        '
        'btnQuery4
        '
        Me.btnQuery4.BackColor = System.Drawing.SystemColors.GradientInactiveCaption
        Me.btnQuery4.ForeColor = System.Drawing.SystemColors.WindowFrame
        Me.btnQuery4.Location = New System.Drawing.Point(360, 277)
        Me.btnQuery4.Name = "btnQuery4"
        Me.btnQuery4.Size = New System.Drawing.Size(174, 49)
        Me.btnQuery4.TabIndex = 18
        Me.btnQuery4.Text = "Get all records sorted by price descending"
        Me.btnQuery4.UseVisualStyleBackColor = False
        '
        'btnQuery5
        '
        Me.btnQuery5.BackColor = System.Drawing.SystemColors.GradientInactiveCaption
        Me.btnQuery5.ForeColor = System.Drawing.SystemColors.WindowFrame
        Me.btnQuery5.Location = New System.Drawing.Point(360, 343)
        Me.btnQuery5.Name = "btnQuery5"
        Me.btnQuery5.Size = New System.Drawing.Size(174, 49)
        Me.btnQuery5.TabIndex = 19
        Me.btnQuery5.Text = "Get all PS platform items priced at $19.99 or more"
        Me.btnQuery5.UseVisualStyleBackColor = False
        '
        'btnClose
        '
        Me.btnClose.BackColor = System.Drawing.SystemColors.GradientInactiveCaption
        Me.btnClose.ForeColor = System.Drawing.SystemColors.WindowFrame
        Me.btnClose.Location = New System.Drawing.Point(470, 452)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(75, 53)
        Me.btnClose.TabIndex = 20
        Me.btnClose.Text = "Close"
        Me.btnClose.UseVisualStyleBackColor = False
        '
        'frmAssignment7
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = CType(resources.GetObject("$this.BackgroundImage"), System.Drawing.Image)
        Me.ClientSize = New System.Drawing.Size(685, 555)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnQuery5)
        Me.Controls.Add(Me.btnQuery4)
        Me.Controls.Add(Me.btnQuery3)
        Me.Controls.Add(Me.btnQuery2)
        Me.Controls.Add(Me.btnQuery1)
        Me.Controls.Add(lblQuantity)
        Me.Controls.Add(Me.txtQuantity)
        Me.Controls.Add(lblNewUsed)
        Me.Controls.Add(Me.txtNewUsed)
        Me.Controls.Add(lblPrice)
        Me.Controls.Add(Me.txtPrice)
        Me.Controls.Add(lblRating)
        Me.Controls.Add(Me.txtRating)
        Me.Controls.Add(lblPlatform)
        Me.Controls.Add(Me.txtPlatform)
        Me.Controls.Add(lblTitle)
        Me.Controls.Add(Me.txtTitle)
        Me.Controls.Add(lblID)
        Me.Controls.Add(Me.txtID)
        Me.Controls.Add(Me.GamesBindingNavigator)
        Me.Name = "frmAssignment7"
        Me.Text = "Form1"
        CType(Me.GaloreDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.GamesBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.GamesBindingNavigator, System.ComponentModel.ISupportInitialize).EndInit()
        Me.GamesBindingNavigator.ResumeLayout(False)
        Me.GamesBindingNavigator.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents GaloreDataSet As GaloreDataSet
    Friend WithEvents GamesBindingSource As BindingSource
    Friend WithEvents GamesTableAdapter As GaloreDataSetTableAdapters.GamesTableAdapter
    Friend WithEvents TableAdapterManager As GaloreDataSetTableAdapters.TableAdapterManager
    Friend WithEvents GamesBindingNavigator As BindingNavigator
    Friend WithEvents BindingNavigatorAddNewItem As ToolStripButton
    Friend WithEvents BindingNavigatorCountItem As ToolStripLabel
    Friend WithEvents BindingNavigatorDeleteItem As ToolStripButton
    Friend WithEvents BindingNavigatorMoveFirstItem As ToolStripButton
    Friend WithEvents BindingNavigatorMovePreviousItem As ToolStripButton
    Friend WithEvents BindingNavigatorSeparator As ToolStripSeparator
    Friend WithEvents BindingNavigatorPositionItem As ToolStripTextBox
    Friend WithEvents BindingNavigatorSeparator1 As ToolStripSeparator
    Friend WithEvents BindingNavigatorMoveNextItem As ToolStripButton
    Friend WithEvents BindingNavigatorMoveLastItem As ToolStripButton
    Friend WithEvents BindingNavigatorSeparator2 As ToolStripSeparator
    Friend WithEvents GamesBindingNavigatorSaveItem As ToolStripButton
    Friend WithEvents txtID As TextBox
    Friend WithEvents txtTitle As TextBox
    Friend WithEvents txtPlatform As TextBox
    Friend WithEvents txtRating As TextBox
    Friend WithEvents txtPrice As TextBox
    Friend WithEvents txtNewUsed As TextBox
    Friend WithEvents txtQuantity As TextBox
    Friend WithEvents btnQuery1 As Button
    Friend WithEvents btnQuery2 As Button
    Friend WithEvents btnQuery3 As Button
    Friend WithEvents btnQuery4 As Button
    Friend WithEvents btnQuery5 As Button
    Friend WithEvents btnClose As Button
End Class
