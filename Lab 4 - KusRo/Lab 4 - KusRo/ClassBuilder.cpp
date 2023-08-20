/*
* ClassBuilder.cpp - This program allows a user to build a course containing the class/course name, the section's name, the section's capacity, and 
* information about students taking the course.
* 
* CSIS 112-B01
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <sstream>
#include "Student.h"
#include "ClassSection.h"

using namespace std;

//Function Prototypes

char getSelection();                       //Ask user to add a student to a class, list the student's in a class, or quit
void clearInvalidEntry();                  //Clears an invalid entry
bool checkForEntry(string, string);        //Checks if entry is blank
bool checkIfInteger(string, string);       //Check if entry is an integer (Uses a string stored from the getline function)
bool checkIfValidCapacity(string);         //Check if capacity is valid (Uses a string stored from the getline function)
bool checkIfSelection(string);             //Check if user selection is valid
bool checkIfValidYear(string);             //Check if the birth year entered is valid (Uses a string stored from the getline function)
bool checkIfValidPoints(string);           //Check if the points entered is valid (Uses a string stored from the getline function)

//Main function
int main() {

	cout << "Robert Kus -- Lab 4 - Class Composition" << endl << endl;
	cout << "Class Section - Student/Grades" << endl << endl;

	//Variable declaration

	//Stores text and numeric entries intially as strings for error handling
	string className;
	string sectionName;
	string classCapacity; 
	string studentName;
	string birthYear;
	string points;

	int studentCount = 0;

	//Boolean variables will be used with error handling
	bool validClassName = false; 
	bool validSectionName = false;
	bool validCapacity = false;
	bool validSelection = false;
	bool validStudentName = false;
	bool validBirthYear = false;
	bool validPoints = false;

	bool endProgram = false;      //Used to continue or end the program

	//Program logic
	/*
	* The user will be asked to enter values for fields associated with the classSection and student clases. 
	* - String entries will be checked to determine if they are not empty. 
	* - Numeric entries will be checked if they are not empty, are integers, and whether they satisfy all other parameters required 
	*   for the entries.
	* - If an entry is invalid, the user will be asked to enter a valid input as long as the entries remain invalid.
	*/
	while (!validClassName) {                            
		cout << "Enter the name of the Class: ";
		getline(cin, className);
		cout << endl;
		validClassName = checkForEntry(className, "Class Name");
	}

	while (!validSectionName) {
		cout << "Enter the name of the Section: ";
		getline(cin, sectionName);
		cout << endl;
		validSectionName = checkForEntry(sectionName, "Section Name");
	}

	while (!validCapacity) {
		cout << "Enter the capacity of students for the Section (1-10): ";
		getline(cin, classCapacity);
		cout << endl;
		validCapacity = checkIfValidCapacity(classCapacity);
	}           

	//Build the classSection object using the set member methods, passing classCapacity as an integer
	classSection classWithSection(className, sectionName, stoi(classCapacity));

	//The program continues until the user selects 'Q' or 'q' (for 'quit')
	while (!endProgram) {         

		/* 
		* Perform action or return message based on user selection (not case sensitive). 
		* The getSelection method only returns valid selections.
		*/
		switch (tolower(getSelection())) {

		case 'a':
			if (studentCount >= stoi(classCapacity)) {
				cout << "The section has the maximum number of students." << endl << "Please try again." << endl;
			}
			else {

				while (!validStudentName) {
					cout << "Enter the name of the student: ";
					getline(cin, studentName);
					cout << endl;
					validStudentName = checkForEntry(studentName, "Studen Name");
				}

				while (!validBirthYear) {
					cout << "Enter the student's birth year (4 digits): ";
					getline(cin, birthYear);
					cout << endl;
					validBirthYear = checkIfValidYear(birthYear);
				}      

				while (!validPoints) {
					cout << "Enter the student's total points in class (0 - 1010): ";
					getline(cin, points);
					cout << endl;
					validPoints = checkIfValidPoints(points);
				}

				//Add a student in the class. The birthYear and points are passed in as integers
				classWithSection.addStudent(studentName, stoi(birthYear), stoi(points));

				//Add one to the student count and reset booleans for next student entry
				studentCount++;
				validStudentName = false;
				validBirthYear = false;
				validPoints = false;
			}
			break;

		case 'l' :
			classWithSection.listStudents();
			break;

		default:
			endProgram = true;
			break;
		}
	}

	system("Pause");
	return 0;
}

//User-Defined Functions

