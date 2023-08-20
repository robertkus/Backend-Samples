//userDefinedDataTypes.cpp -- This program uses a user defined data type (LumberType) to calculate a user's shopping cart and returning totals based on
//                            the type(s) of lumber they purchase, how many, and the dimensions for each of those boards.
//CSIS 111-D01
//<Sources if necessary>

//Include statements 
#include <iostream> 
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

enum LumberType { PINE = 'P', FIR = 'F', CEDAR = 'C', MAPLE = 'M', OAK = 'O' };            //Available Lumber Types

const double pinePrice = 0.89;                        //Price of pine per foot
const double firPrice = 1.09;                         //Price of fir per foot
const double cedarPrice = 2.26;						  //Price of cedar per foot
const double maplePrice = 4.50;						  //Price of maple per foot
const double oakPrice = 3.10;						  //Price of oak per foot

//Function prototypes 

bool checkLumberType(LumberType woodType)
{
	if (woodType == PINE || woodType == FIR || woodType == CEDAR || woodType == MAPLE || woodType == OAK)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void foundErrors()
{
	cout << "Cannot read entries. Please input entries in the correct format next time." << endl;
	system("pause");
}

double calculateCost(LumberType woodType, int itemCount, int height, int width, int length)
{
	double total;
	double dimensions;

	dimensions = ((double)height * width * length) / 12;               //Dimensions are calculated in feet

	switch (woodType) {
	case PINE:
		total = pinePrice * itemCount * dimensions;
		break;
	case FIR:
		total = firPrice * itemCount * dimensions;
		break;
	case CEDAR:
		total = cedarPrice * itemCount * dimensions;
		break;
	case MAPLE:
		total = maplePrice * itemCount * dimensions;
		break;
	default:
		total = oakPrice * itemCount * dimensions;
		break;
	}

	return total;
}

string getLumberType(LumberType lumberType)
{
	string itemString;

	switch (lumberType)
	{
	case PINE:
		itemString = "Pine";
		break;
	case FIR:
		itemString = "Fir";
		break;
	case CEDAR:
		itemString = "Cedar";
		break;
	case MAPLE:
		itemString = "Maple";
		break;
	default:
		itemString = "Oak";
		break;
	}

	return itemString;
}

string customerCart(LumberType lumberType, int itemCount, int height, int width, int length, double total)
{
	string cart;
	string item;
	ostringstream cartOutput;               //String stream output variable (from sstream header file)

	item = getLumberType(lumberType);

	cartOutput << fixed << showpoint;       //Fixes decimal place and shows empty zeros for ostringstream variable

	cartOutput << setprecision(2)
		<< itemCount << " "
		<< height << "x" << width << "x" << length << " "
		<< item << " at a cost of: $" << total << endl;

	cart = cartOutput.str();               //See function definitions for information on str method;

	return cart;
}

int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Robert Kus -- Lab 6" << endl << endl;

	//Variable declarations

	LumberType lumberType{};
	string userInput, cart;
	char firstLetter;
	int boardCount, height, width, length;
	double total, grandTotal{};
	bool isLumberType;

	//Program logic

	cout << fixed << showpoint;           //Fixes decimal place and shows empty zeros for floating values

	cout << "Enter item, item count, and dimensions in inches:" << endl
		<< "('P' for Pine, 'F' for Fir, 'C' for Cedar, 'M' for Maple, 'O' for Oak)" << endl
		<< "Ex: P 10 3 5 8" << endl;
	cin >> userInput;
	firstLetter = toupper(userInput.at(0));                   //Get the first letter of user's input.
	lumberType = LumberType(firstLetter);                     //Get lumber type based on user input.
	isLumberType = checkLumberType(lumberType);

	cin >> boardCount;
	cin >> height;
	cin >> width;
	cin >> length;

	if (cin.fail() || !isLumberType)
	{
		foundErrors();
		return 0;
	}

	total = calculateCost(lumberType, boardCount, height, width, length);        //Calculate cost based on user input
	grandTotal = grandTotal + total;                                             //Add total to grandTotal
	cart = customerCart(lumberType, boardCount, height, width, length, total);   //Produce a string based on inputs and calculations and store in string

	cout << cart << endl;						        //Display results

	cout << "Enter another item (or press 'T' for total):" << endl
		<< "Ex: P 10 3 5 8  or  T" << endl;
	cin >> userInput;
	firstLetter = toupper(userInput.at(0));
	lumberType = LumberType(firstLetter);
	isLumberType = checkLumberType(lumberType);

	if (!isLumberType && firstLetter != 'T')
	{
		foundErrors();
		return 0;
	}

	while (isLumberType && firstLetter != 'T')
	{
		cin >> boardCount;
		cin >> height;
		cin >> width;
		cin >> length;

		if (cin.fail())
		{
			foundErrors();
			return 0;
		}

		total = calculateCost(lumberType, boardCount, height, width, length);               //Calculate cost based on user input
		grandTotal = grandTotal + total;                                                    //Add total to grandTotal
		cart = cart + customerCart(lumberType, boardCount, height, width, length, total);   //Produce a string based on inputs and calculations add to current string

		cout << cart << endl;     //Display results

		cout << "Enter another item (or press 'T' for total):" << endl
			<< "Ex: P 10 3 5 8  or  T" << endl;
		cin >> userInput;
		firstLetter = toupper(userInput.at(0));
		lumberType = LumberType(firstLetter);
		isLumberType = checkLumberType(lumberType);

		if (!isLumberType && firstLetter != 'T')
		{
			foundErrors();
			return 0;
		}
	}

	cout << setprecision(2) << "The total for" << endl << cart << "is: $" << grandTotal << endl;   //Display final results

	//Closing program statements 
	system("pause");
	return 0;
}
//Function definitions
//  User Defined Functions:
//		- The checkLumberType function checks whether an input is a Lumber Type and returns true or false based on that check.
//      - The foundErrors function displays error messages.
//      - The calculateCost function retrieves the user's lumber selection, item count, and dimensions (in inches) and returns the price.
//        for that order (as a double variable).
// 	    - The getLumberType returns the string equivalent of the user's lumber selection.
// 	    - The customerCart function produces a string containing the user's lumber type, their item count, their dimensions, and the total price
//        (set to two decimal places).
//  Other new functions:
//      - The str method sets an output value as a string, allowing the output to be stored into a string variable. The method in this instance is
//        retrieved from the sstream header file applied to a ostringstream variable
//      - The fail method returns true if a user input produces an error while being stored in cin.


