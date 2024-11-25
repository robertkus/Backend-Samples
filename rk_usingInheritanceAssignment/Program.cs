using System;

namespace rk_usingInheritanceAssignment
{
    internal class Program
    {
        // Declare and initialize class constants and variables
        const decimal checkAcctFeeCharged = 3;

        static void Main(string[] args)
        {
            // Declare and intialize local constants and variables
            const string lastName = "Kus";

            // Initialize the checking account with a balance of $1,000, account name "Kus-Checking",
            // account number 1, and a $3.00 charge fee.
            CheckingAccount checkingAccount = new CheckingAccount(
                1000,
                $"{lastName}-Checking",
                1,
                checkAcctFeeCharged);

            // Initialize the savings account with a balance of $2,000, account name "Kus-Savings",
            // account number 2, and a 5% interest rate.
            SavingsAccount savingsAccount = new SavingsAccount(
                2000,
                lastName + "-Savings",
                2,
                5); 

            // Print descriptions of the new accounts.
            Console.WriteLine("Created checking account with $1,000 balance.");
            Console.WriteLine("Created savings account with $2,000 balance.\n");

            // Print the checking account and savings account information
            checkingAccount.PrintAccount();
            savingsAccount.PrintAccount();

            // Deposit $100 into the checking account, showing a description of the transaction.
            DepositOrWithdrawChecking(checkingAccount, 100);

            // Withdraw $50 from the checking account, showing a description of the transaction.
            DepositOrWithdrawChecking(checkingAccount, 50, true);

            // Withdraw $6000 into the checking account, showing a description of the transaction.
            // Note: This should print an "Insufficient funds" message.
            DepositOrWithdrawChecking(checkingAccount, 6000, true);

            // Deposit $3000 into the savings account, showing a description of the transaction.
            DepositOrWithdrawSavings(savingsAccount, 3000);

            // Withdraw $200 from the savings account, showing a description of the transaction.
            DepositOrWithdrawSavings(savingsAccount, 200, true);

            // Calculate the interest on the savings account, showing a description of the transaction.
            Console.WriteLine("Calculate Interest on savings.");
            Console.WriteLine($"Interest Earned: {savingsAccount.CalculateInterest().ToString("c")}");
            savingsAccount.PrintAccount();

            // Withdraw $10,000 from the savings account, showing a description of the transaction.
            // Note: This should print an "Insufficient funds" message.
            DepositOrWithdrawSavings(savingsAccount, 10000, true);

            // Prompt the user to press any key to end the program.
            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }

        // Create private methods to help print debit and credit actions to the accounts.
        // Set the isWithdrawal parameters equal to false to default that value to false if no value
        // for the parameter is entered.
        private static void DepositOrWithdrawChecking(
            CheckingAccount checkingAccount,
            decimal amount,
            bool isWithdrawal = false)
        {
            if (isWithdrawal)
            {
                Console.WriteLine($"Withdraw {amount.ToString("c")} from checking.");
                bool isSuccessful = checkingAccount.Debit(amount);

                if (isSuccessful)
                {
                    checkingAccount.setBalance(checkingAccount.getBalance() - checkAcctFeeCharged);
                }
            }
            else
            {
                Console.WriteLine($"Deposit {amount.ToString("c")} into checking.");
                checkingAccount.Credit(amount);
            }

            checkingAccount.PrintAccount();
        }

        private static void DepositOrWithdrawSavings(
            SavingsAccount savingsAccount,
            decimal amount,
            bool isWithdrawal = false)
        {
            if (isWithdrawal)
            {
                Console.WriteLine($"Withdraw {amount.ToString("c")} from savings.");
                savingsAccount.Debit(amount);
            }
            else
            {
                Console.WriteLine($"Deposit {amount.ToString("c")} into savings.");
                savingsAccount.Credit(amount);
            }

            savingsAccount.PrintAccount();
        }
    }

    // The Account class holds basic bank account information and
    // is the base class for the SavingsAccount and CheckingAccount classes
    public class Account
    {
        // Declare private instance variables.
        private decimal Balance;
        private string AccountName;
        private int AccountNumber;

        // Create the Account default constructor.
        public Account() { }

        // Create Account parameter-based constructor.
        public Account(
            decimal balance,
            string accountName,
            int accountNumber)
        {
            // Initialize the private properties with the parameter values.
            Balance = balance;
            AccountName = accountName;
            AccountNumber = accountNumber;
        }

        // Create public mutator methods.
        public void setAccountName(string accountName)
        {
            AccountName = accountName;
        }

        public void setAccountNumber(int accountNumber)
        {
            AccountNumber = accountNumber;
        }

        public void setBalance(decimal balance)
        {
            // If the balance is less than 0, set the Balance to 0.
            // Otherwise, set the Balance equal to the value provided in the parameter.

            Balance = balance >= 0
                ? balance
                : 0;
        }

        // Create public accessor methods.
        public string getAccountName()
        {
            return AccountName;
        }

