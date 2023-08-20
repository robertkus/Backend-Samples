/*
* Salesperson.h - The salesperson class collects the name of the sales person, the dealership's name, the sales goal, the commission percentage, and
* all of the sales achieved (stored in a vector). Functions that are members of the class then use the information to calculate the average of all sales
* earned, what the smallest sale was, what the largest sale was, the total sales earned, and the commisioned earned from all sales. Other member
* functions adds a new positive amount to sales, sort all sales in ascending order, and display all relevant sales information
*/

#include <string>
#include <vector>

class salesperson {
public:
	void addSalesAmount(int);                   // Adds a positive sales amount to the sales vector
	void sortSalesAmounts();                    // Sort the sales vector in ascending order
	int getSmallestSale();                      // Get the smallest value in the sales vector
	int getLargestSale();                       // Get the largest value in the sales vector
	int getNumberSales();                       // Return the number of sales in the vector
	int calcTotalSales();                       // Calculate and return the sum of all sales in the vector
	double calcSalesAverage(double, int);       // Calculate the average of all sales amounts in the sales vector
	double calcCommissionEarned(double);        // Calculate and return the commission obtained from sales
	void displaySalesInfo();                    // Display all relevant sales information (the salesperson's name, dealership's name, 
	                                            //   sales goal, commission percentage, total sales, earned commission, the sorted sales vector)

	salesperson();                   // Default constructor                                              
	salesperson(std::string, std::string, int, double);     //Parameter-based constructor

private:
	std::string salespersonName;                          // The name of the sales person
	std::string dealershipName;                           // The name of the dealership
	int salesGoal;                                        // Sales goal as an integer
	double commissionPercentage;                          // Commission percentage as a double
	std::vector<int> sales;                               // Vector of sales
};