//multiArray.ccp -- This project uses a two-dimensional array to produce a Battleship-like board from a text file and collects user input to determine if
//                  and when a ship is sunk.
//CSIS 111-D01
//<Sources if necessary>

//Include statements 
#include <iostream> 
#include <string>
#include <fstream>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

//Function prototypes 

char fire(int x, int y, char boardSpace)
{
	switch (boardSpace)
	{
		case '#':
			cout << "HIT" << endl;
			return 'H';
		case '~':
			cout << "MISS" << endl;
			return boardSpace;
		default:
			cout << "HIT AGAIN" << endl;
			return boardSpace;
	}
}

bool fleetSunk(int shipSpacesLeft) 
{
	if (shipSpacesLeft == 0)
	{
		cout << "The fleet was destroyed!" << endl;
		return true;
	}
	else
	{
		return false;
	}
}

void clearInvalidCoordinates()
{
	string invalidInt;
	cin.clear();
	getline(cin, invalidInt);
}

int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Robert Kus -- Lab 8" << endl << endl;

	//Variable declarations
	ifstream fileBoard;
	int x{}, y{}, shipSpaces{}, hitCount = 0, missCount = 0, multiHitCount = 0;      // x, y for coordinates
	char gameBoard[25][25];                                                          // 25 x 25 is the max size of the game board
	char boardSquare;
	bool endGame = false, hitAgain = false;

	//Program logic

	fileBoard.open("gameBoard.txt");

	for (int i = 0; i < 25; i++)                          // Populate the gameBoard two-dimensional array with each character in the file
	{                                                     // int i represents the row index, int j represents the column index
		for (int j = 0; j < 25; j++)
		{
			fileBoard >> gameBoard[i][j];                            

			if (gameBoard[i][j] == '#')
			{
				shipSpaces++;
			}
		}
	}

	cout << "Please pick a coordinate set from 0,0 to 24,24 (enter whole numbers only, no commas):" << endl;

	while (!endGame)                   // The while loop will continue the game as long as the fleet is not destroyed
	{
		while (!(cin >> x) || !(cin >> y)                                      // The coordinates must be in bounds and be integers
			|| x < 0 || x > 24 || y < 0 || y > 24)
		{
			cout << "ERROR: Invalid range or format" << endl;
			clearInvalidCoordinates();
		}

		boardSquare = gameBoard[x][y];                                                 // Collect the previous character

		gameBoard[x][y] = fire(x, y, gameBoard[x][y]);                                 // If the coordinates hits a ship, the gameBoard value will become 'H'

		hitAgain = gameBoard[x][y] == boardSquare && gameBoard[x][y] == 'H';           // Determines whether a ship was hit at the same spot multiple times
		
		if (gameBoard[x][y] == 'H' && !hitAgain)
		{
			shipSpaces--;
			hitCount++;
		}
		else if (gameBoard[x][y] != 'H' && !hitAgain)
		{
			missCount++;
		}
		else
		{
			multiHitCount++;
		}

		endGame = fleetSunk(shipSpaces);                 // Function will determine whether to end the game based on the number of ship spaces remaining. If shipSpaces
		clearInvalidCoordinates();                       // is not equal to zero, the game will continue 
	}                                                    


	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			cout << gameBoard[i][j];
		}

		cout << endl;
	}

	cout << endl << endl << "Total # of hits: " << hitCount << endl
		<< "Total # of misses: " << missCount << endl
		<< "# of times a hit space was hit again: " << multiHitCount << endl << endl;

	//Closing program statements 
	system("pause");
	return 0;
}
//Function definitions
//	User-Defined functions:
//		- The fire function takes the user's coordinates and returns 'H' if the coordinates hit a ship and the previous character if it did not 
//      - The fleetSunk function will return a boolean of true if the entire fleet is destroyed and print a message, but return false if the fleet is not
//        destroyed. This boolean return value is also used to determine whether the game continues or ends
//		- The clearInvalidCoordinates function will clear any invalid inputs if the coordinates are entered incorrectly
