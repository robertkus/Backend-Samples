/*
* Student.cpp - Defines and executes the member functions, constructors, and destructors of the student class.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Student.h"

using namespace std;

//Store the student's name in the object
void student::setStudentName(string name) {
	studentName = name;
}

//Returns the student's name stored in the object
string student::getStudentName() {
	return studentName;       
}

//Store the student's birth year in the object
void student::setBirthYear(int year) {           
	birthYear = year;
}

//Returns the student's birth year stored in the object
int student::getBirthYear() {                    
	return birthYear;
}

//Store the student's points earned in the object
void student::setPointsEarned(int points) {      
	pointsEarned = points;
}

//Returns the student's earned points stored in the object
int student::getPointsEarned() {                 
	return pointsEarned;
}

//Return a letter grade based on a student's points earned
char student::calcLetterGrade(int points) {             
	if (points >= 900) {
		return 'A';            //For points range 900 - 1010
	}
	else if (points >= 800 && points <= 899) {
		return 'B';            //For points range 800 - 899
	}
	else if (points >= 700 && points <= 799) {
		return 'C';            //For points range 700 - 799
	}
	else if (points >= 600 && points <= 699) {
		return 'D';            //For points range 600 - 699
	}
	else {
		return 'F';                 //For points range 0 -599
	}
}

//List student information in a neatly-formatted fashion.
void student::listStudentInfo() {

	int itemWidth = 20;

	cout << setw(itemWidth) << getStudentName()
		 << setw(itemWidth) << getBirthYear()
		 << setw(itemWidth) << getPointsEarned()
		 << setw(itemWidth) << calcLetterGrade(getPointsEarned())
		 << endl;
}

//Initialize default values if the default constuctor is called
student::student() {
	setStudentName("");
	setBirthYear(1900);               //Default birth year to 1900.
	setPointsEarned(0);
}

//Initialize values based on parameters
student::student(string name, int year, int points) {
	setStudentName(name);
	setBirthYear(year);
	setPointsEarned(points);
}

//Class destructor
student::~student(){}