//UserDefinedFunctions.ccp -- Reads the student names and grades from a text file (grades.txt), prints the names on that file, 
//               and prints the scores and overall grade for the assignment, using many user-defined and built-in functions.
//CSIS 111-D01
//<Sources if necessary>

//Include statements 
#include <iostream> 
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

//Function prototypes - See Function definition for in-depth explainations on user-defined functions

void printName(string name)
{
	cout << name << " ";
}

void printResults(int points, int totalPts)
{
	int gradePercent = ceil((double)points / totalPts * 100);
	double gradeDecimal = (double(points) / totalPts);

	cout << setprecision(5) << showpoint                    //Set decimal values to five decimal places
		 << gradePercent << "% " << gradeDecimal << " ";
		
	if (gradePercent >= 90)
	{
		cout << "Excellent";
	}
	else if (gradePercent < 90 && gradePercent >= 80)
	{
		cout << "Well Done";
	}
	else if (gradePercent < 80 && gradePercent >= 70)
	{
		cout << "Good";
	}
	else if (gradePercent < 70 && gradePercent >= 60)
	{
		cout << "Need Improvement";
	}
	else
	{
		cout << "Fail";
	}

		cout << endl;
}

int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Robert Kus -- Lab 5" << endl << endl;

	//Variable declarations

	ifstream grades;                 //Text file
	string name;                     //Student's last name
	int score, totPossible;          //Student's score and total possible score

	//Program logic

	grades.open("grades.txt");

	while (!grades.eof()) 
	{
		grades >> name >> score >> totPossible;              //Set variable values from file content

		printName(name);
		printResults(score, totPossible);
	}

	cout << endl;

	grades.close();

	//Closing program statements 
	system("pause");
	return 0;
}

//Function definitions
/*
  User Defined Functions:
	- The printName function prints the last name of the student
	- The printResults function calculates the student's final score as a percentage and as a decimal, printing both results
	  with an additional remark based on the final score

  Built-in Functions:
    - The ceil function rounds a floating value up to the nearest whole number
	- The setprecision function sets a floating number to a certain number of decimal places
		- showpoint will display trailing zeros to fill the number of decimal places if needed
	- The open and close functions open and close a file, respectively
	- The eof function returns true or false based on whether the file has reached the end of its content
*/        
