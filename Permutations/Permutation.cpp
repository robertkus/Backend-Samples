//Permutation.cpp -- Calculates the number of permutations of potential team arrangements based on user inputs
//CSIS 111-D11
//<Sources if necessary>

//Include statements 

#include <iostream> 
#include <cmath>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

const double pi = 3.14159;   //An approximate value of π

// 
//Function prototypes 
int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Robert Kus -- Lab 2" << endl << endl;

	//Variable declarations

	double studentCount;
	double teamCount;
	double studentTeamDiff;   

	double studentFactorial;
	double teamFactorial;
	double studentTeamFactorial;

	double possibleTeams;

	//Program logic

	cout << "How many students are there in the class? ";    //Asks the user to input the number of students in the class
	cin >> studentCount;
	cout << endl;

	cout << "How many students will there be to a team? ";   //Asks the user to input the number of students per team
	cin >> teamCount;
	cout << endl;

	studentTeamDiff = studentCount - teamCount;    //Difference variable needed for factorial and permutation formulas

	studentFactorial = exp(-studentCount)          //Factorial formula syntax: n!= e^(-n) n^n√(2πn)
		* pow(studentCount, studentCount)
		* pow(2 * pi * studentCount, 0.5);

	teamFactorial = exp(-teamCount) 
		* pow(teamCount, teamCount) 
		* pow(2 * pi * teamCount,0.5);

	studentTeamFactorial = exp(-studentTeamDiff)
		* pow(studentTeamDiff, studentTeamDiff)
		* pow(2 * pi * studentTeamDiff, 0.5);

	possibleTeams = studentFactorial/(teamFactorial * studentTeamFactorial);  //Permutations formula: n!/f!(n - r)!

	cout << "The number of permutations of possible teams is: " << possibleTeams
		<< " or about " << floor(possibleTeams) << endl;

	//Closing program statements 
	system("pause");
	return 0;
}
//Function definitions

// exp - returns the value of the natural exponent 'e' to the power of the given parameter.
// pow - returns the value of the first parameter to the power of the second parameter. 
// floor - returns the value of the parameter given rounded down to the nearest whole number.
