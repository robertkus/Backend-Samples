/*
* Salesperson.cpp - Defines and executes the functions and constructors that are members of the salesperson class.
*/


#include <iostream>
#include <iomanip>
#include <algorithm>                               //The algorithm header file includes the sort function.
#include "Salesperson.h"    

using namespace std;

void salesperson::addSalesAmount(int sale) {       //Adds a sale number to the sales vector. 
	sales.push_back(sale);                         //The push_back function adds a value to a vector.
};

void salesperson::sortSalesAmounts() {             //Sorts the values stored in the sales vector in ascending order and displays each value on the console.

	sort(sales.begin(), sales.end());

	for (const int& sale : sales) {                //Use a for loop to iterate through each item in the vector and display those items individually.
		cout << setw(40) << sale << endl;
	}
};

int salesperson::getSmallestSale() {              //Return the smallest sale in the final vector.

	int smallest = sales[0];                      //This variable stores the smallest value in sales and is initialized by the first value in sales.

	for (const int& sale : sales) {               //Loop interates through the sales vector.
		if (sale < smallest) {
			smallest = sale;                      //If the sale value is smaller than the value stored in smallest, set smallest equal to that value.
		}
	}

	return smallest;                    //Return the smallest value.
};

int salesperson::getLargestSale() {              //Return the largest sale in the final vector.

	int largest = sales[0];                      //This variable stores the largest value in sales and is initialized by the first value in sales. 

	for (const int& sale : sales) {              //Loop interates through the sales vector.
		if (sale < largest) {
			largest = sale;						 //If the sale value is larger than the value stored in largest, set largest equal to that value.
		}
	}

	return largest;                     //Return the largest value.
};

int salesperson::getNumberSales() {              //Returns the number of sale values stored in sales.
    return int(sales.size());
};

int salesperson::calcTotalSales() {              //Returns the sum of all sales stored in the sales vector.

	int totalSales = 0;           //Initialize sales total to 0.

	for (const int& sale : sales) {    //Iterate through sales and add each value in sales to the total sales.
		totalSales += sale;
	}
	return totalSales;
};

double salesperson::calcSalesAverage(double totalSales, int salesCount) {     //Calculates and returns the average sale value of every vehicle sold.
	//Uses the total number of sales and the number of sales as parameters.
	return totalSales / salesCount;
};

double salesperson::calcCommissionEarned(double totalSales) {         //Calculate the total commission earned from sales.

	return totalSales * commissionPercentage / 100;      //The commission percentage needs to be converted from whole number to decimal form.                      
};

void salesperson::displaySalesInfo() {

	double totalSales = calcTotalSales();               //Store results of functions in variables and use variables as parameters for subsequent functions.
	int salesCount = getNumberSales();
	int smallestSale = getSmallestSale();
	int largestSale = getLargestSale();
	double averageSale = calcSalesAverage(totalSales, salesCount);
	double commissionEarned = calcCommissionEarned(totalSales);

	cout << fixed << setprecision(2);               //Display all double values to two decimal places

	cout << endl << setw(40) << "Dealership: " << dealershipName << endl;                      //Display all relevant sales information.
	cout << setw(40) << "Salesperson: " << salespersonName << endl;
	cout << setw(40) << "Sales Goal: " << salesGoal << endl;
	cout << setw(40) << "Total Sales: " << totalSales << endl;
	cout << setw(40) << "Number of Sales: " << salesCount << endl;
	cout << setw(40) << "Average Sale: " << averageSale << endl;
	cout << setw(40) << "Commission Percentage: " << commissionPercentage << "%" << endl;
	cout << setw(40) << "Commission Earned: " << commissionEarned << endl;
	cout << setw(40) << "Smallest Sale: " << smallestSale << endl;
	cout << setw(40) << "Largest Sale: " << largestSale << endl;
	cout << setw(40) << "List of Sales (sorted): " << endl;
	sortSalesAmounts();           //Call the function used to sort all sales values and display them in ascending order.
};

//The sales vector is declared and initialized as an empty vector and does not need to be initialized in the constructors.

salesperson::salesperson() {               //Default constructor initializes numeric variables to 0 and strings to empty strings.
	salespersonName = "";
	dealershipName = "";
	salesGoal = 0;
	commissionPercentage = 0.0;
};

salesperson::salesperson(string salesperson, string dealership, int goal, double commission) {    //Parameter-based constructor.
	salespersonName = salesperson;
	dealershipName = dealership;
	salesGoal = goal;
	commissionPercentage = commission;
};