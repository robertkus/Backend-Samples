'CLASSES AND OBJECTS PROGRAMMING ASSIGNMENT
'This assignment utilizes properties and methods from a class to store and manipulate user inputs (in this case, the balance).
'The main class will create an instance of the external class, allowing it to store user inputs to it properties,
'and utilize its methods to perform operations on those properties.
'Robert Kus
'I will not use code that was never covered in class or in our textbook.
'If you do you must be able to explain your code when asked by the professor.
'Using code outside of the resources provided,
'it can be flagged and reported as an academic integrity violation if there is any suspicion of copying/cheating.

Public Class frmAssignment6

    'Declare global variables
    Dim enteredAmount As Double
    Dim budgetReceipts As New BudgetReceipts
    Dim amountDescription As String

    'Get the user's initial budget when the application first opens.
    'If no value or an invalid amount is entered, continue to prompt the user until one is entered.
    Private Sub frmAssignment6_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Dim isValidBudget = False
        Dim initialBalance As String

        'Initialize enteredamount
        enteredAmount = 0

        While isValidBudget = False
            initialBalance = InputBox("Please enter a starting balance in the input box provided (ex: 400.00).", "Enter Starting Balance")
            If initialBalance = "" Then
                MessageBox.Show("Please enter a value before continuing.")
                isValidBudget = False
            Else
                Double.TryParse(initialBalance, enteredAmount)
                If enteredAmount <= 0 Then
                    MessageBox.Show("Please enter an integer or decimal value grater than zero.")
                    enteredAmount = 0
                    isValidBudget = False
                Else
                    isValidBudget = True
                End If
            End If
        End While

        'Add the entered amount to the Balance.
        budgetReceipts.Income(enteredAmount)

        'Add the entered amount as a starting balance to the income list
        lstMonthIncome.Items.Add("Starting Balance - " & enteredAmount.ToString("C2"))

        'Update the Total Income based on the Balance value.
        txtTotalIncome.Text = budgetReceipts.Balance.ToString("C2")

        'Reset the enteredAmount and amountDescription
        ResetAmountAndDescription()
    End Sub

    'Allow the user to add a source of income to the balance (value and source)
    Private Sub btnEnterIncome_Click(sender As Object, e As EventArgs) Handles btnEnterIncome.Click
        'Check if an Amount was entered and if the value is in the correct format.
        Dim isValidInput = CheckForValidInput()

        'Immediately exit the code if there is any invalid inputs
        If isValidInput = False Then
            Return
        End If

        'Get the decription of the income from the user. Exit out of Sub if no description is entered.
        amountDescription = InputBox("Please provide a description of the amount.", "Amount description")

        If amountDescription = "" Then
            MessageBox.Show("No description was entered. Unable to add income.")
            Return
        End If

        'Add the entered amount to the Balance.
        budgetReceipts.Income(enteredAmount)

        'Add the new value to the income list.
        lstMonthIncome.Items.Add(amountDescription & " - " & enteredAmount.ToString("C2"))

        'Update the Total Income based on the Balance value.
        txtTotalIncome.Text = budgetReceipts.Balance.ToString("C2")

        'Reset the enteredAmount and amountDescription
        ResetAmountAndDescription()
    End Sub

    Private Sub btnEnterExpense_Click(sender As Object, e As EventArgs) Handles btnEnterExpense.Click
        'Check if an Amount was entered and if the value is in the correct format.
        Dim isValidInput = CheckForValidInput()

        'Immediately exit the code if there is any invalid inputs
        If isValidInput = False Then
            Return
        End If

        'Get the decription of the expense from the user. Exit out of Sub if no description is entered.
        amountDescription = InputBox("Please provide a description of the amount.", "Amount description")

        If amountDescription = "" Then
            MessageBox.Show("No description was entered. Unable to add expense.")
            Return
        End If

        'Subtract the entered amount from the Balance.
        budgetReceipts.Expenses(enteredAmount)

        'Add the new value to the expense list.
        lstMonthExpense.Items.Add(amountDescription & " - " & enteredAmount.ToString("C2"))

        'Update the Total Income based on the Balance value.
        txtTotalIncome.Text = budgetReceipts.Balance.ToString("C2")

        'Display a warning message while the budget drops below zero.
        If budgetReceipts.Balance < 0 Then
            MessageBox.Show("Warning: You currently hold a negative balance.")
        End If

        'Reset the enteredAmount and amountDescription
        ResetAmountAndDescription()
    End Sub

    'Reset the enteredAmount and amountDescription variables to their initial values.
    Private Sub ResetAmountAndDescription()
        enteredAmount = 0
        amountDescription = ""
    End Sub

    'Check if a user's input is valid.
    'Display the appropriate error message and return false if the input is invalid.
    'Otherwise, return true.
    Private Function CheckForValidInput() As Boolean
        If Me.txtAmount.Text = "" Then
            MessageBox.Show("No amount was entered. Please enter a numeric value greater than zero in the Amount box.")
            Return False
        End If

        Double.TryParse(Me.txtAmount.Text, enteredAmount)

        If enteredAmount <= 0 Then
            MessageBox.Show("The value entered is invalid. Please enter a numeric value greater than zero in the Amount box.")
            enteredAmount = 0
            Return False
        End If

        Return True
    End Function
End Class

'This an external class for holding and handling budget information.
Public Class BudgetReceipts
    'Declare the private currentBalance property
    Private currentBalance As Double

    'Set the property balance so that the current balance can only be read publicly
    Public ReadOnly Property Balance() As Double
        Get
            Return currentBalance
        End Get
    End Property

    'Add the entered income to the Balance
    Public Sub Income(incomeSource As Double)
        currentBalance += incomeSource
    End Sub

    'Subtract the entered expense from the Balance
    Public Sub Expenses(expenseSource As Double)
        currentBalance -= expenseSource
    End Sub
End Class
