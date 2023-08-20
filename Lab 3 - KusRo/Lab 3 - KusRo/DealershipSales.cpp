/*
 *  DealershipSales.cpp -- The program will pull data from a file (based on user input) and use the contents of that file to record and display
 *       pertinent sales data. The file data will first be read from the file and stored into variables and lists. The program will display an error
 *       message with a pause before ending if the file cannot be found, read, or if it contains any invalid data within the file itself. After the file
 *       data is successfully read and stored, a salesperson object will be constructed using the stored data. Finally, using member functions from the
*       salesperson class, all important sales information will be calculated and displayed on the console before ending the program.
*/
// CSIS 112-B01
/*
*  Reference -
*           chmike, emali, fonfonx, Galik, Robinson, Woolweaver, M.D., . ...(2019). How do i verify a string is valid double (even if it has a 
*                  point in it)?. Stack Overflow. 
*				   https://stackoverflow.com/questions/29169153/how-do-i-verify-a-string-is-valid-double-even-if-it-has-a-point-in-it
*/


//Header files used in the program
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <sstream>           //Required for error-handling sections in the code.
#include "Salesperson.h"

using namespace std;             // Allows for cin and cout to be used without using the scope resolution operator, ::

//Function Prototypes

bool checkNumericValidity(string);                         //Check if user numeric entry is valid
bool checkIfPositiveValue(string);                         //Check if user numeric entry is a positive number.
int endProgramOnEarlyFileEnd();                            //End the program if the file is missing required information.
int endProgramOnDataError(string, bool);                   //Ends the program, using the string value passed in within the error message.

int main()
{
	cout << "Robert Kus -- Lab 3 - Vector Assignment" << endl << endl;

	//Variable declaration

	string salespersonName = "";            //Declare and initialize variables
	string dealershipName = "";
	string fileName = "";
	int salesGoal = 0;
	double commissionRate = 0;
	int sale;
	string salesGoalString = "";
	string commissionRateString = "";
	string saleString = "";
	ifstream salesFile;

	bool validGoal = true;                         //Declare boolean variables for error handling
	bool positiveGoal = true;
	bool validCommission = true;
	bool positiveCommission = true;
	bool validSale = true;
	bool positiveSale = true;


	salesperson salesPerson;          //Declare a new salesperson object.

	list<int> salesList;         //Declare and initialize a list for storing sale values in a list.

	//Program logic

	cout << "Enter the name of the file: ";
	getline(cin, fileName);

	salesFile.open(fileName.c_str());       //Try to open the selected file. The c-str function stores the file path as a character array, allowing
	//   filenames with spaces to be entered.

	if (salesFile) {                        //Only attempt to retrive and store the data from a file if the file exists. 

		getline(salesFile, salespersonName);                         //Use the getline function to retrieve all characters on the line, including spaces.
		if (salesFile.eof()) { return endProgramOnEarlyFileEnd(); }  //End the program if the file is missing data.
		
		getline(salesFile, dealershipName);
		if (salesFile.eof()) { return endProgramOnEarlyFileEnd(); }

		getline(salesFile, salesGoalString);           //Capture all characters on an expected numeric line (allows the entire line to be checked).
		if (salesFile.eof()) { return endProgramOnEarlyFileEnd(); }

		validGoal = checkNumericValidity(salesGoalString);                            //Test all numeric inputs to see if they are valid and positive.
		if (!validGoal) { return endProgramOnDataError("Sales Goal", false); }        //End the program if any of the numeric data values are invalid. 
		
		positiveGoal = checkIfPositiveValue(salesGoalString);
		if (!positiveGoal) { return endProgramOnDataError("Sales Goal", true); }

		salesGoal = stoi(salesGoalString);         //The stoi function converts a string into an integer.

		getline(salesFile, commissionRateString);
		if (salesFile.eof()) { return endProgramOnEarlyFileEnd(); }        //Final check on early end of file.

		validCommission = checkNumericValidity(commissionRateString);
		if (!validCommission) { return endProgramOnDataError("Commission Percentage", false); }

		positiveCommission = checkIfPositiveValue(commissionRateString);
		if (!positiveCommission) { return endProgramOnDataError("Commission Percentage", true); }

		commissionRate = stod(commissionRateString);    //The stod function converts a string into a double       
		////if (salesFile.eof()) { return endProgramOnEarlyFileEnd(); }        //Final check on early end of file.

		getline(salesFile, saleString);                                    //File must have at least one sale value.
		validSale = checkNumericValidity(saleString);
		if (!validSale) { return endProgramOnDataError("Sales Amount", false); }

		positiveSale = checkIfPositiveValue(saleString);
		if (!positiveSale) { return endProgramOnDataError("Sales Amount", true); }

		sale = stoi(saleString);
		salesList.push_back(sale);        

		while (!salesFile.eof()) {
			getline(salesFile, saleString);                                  //Continue reading and storing values as long as they are valid.
			if (!saleString.empty()) {
				validSale = checkNumericValidity(saleString);
				if (!validSale) { return endProgramOnDataError("Sales Amount", false); }

				positiveSale = checkIfPositiveValue(saleString);
				if (!positiveSale) { return endProgramOnDataError("Sales Amount", true); }

				sale = stoi(saleString);

				salesList.push_back(sale);         //Store each sale value to salesList
			}
		};

		salesPerson = salesperson(salespersonName, dealershipName, salesGoal, commissionRate);    //Construct the salesperson object.

		for (const int& salesValue : salesList) {
			salesPerson.addSalesAmount(salesValue);      //Add each value in salesList to the sales vector (located in the sales class)
		}

		salesPerson.displaySalesInfo();                 //Display sales information.
	}
	else { cout << "Sorry, that file cannot be reached. Please try again." << endl; }  //Display error message if file cannot be read or found.

	salesFile.close();

	system("Pause");
	return 0;

}

//User-Defined Functions

//Checks if the file value is a valid number (Checks each string character individually)
bool checkNumericValidity(string entry) {

	if (entry.empty()) { return false; }
	
	//(chmike et al., 2019)
	long double number;                                                    
	return ((istringstream(entry) >> number >> ws).eof());     //Returns true or false based on if the string entry is successfully stored in number,
	                                                           // ignoring preceding and subsequent white space. Also checks if entry is the end of file.
}

//Checks if the file value is greater than zero (non-negative number)
bool checkIfPositiveValue(string entry) {

	double input = stod(entry);        //Convert string to a double

	if (input < 0) { return false; }

	return true;
}

//Ends program if the file is missing data and the end of the file is reached before all required data is read in and stored.
int endProgramOnEarlyFileEnd() {

	cout << endl << "File is missing required data." << endl;
	cout << "Exiting program" << endl;
	system("Pause");
	return 0;
}

//Ends the program if any input errors are found in the sales file.
int endProgramOnDataError(string valueType, bool isNegative) {

	/*
	* This line of code uses a ternary operator (?) and is a short-handed if statement.
	* The statement left of the ternary operator is the condition statment. On the right are the possible return values.
	* It will set errorType to "Non-positive" the condition is true and "Non-numeric" if it is false.
	* Pulled from my work experience.
	*/
	string errorType = isNegative ? "Non-positive" : "Non-numeric";

	cout << endl << errorType + " data received for " + valueType + "." << endl;       //Error messages will vary based on the value of the string parameter.
	cout << "Exiting program" << endl;
	system("Pause");
	return 0;
}