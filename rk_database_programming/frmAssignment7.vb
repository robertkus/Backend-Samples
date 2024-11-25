'DATABASE PROGRAMMING ASSIGNMENT
'This program explores the use of database tables in Visual Basic. Users can run preset queries by clicking any
'one of the five query buttons on the UI. By clicking on a query button, the data populated in the form will be
'updated and ordered based on the selected query.
'Robert Kus
'I will not use code that was never covered in class or in our textbook. If you do you must be able
'to explain your code when asked by the professor. Using code outside of the resources provided,
'it can be flagged and reported as an academic integrity violation if there is
'any suspicion of copying/cheating.” 

Public Class frmAssignment7
    Private Sub GamesBindingNavigatorSaveItem_Click(sender As Object, e As EventArgs) Handles GamesBindingNavigatorSaveItem.Click
        'Apply a try catch loop on logic and display the error message if needed.
        Try
            Me.Validate()
            Me.GamesBindingSource.EndEdit()
            Me.TableAdapterManager.UpdateAll(Me.GaloreDataSet)
        Catch ex As Exception
            MessageBox.Show("There was an error with saving the database:" & ex.Message)
        End Try
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: This line of code loads data into the 'GaloreDataSet.Games' table. You can move, or remove it, as needed.
        Me.GamesTableAdapter.Fill(Me.GaloreDataSet.Games)

    End Sub

    'Returns PS or XB platform data on button click.
    Private Sub btnQuery1_Click(sender As Object, e As EventArgs) Handles btnQuery1.Click
        Me.GamesTableAdapter.GetPSOrXBData()
        Me.GamesTableAdapter.FillPSOrXBData(Me.GaloreDataSet.Games)
    End Sub

    'Returns data for items that have a price greater than or equal to $39.99 on button click.
    Private Sub btnQuery2_Click(sender As Object, e As EventArgs) Handles btnQuery2.Click
        Me.GamesTableAdapter.GetGreaterOrEqualPriceData()
        Me.GamesTableAdapter.FillGreaterOrEqualPriceData(Me.GaloreDataSet.Games)
    End Sub

    'Returns WII platform data on button click.
    Private Sub btnQuery3_Click(sender As Object, e As EventArgs) Handles btnQuery3.Click
        Me.GamesTableAdapter.GetWIIPlatformData()
        Me.GamesTableAdapter.FillWIIPlatformData(Me.GaloreDataSet.Games)
    End Sub

    'Returns all new items data on button click.
    Private Sub btnQuery4_Click(sender As Object, e As EventArgs) Handles btnQuery4.Click
        Me.GamesTableAdapter.GetDataByPriceDesc()
        Me.GamesTableAdapter.FillDataByPriceDesc(Me.GaloreDataSet.Games)
    End Sub

    'Returns PS platform data that has a price greater than or equal to $19.99 on button click.
    Private Sub btnQuery5_Click(sender As Object, e As EventArgs) Handles btnQuery5.Click
        Me.GamesTableAdapter.GetPSItemsGreaterOrEqualData()
        Me.GamesTableAdapter.FillPSItemsGreaterOrEqualData(Me.GaloreDataSet.Games)
    End Sub

    'Close the application.
    Private Sub btnClose_Click(sender As Object, e As EventArgs) Handles btnClose.Click
        Me.Close()
    End Sub
End Class
