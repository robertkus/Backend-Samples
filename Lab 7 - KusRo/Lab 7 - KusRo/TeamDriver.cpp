#pragma once
/*
* TeamDriver.cpp - The program lets users build a team with a leader, team members, and other statistics. It will build class objects
* based on user input and display error messages for improper input.
*/
//CSIS-112-B01
/*
*  Reference -
*           chmike, emali, fonfonx, Galik, Robinson, Woolweaver, M.D., . ...(2019). How do i verify a string is valid double (even if it has a
*                  point in it)?. Stack Overflow.
*				   https://stackoverflow.com/questions/29169153/how-do-i-verify-a-string-is-valid-double-even-if-it-has-a-point-in-it
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
#include "Date.h"
#include "Leader.h"
#include "TeamMember.h"
#include "Team.h"

using namespace std;

//Function prototypes
char getMenuSelection();                   //Obtain the user's menu selection based on input.
bool checkForEntry(string, string);        //Checks if entry is blank
bool checkIfInteger(string, string);       //Check if entry is an integer (Uses a string stored from the getline function)
bool checkIfSelection(string);             //Check if user selection is valid
bool checkDateFormat(string);              //Check if date entered is formatted correctly
bool checkMonthDayYear(string, string);    //Check each date parameter
Date buildNewDate(string);                 //Build new date from string
bool checkFloatValue(string);              //Checks if the file value is a valid number (Checks each string character individually)
bool checkSkillLevel(string);              //Determine if skill level entry is valid
bool stringMatch(string, string);          //Compare each character in a string, not case sensitive
bool checkRatingRange(string);             //Check if rating is valid

int main() {
	cout << "Robert Kus -- Lab 7 - Inheritance and Operator Overloading" << endl << endl;

	//Variable declaration

	char menuSelection;
	vector<string> dateStringList;

	//Variables for storing personal information
	string idNumber, personFirstName, personLastName, dateOfBirth;

	//Variables for storing team member information
	string deptName, positionName, empSkillLevel, hireDate, empLastRating;

	//Variables for storing team leader information
	string divisionName, titleName, prevTeamLead, promotionDate, salary;

	//Variables for storing team information
	string teamName, teamPurpose, sizeOfTeam;

	//Class objects
	TeamMember member;
	Leader teamLeader;
	Team teamObject;

	//Program logic

	cout << "Enter a name for your Team: ";
	getline(cin, teamName);
	while (!checkForEntry(teamName, "The name of the Team")) {
		cout << "Enter a name for your Team: ";
		getline(cin, teamName);
	}

	cout << "Enter the purpose of your Team: ";
	getline(cin, teamPurpose);
	while (!checkForEntry(teamPurpose, "The purpose of the Team")) {
		cout << "Enter the purpose of your Team: ";
		getline(cin, teamPurpose);
	}

	cout << "What is the size of your Team? ";
	getline(cin, sizeOfTeam);
	while (!checkForEntry(sizeOfTeam, "The size of the Team") || !checkIfInteger(sizeOfTeam, "The size of the Team")) {
		cout << "What is the size of your Team? ";
		getline(cin, sizeOfTeam);
	}

	teamObject = Team(teamName, teamPurpose, stoi(sizeOfTeam));

	menuSelection = getMenuSelection();

	while (menuSelection != 'q') {
		switch (menuSelection)
		{
			case 'a':

				if (teamObject.getAssignedLeader().getId() != "") {
					cout << endl << "A leader has already been selected for this team. Operation cancelled." << endl;
					system("pause");
					menuSelection = getMenuSelection();
					break;
				}

				cout << endl << "          Create Team Leader" << endl << endl;

				cout << "Id:   ";
				getline(cin, idNumber);
				while (!checkForEntry(idNumber, "The Id number of the Team Leader")) {
					cout << "Id:   ";
					getline(cin, idNumber);
				}

				cout << endl << "First Name:   ";
				getline(cin, personFirstName);
				while (!checkForEntry(personFirstName, "The First Name of the Team Leader")) {
					cout << endl << "First Name:   ";
					getline(cin, personFirstName);
				}

				cout << endl << "Last Name:   ";
				getline(cin, personLastName);
				while (!checkForEntry(personLastName, "The Last Name of the Team Leader")) {
					cout << endl << "Last Name:   ";
					getline(cin, personLastName);
				}

				cout << endl << "Birthdate (mm/dd/yyyy):   ";
				getline(cin, dateOfBirth);
				while (!checkForEntry(dateOfBirth, "The Team Leader's Birthdate") || !checkDateFormat(dateOfBirth)) {
					cout << endl << "Birthdate (mm/dd/yyyy):   ";
					getline(cin, dateOfBirth);
				}

				cout << endl << "Division:   ";
				getline(cin, divisionName);
				while (!checkForEntry(divisionName, "The Division Name of the Team Leader")) {
					cout << endl << "Division:   ";
					getline(cin, divisionName);
				}

				cout << endl << "Title:   ";
				getline(cin, titleName);
				while (!checkForEntry(titleName, "The Team Leader's Title")) {
					cout << endl << "Title:   ";
					getline(cin, titleName);
				}

				cout << endl << "Last Team Led:   ";
				getline(cin, prevTeamLead);
				while (!checkForEntry(prevTeamLead, "The Team Leader's Last Team Led")) {
					cout << endl << "Last Team Led:   ";
					getline(cin, prevTeamLead);
				}

				cout << endl << "Salary:   ";
				getline(cin, salary);
				while (!checkForEntry(salary, "The Team Leader's Salary") || !checkFloatValue(salary)) {
					cout << endl << "Salary:   ";
					getline(cin, salary);
				}

				cout << endl << "Date of Last Promotion (mm/dd/yyyy):   ";
				getline(cin, promotionDate);
				while (!checkForEntry(promotionDate, "The Team Leader's Date of Last Promotion") 
					|| !checkDateFormat(promotionDate)) {
					cout << endl << "Date of Last Promotion (mm/dd/yyyy):   ";
					getline(cin, promotionDate);
				}

				teamLeader = Leader(idNumber, personFirstName, personLastName, buildNewDate(dateOfBirth),
					divisionName, buildNewDate(promotionDate), titleName, prevTeamLead, stod(salary));

				teamObject.setAssignedLeader(teamLeader);

				menuSelection = getMenuSelection();
				break;

			case 't':

				if (teamObject.getCurrentTeamCount() > stoi(sizeOfTeam) || teamObject.getCurrentTeamCount() == stoi(sizeOfTeam)) {
					cout << endl << "The team is full. No more team members can be assigned." << endl;
					system("pause");
					menuSelection = getMenuSelection();
					break;
				}

				cout << endl << "          Create Team Member" << endl << endl;

				cout << "Id:   ";
				getline(cin, idNumber);
				while (!checkForEntry(idNumber, "The Id number of the Team Member")) {
					cout << "Id:   ";
					getline(cin, idNumber);
				}

				cout << endl << "First Name:   ";
				getline(cin, personFirstName);
				while (!checkForEntry(personFirstName, "The First Name of the Team Member")) {
					cout << endl << "First Name:   ";
					getline(cin, personFirstName);
				}

				cout << endl << "Last Name:   ";
				getline(cin, personLastName);
				while (!checkForEntry(personLastName, "The Last Name of the Team Member")) {
					cout << endl << "Last Name:   ";
					getline(cin, personLastName);
				}

				cout << endl << "Birthdate (mm/dd/yyyy):   ";
				getline(cin, dateOfBirth);
				while (!checkForEntry(dateOfBirth, "The Team Member's Birthdate")
					|| !checkDateFormat(dateOfBirth)) {
					cout << endl << "Birthdate (mm/dd/yyyy):   ";
					getline(cin, dateOfBirth);
				}

				cout << endl << "Department:   ";
				getline(cin, deptName);
				while (!checkForEntry(deptName, "The Team Member's Department")) {
					cout << endl << "Department:   ";
					getline(cin, deptName);
				}

				cout << endl << "Position:   ";
				getline(cin, positionName);
				while (!checkForEntry(positionName, "The Team Member's Position")) {
					cout << endl << "Position:   ";
					getline(cin, positionName);
				}

				cout << endl << "Skill Level (Entry Level, Skilled, Master):   ";
				getline(cin, empSkillLevel);
				while (!checkForEntry(empSkillLevel, "The Team Member's Skill Level") || !checkSkillLevel(empSkillLevel)) {
					cout << endl << "Skill Level:   ";
					getline(cin, empSkillLevel);
				}

				cout << endl << "Last Performance Rating (1.0 - 5.0):   ";
				getline(cin, empLastRating);
				while (!checkForEntry(empLastRating, "The Team Member's Last Performance Rating") || !checkFloatValue(empLastRating)
					|| !checkRatingRange(empLastRating)) {
					cout << endl << "Last Performance Rating (1.0 - 5.0):   ";
					getline(cin, empLastRating);
				}

				cout << endl << "Date of Hire (mm/dd/yyyy):   ";
				getline(cin, hireDate);
				while (!checkForEntry(hireDate, "The Team Member's Date of Hire")
					|| !checkDateFormat(hireDate)) {
					cout << endl << "Date of Hire (mm/dd/yyyy):   ";
					getline(cin, hireDate);
				}

				member = TeamMember(idNumber, personFirstName, personLastName, buildNewDate(dateOfBirth),
					deptName, buildNewDate(hireDate), positionName, empSkillLevel, stod(empLastRating));

				teamObject.addMemberToTeam(member);

				menuSelection = getMenuSelection();
				break;

			case 'l':
				teamObject.displayTeam();
				menuSelection = getMenuSelection();
				break;

			default:
				break;
		}
	}

	system("pause");
	return 0;
}

//User-Defined Functions

//Obtain the user's menu selection based on input.
char getMenuSelection() {
	string menuItem;
	bool isValidEntry = false;

	while (!isValidEntry) {
		cout << endl << "Main Menu" << endl;
		cout << "A -- Add Leader" << endl;
		cout << "T -- Add Team Member" << endl;
		cout << "L -- List Team Information" << endl;
		cout << "Q -- Quit" << endl << endl;
		cout << "Selection: ";

		getline(cin, menuItem);
		isValidEntry = checkIfSelection(menuItem);
	}

	return tolower(menuItem[0]);
}

//Returns true if there is an entry and false if there is not
bool checkForEntry(string entry, string itemName) {

	if (entry.empty()) {
		cout << itemName + " cannot be blank." << endl << "Please try again." << endl;
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
			return false;
		}
	}

	return true;
}

//Check if user selection is valid
bool checkIfSelection(string choice) {

	bool isNotEmpty = checkForEntry(choice, "Selection");

	if (!isNotEmpty) { return false; }

	//Ternary statement will set the letter if the selection is a single character or zero if it is not
	char letter = choice.size() == 1 ? choice.c_str()[0] : 0;

	if (!isalpha(letter) || (tolower(letter) != 'a' && tolower(letter) != 't'
		&& tolower(letter) != 'l' && tolower(letter) != 'q')) {
		cout << "The selection is invalid." << endl << "Please select again." << endl;
		return false;
	}

	return true;
}

//Check if date entered is formatted correctly
bool checkDateFormat(string dateString) {
	stringstream initialString(dateString);
	string returnString;
	vector<string> stringList;

	//Parse date entry into list items based on the date format
	while (getline(initialString, returnString, '/')) {
		stringList.push_back(returnString);
	}

	//Determine if the date entry is valid based on the number of entries parsed from it, the length of each entry, and each entry's content
	if (stringList.size() != 3 
		|| !checkMonthDayYear(stringList[0], "month")
		|| !checkMonthDayYear(stringList[1], "day") 
		|| !checkMonthDayYear(stringList[2], "year")) {
		cout << "The date you entered is invalid. Please try again. " << endl;
		return false;
	}

	return true;

};

//Check each date parameter
bool checkMonthDayYear(string dateItem, string dateElement) {

	if (dateElement == "month" && (dateItem.size() != 2 || stoi(dateItem) < 1 || stoi(dateItem) > 12)) {
		return false;
	}

	if (dateElement == "day" && (dateItem.size() != 2 || stoi(dateItem) < 1 || stoi(dateItem) > 31)) {
		return false;
	}

	if (dateElement == "year" && (dateItem.size() != 4 || stoi(dateItem) < 0 || stoi(dateItem) > 9999)) {
		return false;
	}

	for (const char& digit : dateItem) {
		if (!isdigit(digit)) {                     //Check each character in the string to determine if it is a digit
			return false;
		}
	}

	return true;
};

//Build new date from string
Date buildNewDate(string dateString) {
	stringstream initialString(dateString);
	string returnString;
	vector<string> stringList;

	//Build list of string items from date string
	while (getline(initialString, returnString, '/')) {
		stringList.push_back(returnString);
	}

	//Return Date object, using the integer-converted stringList items as parameters
	return Date(stoi(stringList[1]), stoi(stringList[0]), stoi(stringList[2]));      //Parameters are day, month, year
};

//Checks if the file value is a valid number (Checks each string character individually)
bool checkFloatValue(string entry) {

	if (entry.empty()) { return false; }

	//(chmike et al., 2019)
	long double number;
	//Returns true or false based on if the string entry is successfully stored in number, 
	// ignoring preceding and subsequent white space. Also checks if entry is the end of file.
	if (!(istringstream(entry) >> number >> ws).eof()) {
		cout << "The numeric entry is invalid. Please try again." << endl;
		return false;
	};

	return true;
}

//Determine if skill level entry is valid
bool checkSkillLevel(string entry) {

	if (!stringMatch(entry, "entry level") && !stringMatch(entry, "skilled") && !stringMatch(entry, "master")) {
		cout << "The skill level choice is invalid." << endl << "Please select again." << endl;
		return false;
	}

	return true;
};              

//Compare each character in a string, not case sensitive
bool stringMatch(string entry, string comparison)
{
	return equal(entry.begin(), entry.end(),
		comparison.begin(), comparison.end(),
		[](char entry, char comparison) {
			return tolower(entry) == tolower(comparison);
		});
}

//Check if rating is valid
bool checkRatingRange(string entry) {
	if (stod(entry) < 1 || stod(entry) > 5) {
		cout << "The rating entry is invalid. Please try again." << endl;
		return false;
	}

	return true;
}