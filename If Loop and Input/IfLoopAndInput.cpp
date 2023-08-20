//IfLoopAndInput.cpp -- Pulls a student's score and total score for an assignment, returning the student's assignment grade.
//CSIS 111-D01
//<Sources if necessary>

//Include statements 
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <cassert>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

//Function prototypes 
int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Robert Kus -- Lab 3" << endl << endl;

	//Variable declarations

	ifstream grades;
	int studentScore,totalPoints,gradePercent;    //Declares multiple variables as integers
	double gradeDecimal;
	string gradeResponse;

	//Program logic

	grades.open("AssignmentScores.txt");           //Opens the text file located in the same folder as the program
	 
	grades >> studentScore;                        //Imports the first number in the file and stores it in studentScore
	grades >> totalPoints;                         //Imports the second number in the file and stores it in totalPoints

	assert(studentScore && studentScore >= 0       //Allows program to continue only if all conditions in the assert function are met
		   && totalPoints && totalPoints >= 0
		   && studentScore <= totalPoints);

	grades.close();

	cout << fixed << showpoint;        
	cout << setprecision(5);                                            //All floating numbers will display to five decimal places, displaying trailing zeros when needed
	cout << "Student score: " << studentScore << endl << endl;
	cout << "Possible total points: " << totalPoints << endl << endl;

	gradeDecimal = double(studentScore) / totalPoints;                          //Obtain the student's grade in decimal form
	gradePercent = ceil(int(gradeDecimal * 100));                                   //Obtains the student's grade as a percentage, rounded up to the nearest whole number

	cout << "Overall grade for assignment: " << gradeDecimal << " or " << gradePercent << "%" << endl << endl;

	if (gradePercent >= 90) 
	{
		gradeResponse = "Excellent";
	}
	else if (gradePercent < 90 && gradePercent >= 80)
	{
		gradeResponse = "Well Done";
	}
	else if (gradePercent < 80 && gradePercent >= 70)
	{
		gradeResponse = "Good";
	}
	else if (gradePercent < 70 && gradePercent >= 60)
	{
		gradeResponse = "Need Improvement";
	}
	else
	{
		gradeResponse = "Fail";
	}

	cout << gradeResponse << endl << endl;   //Displays a designated response based on the assignment grade

	//Closing program statements 

	system("pause");
	return 0;
}
//Function definitions
 
	// The open method opens and sets a file's content to a ifstream variable based on the file name or file path defined in the parameter.
	// The close method closes a file after use.
	// The assert function checks if there are errors in the given parameter and terminates the program if errors exist.
	// The fixed method/manipulator sets all floating point numbers to a fixed decimal format.
	// The showpoint method/manipulator makes all floating point numbers show trailing zeroes.
    // The setPrecision function sets floating numbers to display the number of decimal places given as a parameter.
	// The ceil function rounds a floating number up to the nearest whole number.