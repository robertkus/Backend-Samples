/*
 *  RectangleDriver.cpp -- This program uses the rectangle class from the header file Rectangle.h to produce a rectangle based on proper length and width
 *  inputs. The program length and width user inputs and returns the perimeter, area, diagonal, and data of the rectangle based on those 
 *  inputs.
 *  The rectangle class and it's members are located in the rectangle.h file. The source file that defines and implements the functions that are
 *  members of the rectangle class is Rectangle.ccp.
 */

//CSIS 112-B01

// Header files used in the program
#include <iostream>            
#include <string>
#include "Rectangle.h"

using namespace std;             // Allows for cin and cout to be used without using the scope resolution operator, ::

//Function Prototypes

bool checkValidity(double input);       // Check if user entry is valid
int endProgram();                       // Ends the program if the user enters -1

int main()
{
	cout << "Robert Kus -- Lab 2 - Rectangle" << endl << endl;

	//Variable declaration

	rectangle thisRectangle;               // Declare a rectangle object.

	double length;        // Declare local variables that will collect user entries for length and width.
	double width;         // The values for length and width will be passed in as parameters when the rectangle constructor is called.

	bool continueProgram = true;         // Determines whether the program continues or ends.          
	bool isValidLength = true;           // Determines if a user's length entry is valid.
	bool isValidWidth = true;            // Determines if a user's width entry is valid.

	while (continueProgram)                     // The while loop will continue as long as continueProgram is true.
	{
		cout << endl << "Please enter a length for the rectangle as a positive number (-1 to exit): " << endl;
		cin >> length;
		isValidLength = checkValidity(length);

		while (!isValidLength)                  // The user will be asked continuously to enter a valid number as long as their entry is invalid.
		{
			cout << endl << "Please enter a valid number (-1 to exit): " << endl;
			cin >> length;
			isValidLength = checkValidity(length);
		}

		if (length == -1)                       // The program will stop if the user enters -1.
		{
			continueProgram = false;
			return endProgram();                // Returning the result of endProgram will stop the program and prevent the remaining code from executing.
		}

		cout << "Please enter a width for the rectangle as a positive number (-1 to exit): " << endl;
		cin >> width;
		isValidWidth = checkValidity(width);

		while (!isValidWidth)                   // The user will be asked continuously to enter a valid number as long as their entry is invalid.
		{
			cout << endl << "Please enter a valid number (-1 to exit): " << endl;
			cin >> width;
			isValidWidth = checkValidity(width);
		}

		if (width == -1)                       // The program will stop if the user enters -1.
		{
			continueProgram = false;
			return endProgram();               // Returning the result of endProgram will stop the program and prevent the remaining code from executing.
		}

		// Sets the length and width of the rectangle variable thisRectangle using the parameter-based rectangle constructor and user input.
		thisRectangle = rectangle(length, width);    

		/*
		 * Displays the length, width, diagonal, perimeter, and area of the rectangle 'thisRectangle'. 
		 * The showData function is a member of the rectangle class.
		 */
		thisRectangle.showData();
	};
}

//User-Defined Functions

//Checks if the user's input is a number, whether the number is greater than zero, or if the number is not -1
bool checkValidity(double input)
{
	if (cin.fail() || (input != -1 && input < 0))      // The fail function will return true if a user's entry is not a number
	{
		string emptyString;                      // Declare a string variable to use for clearing the cin buffer.
		cin.clear();                             // The clear function clears the invalid entry stored in cin; the cin buffer is not cleared.
		cin.ignore(numeric_limits<streamsize>::max(), '\n');    // Clears/flushes the cin buffer and allows new user entries.
		return false;
	}

	return true;
}

/*
 * The function displays an end message, then returns 0. 
 * A line of code in the main function that returns this function will return 0, ending the program.
 */
int endProgram()
{
	cout << endl << "Thank you for participating. Goodbye." << endl;
	system("pause");
	return 0;
}