        public int getAccountNumber()
        {
            return AccountNumber;
        }

        public decimal getBalance()
        {
            return Balance;
        }

        // This method adds a given amount to the current balance
        // , set to virtual to allow for overrides.
        public virtual void Credit(decimal credit)
        {
            Balance += credit;
        }

        // This method subtracts a given amount from the current balance.
        public void Debit(decimal debit)
        {
            // Display an insufficient funds message to the user if the debit amount
            // is greater than what the Balance is and exit the method without changing
            // the Balance.
            if (Balance < debit)
            {
                Console.WriteLine("Insufficient Funds.");
                return;
            }

            Balance -= debit;
        }

        // This method prints the current account information, set to virtual to allow for overrides.
        public virtual void PrintAccount()
        {
            Console.WriteLine($"Account Name: {AccountName}");
            Console.WriteLine($"Account Number: {AccountNumber}");
            Console.WriteLine($"Balance: {Balance.ToString("c")}");
        }
    }

    // Build the SavingsAccount class that inherits from the Account class.
    public class SavingsAccount : Account
    {
        // Declare instance variables.
        private double InterestRate;

        // Create the SavingsAccount default constructor.
        public SavingsAccount() { }

        // Create the SavingsAccount parameter-based constructor, utilizing
        // unique parameters and calling the base Account constructor to feed
        // parameters for its properties.
        public SavingsAccount(
            decimal balance,
            string accountName,
            int accountNumber,
            double interestRate)
            : base(balance, accountName, accountNumber)
        {
            // Initialize the private InterestRate property with the parameter value provided.
            InterestRate = interestRate;
        }

        // Create public mutator and accessor methods.
        public void setInterestRate(double interestRate)
        {
            // If the interest rate provided is positive, set the InterestRate value to that
            // number. Otherwise, set the InterestRate value to 0.
            InterestRate = interestRate >= 0 ? interestRate : 0;
        }

        public double getInterestRate()
        {
            return InterestRate;
        }

        // This method calculates and returns the interest earned on a balance
        public decimal CalculateInterest()
        {
            // Multiply the current balance by the interest rate, casting the interest
            // rate as a decimal and dividing it by 100 before performing the calculation. Use the getBalance
            // method in the Account class to get the Balance.
            decimal interestEarned = getBalance() * (decimal)InterestRate/100;

            // Add the interest earned to to current balance and return the interest earned.
            setBalance(getBalance() + interestEarned);
            return interestEarned;
        }

        // This method prints the current account information, including the interest rate.
        public override void PrintAccount()
        { 
            // Call the base class' PrintAccount method before adding more statements.
            base.PrintAccount();
            Console.WriteLine($"Interest rate: {InterestRate}%\n");
        }
    }

    // Build the CheckingAccount class that inherits from the Account class.
    public class CheckingAccount : Account
    {
        // Declare private instance variables.
        private decimal FeeCharged;

        // Build the default constructor.
        public CheckingAccount() { }

        // Build the parameter-based constructor, initializing the properties of this class
        // as well as the base class.
        public CheckingAccount(
            decimal balance,
            string accountName,
            int accountNumber,
            decimal feeCharged)
            : base(balance, accountName, accountNumber)
        {
            FeeCharged = feeCharged;
        }

        // Create public mutator method.
        public void setFeeAmount(decimal feeCharged)
        {
            // If the parameter value provided is positive, set the FeeCharged value to that
            // number. Otherwise, set the FeeCharged value to 0.
            FeeCharged = feeCharged >= 0 ? feeCharged : 0;
        }

        // Override the base Credit method with logic unique for this class.
        public override void Credit(decimal credit)
        {
            // Call the base Credit method to add the credit to the balance, while
            // subtracting the FeeCharged value from the balance.
            base.Credit(credit - FeeCharged);
        }

        // Build a new Debit method unique for this class, using the new keyword to
        // indicate this method is not related to the base's Debit method.
        // This method returns true if money was withdrawn and false if money was not.
        public new bool Debit(decimal debit)
        {
            // Return false if the balance is less than the parameter value plus the charge fee and
            // print an "Insufficient Funds" message.
            if (getBalance() < (debit + FeeCharged))
            {
                Console.WriteLine("Insufficient Funds.");
                return false;
            }

            // Call the base Debit method to subtract the balance by the parameter value.
            // Note: If we only call the base Debit method as this method's entire logic and pass in debit + FeeCharged as the base method's parameter,
            // we could make the CheckingAccount's Debit method return type void and still get the desired results.
            base.Debit(debit);

            //Return true, signaling a successful transaction and to signal that the charge fee should be applied.
            return true;
        }

        // This method prints the current account information, including the fee charged.
        public override void PrintAccount()
        {
            // Call the base class' PrintAccount method before adding more statements.
            base.PrintAccount();
            Console.WriteLine($"Fee charged: {FeeCharged.ToString("c")}\n");
        }
    }
}