//Ask for and return the user selection based on the letter entered (not case-sensitive)
char getSelection() {

	string menuItem;
	bool isValidSelection = false;

	while (!isValidSelection) {
		cout << "Main Menu" << endl << endl;
		cout << "A - Add a new student" << endl << endl;
		cout << "L - List students" << endl << endl;
		cout << "Q - Quit" << endl << endl;
		cout << "Selection: ";
		getline(cin, menuItem);
		isValidSelection = checkIfSelection(menuItem);
	}

	cout << endl;

	return menuItem.c_str()[0];
};

//Clears an invalid entry and flushes the cin buffer
void clearInvalidEntry() {
	cin.clear();                                            // The clear function clears the invalid entry stored in cin; the cin buffer is not cleared.
	cin.ignore(numeric_limits<streamsize>::max(), '\n');    // Clears/flushes the cin buffer and allows new user entries.
}

//Returns true if there is an entry and false if there is not
bool checkForEntry(string entry, string itemName) {
	
	if (entry.empty()) { 
		cout << itemName + " cannot be blank." << endl << "Please try again." << endl;
		clearInvalidEntry();
		return false;
	}
	else {
		return true;
	}
}

//Check if a numeric entry is an integer
bool checkIfInteger(string integerEntry, string itemName) {

	for (const char& digit : integerEntry) {
		if (!isdigit(digit)) {                     //Check each character in the string to determine if it is a digit
			cout << itemName + " must be numeric." << endl << "Please try again." << endl;
			clearInvalidEntry();
			return false;                          
		}
	}

	return true;
}

//Check if the character entry is a letter and is valid
bool checkIfSelection(string choice) {

	bool isNotEmpty = checkForEntry(choice, "Selection");

	if (!isNotEmpty) { return false; }

	//Ternary statement will set the letter if the selection is a single character or zero if it is not
	char letter = choice.size() == 1 ? choice.c_str()[0] : 0;

	if (!isalpha(letter) && tolower(letter) != 'a'
		&& tolower(letter) != 'l' && tolower(letter) != 'q') {
			cout << "The selection is invalid." << endl << "Please select again." << endl;
			clearInvalidEntry();
			return false;
	}

	return true;
}

//Determine if section capacity entry is valid based on parameters. Also checks if the entry is not empty and if entry is an integer.
bool checkIfValidCapacity(string capacity) {

	string itemText = "Maximum students in section";

	bool isNotEmpty = checkForEntry(capacity, itemText);

	if (!isNotEmpty) { return false; }       //If entry is not empty, continue through function

	bool isInteger = checkIfInteger(capacity, itemText);

	if (!isInteger) { return false; }        //If entry is an integer, continue through function

	int studentCount = stoi(capacity);
	if (studentCount >= 1 && studentCount <= 10) {          //Check if the section capacity is between 1 and 10
		return true;
	}
	else {
		cout << itemText + " must be between 1 and 10 inclusive." << endl << "Please try again." << endl;
		clearInvalidEntry();
		return false;
	}
}

//Determine if student birth year entry is valid based on parameters. Also checks if the entry is not empty and if entry is an integer.
bool checkIfValidYear(string yearEntry) {

	string itemText = "Birth year";

	bool isNotEmpty = checkForEntry(yearEntry, itemText);

	if (!isNotEmpty) { return false; }               //If entry is not empty, continue through function
	
	bool isInteger = checkIfInteger(yearEntry, itemText);

	if (!isInteger) { return false; }                //If entry is an integer, continue through function

	if (yearEntry.size() == 4) {                     //Checks if the length of the entry is four characters
		return true;
	}
	else {
		cout << itemText + " must be 4 digits." << endl << "Please try again." << endl;
		clearInvalidEntry();
		return false;
	}
}

//Determine if student's points earned is valid based on parameters. Also checks if the entry is not empty and if entry is an integer.
bool checkIfValidPoints(string pointsEntry) {

	string itemText = "Points Earned";

	bool isNotEmpty = checkForEntry(pointsEntry, itemText);

	if (!isNotEmpty) { return false; }               //If entry is not empty, continue through function

	bool isInteger = checkIfInteger(pointsEntry, itemText);

	if (!isInteger) { return false; }                //If entry is an integer, continue through function

	int points = stoi(pointsEntry);

	if (points >= 0 && points <= 1010) {             //Check if points earned is between 0 and 1010
		return true;
	}
	else {
		cout << itemText + " must be between 0 and 1010 inclusive." << endl << "Please try again." << endl;
		clearInvalidEntry();
		return false;
	}
}