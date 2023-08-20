/*
* ClassSection.cpp - Defines and executes the member functions, constructors, and destructors of the classSection class.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "ClassSection.h"
#include "Student.h"

using namespace std;

//Variable declarations
vector<student> studentList;

//Store the class name in an object
void classSection::setClassName(string name) {
	className = name;
}

//Return the class name from the object
string classSection::getClassName() {
	return className;
}

//Store the section name in an object
void classSection::setSectionName(string section) {
	sectionName = section;
}

//Return the section name from the object
string classSection::getSectionName() {
	return sectionName;
}

//Store the section's capacity number in an object
void classSection::setSectionCapacity(int capacity) {
	sectionCapacity = capacity;
}

//Return the section's capacity number from the object
int classSection::getSectionCapacity() {
	return sectionCapacity;
}

//Add a student's information to a class object
void classSection::addStudent(string name, int year, int grade) {

	student newStudent(name, year, grade);
	studentList.push_back(newStudent);
}

//List class and student information stored and calculated in a class object
void classSection::listStudents() {

	const int headerWidth = 15;
	const string classHeader = "Class Report with Students";
	const string studentHeader = "Students in Class/Section";
	const string studentNameHeader = "Student's Name";
	const string birthYearHeader = "Birth Year";
	const string pointsEarnedHeader = "Points Earned";
	const string letterGradeHeader = "Letter Grade";

	cout << classHeader << endl;
	cout << string(classHeader.size(), '=') << endl;

	cout << setw(headerWidth + classHeader.size() - 2) 
		 << "Class Name: " << className << endl;
	cout << setw(headerWidth + classHeader.size() - 2) 
		 << "Section Name: " << sectionName << endl;
	cout << setw(headerWidth + classHeader.size() - 2) 
		 << "Section Capacity: " << sectionCapacity << endl;
	cout << setw(headerWidth + classHeader.size() - 2)
		 << "Students enrolled: " << studentList.size() << endl << endl;

	cout << studentHeader << endl;
	cout << string(studentHeader.size(), '-') << endl;

	int itemWidth = 20;

	cout << setw(itemWidth) << setfill(' ')  << studentNameHeader
		 << setw(itemWidth) << birthYearHeader
		 << setw(itemWidth) << pointsEarnedHeader
		 << setw(itemWidth) << letterGradeHeader
		 << endl;

	cout << setw(itemWidth) << setfill(' ') << string(studentNameHeader.size(), '-')
		 << setw(itemWidth) << string(birthYearHeader.size(), '-')
		 << setw(itemWidth) << string(pointsEarnedHeader.size(), '-')
		 << setw(itemWidth) << string(letterGradeHeader.size(), '-')
		 << endl;

	for (student& newStudent : studentList) {
		
		newStudent.listStudentInfo();
	}

	cout << endl;
}

//Initialize default values if the default constuctor is called
classSection::classSection() {
	setClassName("");
	setSectionName("");
	setSectionCapacity(0);
}

//Initialize values based on parameters
classSection::classSection(string name, string section, int capacity) {
	setClassName(name);
	setSectionName(section);
	setSectionCapacity(capacity);
}

//Class destructor
classSection::~classSection(){}