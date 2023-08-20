//recursion.cpp -- This program collects user input and returns a Loan Application and Amortization Schedule based on
//                 those inputs and function calculations.                 
//CSIS 212- B01
//<Citations if necessary> -- citations are required
//  for any references you used (outside of your book, 
//  the website associated with your book, or references
//  provided in class/Canvas).

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Function Prototypes

void ClearInvalidEntry();                      //Remove invalid entries
double PaymentCalculator(double principle, double monthlyInterestRate, int payments);      //Calculates monthly loan payments
void LoanAmortizaeSchedule(int currentPeriod, int totalPeriods, double paymentAmount, double monthlyInterestRate, double currentBalance);   //Calculate and display the Loan and Amortization Schedule

int main()
{
	cout << "Robert Kus -- Lab 1 - Recursion" << endl << endl;

	//Variable declarations

	double principle, annualInterestRate, monthlyInterestRate, paymentAmount;
	int loanTerm, payments, dynamicWidth;

	cout << "Loan Principle (Between 50000 and 100000 inclusive):  ";
	while (!(cin >> principle) || principle < 50000 || principle > 100000)
	{
		cout << endl << "The entry is invalid. Please enter a number between 50000 and 100000:  ";
		ClearInvalidEntry();
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << endl << "Annual Interest rate (Positive Decimal Number, ex: 5.1):  ";
	while (!(cin >> annualInterestRate) || annualInterestRate < 0)
	{
		cout << endl << "The entry is invalid. Please enter a positive decimal number:  ";
		ClearInvalidEntry();
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << endl << "Loan Term in Years (10, 15, 25, or 40):  ";
	while (!(cin >> loanTerm) || (loanTerm != 10 && loanTerm != 15 && loanTerm != 25 && loanTerm != 40))
	{
		cout << endl << "The entry is invalid. Please enter 10, 15, 25, or 40:  ";
		ClearInvalidEntry();
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << endl << "Loan Principle (Between 50000 and 100000 inclusive):  " << principle << endl;
	cout << "Annual Interest rate (Positive Decimal Number, ex: 5.1):  " << annualInterestRate << endl;
	cout << "Loan Term in Years (10, 15, 25, or 40):  " << loanTerm << endl;

	system("pause");
	system("cls");

	monthlyInterestRate = annualInterestRate / 12;    // APR / 12 months 
	payments = loanTerm * 12;                         // Loan Term (years) / 12 months

	paymentAmount = PaymentCalculator(principle, monthlyInterestRate, payments);

	cout << "Robert Kus -- Lab 1 - Recursion" << endl << endl;
	cout << "Loan Application Information and Amortization Schedule" << endl << endl;

	cout << "Principle:" << setw(51) << principle << endl;
	cout << "Life of Loan:" << setw(45) << loanTerm << " years" << endl;
	cout << "Annual Interest Rate:" << setw(38) << annualInterestRate << '%' << endl;
	cout << fixed << setprecision(2) << "Monthly Payment:" << setw(46) << paymentAmount << endl << endl << endl;

	cout << "Payment" << setw(15) << "Amount" << setw(20) << "Interest" << setw(20) << "Principle" << setw(20) << "Balance" << endl;

	dynamicWidth = 94 - int(to_string(principle).length());            // Column width set based on the length of principle.

	cout << setw(dynamicWidth) << principle << endl;

	LoanAmortizaeSchedule(1, payments, paymentAmount, monthlyInterestRate, principle);

	system("pause");
	return 0;
}

//User-Defined Functions

void ClearInvalidEntry()
{
	string invalidEntry;
	cin.clear();
	getline(cin, invalidEntry);
}

double PaymentCalculator(double principle, double monthlyInterestRate, int payments)
{
	double rate = monthlyInterestRate / 100;     //Convert percentage to decimal form
	double paymentAmount = principle * (rate * pow(1 + rate, payments)) / (pow(1 + rate, payments) - 1);
	return paymentAmount;
}

void LoanAmortizaeSchedule(int currentPeriod, int totalPeriods, double paymentAmount, double monthlyInterestRate, double currentBalance)
{
	double interestRate, principle, newBalance = currentBalance;
	int columnWidth;       // For setting dynamic column widths (based on user input). Ensures entries line up.

	if (currentPeriod > totalPeriods)      // Code will continue reiterating as long as the number of cycles do not exceed the number of Loan payment periods.
	{
		cout << endl;
	}
	else
	{
		interestRate = monthlyInterestRate / 100 * newBalance;
		principle = paymentAmount - interestRate;
		newBalance = newBalance - principle;

		if (newBalance < 0) newBalance = 0;

		columnWidth = 22 - int(to_string(currentPeriod).length());                 // Column width set based on the length of currentPeriod.

		cout << currentPeriod << setw(columnWidth) << paymentAmount << setw(20)        // Display results on console.
			<< interestRate << setw(20) << principle << setw(20)
			<< newBalance << endl;

		currentPeriod++;

		LoanAmortizaeSchedule(currentPeriod, totalPeriods, paymentAmount, monthlyInterestRate, newBalance);
	}
};