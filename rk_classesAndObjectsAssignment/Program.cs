using System;

namespace rk_classesAndObjectsAssignment
{
    public class SavingsAccountTest
    {
        static void Main(string[] args)
        {
            // Declare and initialize local constants and variables
            const double saver1Balance = 2000;
            const double saver2Balance = 3000;
            const double saver3Balance = 50000;

            const double initialInterestRate = 0.04;
            const double updatedInterestRate = 0.05;

            /* Create three savings account objects. Create the first
               two object with the parameter-based constructor; the first
               with a savings balance of $2,000.00 and account name 
               'Saver_One', and the secont with a savings balance of $3,000.00
               and account name 'Saver_Two'. Build the third object with the
               default constructor. */
            SavingsAccount saver1 = new SavingsAccount(saver1Balance, "Saver_One");
            SavingsAccount saver2 = new SavingsAccount(saver2Balance, "Saver_Two");
            SavingsAccount saver3 = new SavingsAccount();

            // Set each savings account's annual interest rate to 4%.
            saver1.setAnnualInterestRate(initialInterestRate);
            saver2.setAnnualInterestRate(initialInterestRate);
            saver3.setAnnualInterestRate(initialInterestRate);

            /* Use the setSavingsAccountName and setSavingBalance
               methods to set saver3's account name to 'Saver_Three'
               and account balance to $50,000.00. */
            saver3.setSavingsAccountName("Saver_Three");
            saver3.setSavingsBalance(saver3Balance);

            // Display initial saving account balance information.
            Console.WriteLine("Initial savings account balances:");
            saver1.PrintSavingsAccount();
            saver2.PrintSavingsAccount();
            saver3.PrintSavingsAccount();

            /* Add the monthly interest to each savings account balance 
               with the annual interest rate at 4%.*/
            saver1.CalculateMonthlyInterest();
            saver2.CalculateMonthlyInterest();
            saver3.CalculateMonthlyInterest();

            /* Display the saving account balance information after adding
               the monthly interest to each account balance at 4% interest. */
            Console.WriteLine("\nSavings account balances after calculating monthly " +
                "interest at 4%:");
            saver1.PrintSavingsAccount();
            saver2.PrintSavingsAccount();
            saver3.PrintSavingsAccount();

            /* Change the annual interest rate for each object to 5% and 
               add the monthly interest to each account balance(reset 
               each balance to their initial ammount prior to calculating
               the monthly interest). */

            // Reset each account's balances to their initial amounts.
            saver1.setSavingsBalance(saver1Balance);
            saver2.setSavingsBalance(saver2Balance);
            saver3.setSavingsBalance(saver3Balance);

            // Set each account's annual interest rate to 5%.
            saver1.setAnnualInterestRate(updatedInterestRate);
            saver2.setAnnualInterestRate(updatedInterestRate);
            saver3.setAnnualInterestRate(updatedInterestRate);

            /* Add the monthly interest to each savings account balance 
               with the annual interest rate at 5%.*/
            saver1.CalculateMonthlyInterest();
            saver2.CalculateMonthlyInterest();
            saver3.CalculateMonthlyInterest();

            /* Display the saving account balance information after adding
               the monthly interest to each account balance at 5% interest. */
            Console.WriteLine("\nSavings account balances after calculating monthly " +
                "interest at 5%:");
            saver1.PrintSavingsAccount();
            saver2.PrintSavingsAccount();
            saver3.PrintSavingsAccount();

            Console.WriteLine("\nPress any key to continue...");
            Console.ReadKey();
        }
    }

    /* The SavingsAccount class represents a single person's savings account.
       Each instance of this class can hold information about the account
       name, the account balance, and annual interest rate. Each class
       instance also includes methods that can be used to get and set the
       account name, get and set the savings balance, set the annual interest
       rate, and calculate the monthly interest. */
    public class SavingsAccount
    {
        // Declare static and private instance variables.
        private static double annualInterestRate;
        private double savingsBalance;
        private string savingsAccountName;

        // The default constructor for the SavingsAccount class
        public SavingsAccount() { }

        // The parameter-based constructor for the SavingsAccount class
        public SavingsAccount(double balance, string accountName)
        {
            savingsBalance = balance;
            savingsAccountName = accountName;
        }

        // A mutator method that allows the savingsAccountName to be set
        public void setSavingsAccountName(string accountName)
        {
            savingsAccountName = accountName;
        }

        // An accessor method that allows the savingsAccountName to be retrieved
        public string getSavingsAccountName()
        {
            return savingsAccountName;
        }

        // A mutator method that allows the savingsBalance to be set
        public void setSavingsBalance(double balance)
        {
            savingsBalance = balance;
        }

        // An accessor method that allows the savingsBalance to be retrieved
        public double getSavingsBalance()
        {
            return savingsBalance;
        }

        // A mutator method that allows the savingsBalance to be set
        public void setAnnualInterestRate(double rate)
        {
            annualInterestRate = rate;
        }

        // An assessor method that allows the annualInterestRate to be retrieved.
        public double getAnnualInterestRate()
        {
            return annualInterestRate;
        }
        
        /* A method that calculates the monthly interest for the account 
           and adds it to the savings balance */
        public void CalculateMonthlyInterest()
        {
            /* Multiply savingsBalance by annualInterestRate, divide
               by 12, and add that amount to the savingsBalance
               (ex: If the savings balance is 4000.00 and the annual
                interest rate is 0.4, then the monthly interest would be
                about 133.33 (4000 * 0.4 / 12) and the new savings
                balance would be about 4133.33).
             */
            savingsBalance += savingsBalance * annualInterestRate / 12;
        }

        // A method that print the initial saving account balances
        public void PrintSavingsAccount()
        {
            Console.WriteLine("{0}\t{1}\t{2}", getSavingsAccountName(), getSavingsBalance(), getAnnualInterestRate());
        }
    }
}
