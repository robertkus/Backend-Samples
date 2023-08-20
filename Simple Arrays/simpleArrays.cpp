//simpleArrays.ccp -- The program asks the user to enter their weight and the name of a planet. Using an enummeration, an array, 
//                    a switch statement, and user defined functions, the program will display how much the user will weigh on that planet.
//CSIS 111-D01
//Sources:
//   Case-insensitive string comparison in C++ (2022).StackOverflow. 
//        Retrieved from https://stackoverflow.com/questions/11635/case-insensitive-string-comparison-in-c

//Include statements
#include <algorithm>
#include <iostream> 
#include <string> 
#include <iomanip>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

enum PlanetType { MERCURY, VENUS, EARTH, MOON, MARS, JUPITER, SATURN, URANUS, NEPTUNE, PLUTO };                 //Selectable planets and the moon
double weightMultiplier[10]{ 0.4155, 0.897, 1.0, 0.166, 0.3507, 2.5374, 1.0677, 0.8947, 1.1794, 0.0899 };       //Weight multipliers (ordered by the PlanetType the value applies to)

//Function prototypes

bool IsThisAPlanet(string planetChoice, string planet)
{
	// (Case-insensitive string comparison in C++, 2022)
	return equal(planetChoice.begin(), planetChoice.end(),
		planet.begin(), planet.end(),
		[](char planetChoice, char planet) {
			return tolower(planetChoice) == tolower(planet);
		});
}

PlanetType ConvertInputToPlanetType(string planet)
{
	PlanetType null{};

	if (IsThisAPlanet(planet, "mercury"))
	{
		return MERCURY;
	}
	else if (IsThisAPlanet(planet, "venus"))
	{
		return VENUS;
	}
	else if (IsThisAPlanet(planet, "earth"))
	{
		return EARTH;
	}
	else if (IsThisAPlanet(planet, "moon"))
	{
		return MOON;
	}
	else if (IsThisAPlanet(planet, "mars"))
	{
		return MARS;
	}
	else if (IsThisAPlanet(planet, "jupiter"))
	{
		return JUPITER;
	}
	else if (IsThisAPlanet(planet, "saturn"))
	{
		return SATURN;
	}
	else if (IsThisAPlanet(planet, "uranus"))
	{
		return URANUS;
	}
	else if (IsThisAPlanet(planet, "neptune"))
	{
		return NEPTUNE;
	}
	else if (IsThisAPlanet(planet, "pluto"))
	{
		return PLUTO;
	}
	else
	{
		return null;
	}
}

double OutputWeight(int weight, PlanetType planet)
{
	double outputWeight;

	switch (planet) {
		case MERCURY:
			outputWeight = weight * weightMultiplier[0];
			return outputWeight;
		case VENUS:
			outputWeight = weight * weightMultiplier[1];
			return outputWeight;
		case EARTH:
			outputWeight = weight * weightMultiplier[2];
			return outputWeight;
		case MOON:
			outputWeight = weight * weightMultiplier[3];
			return outputWeight;
		case MARS:
			outputWeight = weight * weightMultiplier[4];
			return outputWeight;
		case JUPITER:
			outputWeight = weight * weightMultiplier[5];
			return outputWeight;
		case SATURN:
			outputWeight = weight * weightMultiplier[6];
			return outputWeight;
		case URANUS:
			outputWeight = weight * weightMultiplier[7];
			return outputWeight;
		case NEPTUNE:
			outputWeight = weight * weightMultiplier[8];
			return outputWeight;
		default:
			outputWeight = weight * weightMultiplier[9];
			return outputWeight;
	}
}

bool CheckPlanetName(string planet)
{
	if (
		IsThisAPlanet(planet, "mercury") || IsThisAPlanet(planet, "venus") ||
			IsThisAPlanet(planet, "earth") || IsThisAPlanet(planet, "moon") ||
			IsThisAPlanet(planet, "mars") || IsThisAPlanet(planet, "jupiter") ||
			IsThisAPlanet(planet, "saturn") || IsThisAPlanet(planet, "uranus") ||
			IsThisAPlanet(planet, "neptune") || IsThisAPlanet(planet, "pluto")
		)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ClearInvalidEntry()
{
	string invalidInt;
	cin.clear();
	getline(cin, invalidInt);
}

void GetUserInput()
{
	//Variable declarations
	int weight{};
	string planet;
	double weightOnPlanet;
	PlanetType planetType;

	cout << "Please enter your weight (as a whole number) and a planet name in our Solar System (may also select the moon)" << endl;
	cout << "Example: 195 Neptune (planet name is not case sensitive)" << endl;
	while (!(cin >> weight))
	{
		cout << endl << "Please enter your values in the format described in the example" << endl << endl;
		ClearInvalidEntry();
	}
	cin >> planet;

	while (!CheckPlanetName(planet))
	{
		cout << endl << "Please enter your values in the format described in the example" << endl << endl;
		ClearInvalidEntry();
		while (!(cin >> weight))
		{
			cout << endl << "Please enter your values in the format described in the example" << endl << endl;
			ClearInvalidEntry();
		}
		
		cin >> planet;
	}
	

	planetType = ConvertInputToPlanetType(planet);
	weightOnPlanet = OutputWeight(weight, planetType);

	cout <<endl << "You weigh " << weightOnPlanet << " on " << planet << endl;
}

int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Robert Kus -- Lab 7" << endl << endl;

	//Variable declarations

	//Program logic

	GetUserInput();

	//Closing program statements 
	system("pause");
	return 0;
}
//Function definitions
//  User-Defined Functions
//      - The IsThisAPlanet function compares the user's planet entry to determine if it exists in our solar system
//			- See source for where much of the code was derived from.
//		- The ConvertInputToPlanetType function converts the user's planet choice to a value in the PlanetType enummeration
//      - The OutputWeight function returns a user's weight on their selected planet
//		- The CheckPlanetName function checks whether the planet entered is qualified
//		- The ClearInvalidEntry function clears a user's weight input if it is not an interger
//		- The GetUserInput function obtains the user's weight and planet choice and displays how much they would weigh on that planet.
//  Built-in Functions
//      - The equal function compares two strings and determines if both contain all matching characters
//      - The clear function clears an input
//      - The getline function reads a string and stores it in a input stream variable
