//WhileLoop.cpp -- This program pulls sond data from a text file, loops through each line of the file,
//                 and displays those results in a table format, also sending those results to another file.
//CSIS 111-D01
//<Sources if necessary>

//Include statements 
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables 

//Function prototypes 
int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Robert Kus -- Lab 4" << endl << endl;

	//Variable declarations

	ifstream songs;                                 
	ofstream songLengths;                            
	int songNumberWidth, songNumber{}, songMinSec, songMinutes, songSeconds,
		totalMinSec{}, totalMinutes{}, totalSeconds{},
		cdMin{}, cdSec{}, cdSpace = 4800;                                        // cdSpace represents the total space on cd in seconds (80 min 8 60 sec)

	//Program logic

	//Open songs.txt and display the output in a table format as specified in the lab directions.
	songs.open("songs.txt");

	cout << "Song" << setw(21) << setfill(' ')
		<< "Song  Time" << setw(20) << setfill(' ')
		<< "Total  Time" << endl;

	cout << "Number" << setw(22) << setfill(' ')
		<< "Minutes  Seconds" << setw(20) << setfill(' ')
		<< "Minutes  Seconds" << endl;

	cout << "------" << setw(22) << setfill(' ')
		<< "-------  -------" << setw(21) << setfill(' ')
		<< "-------  -------\n" << endl;

	while (!songs.eof()) {

		songs >> songMinSec;

		songNumber++;

		songNumberWidth = songNumber < 10 ? 15 : 14;                     //Ensures even columns when song number is higher than 10

		totalMinSec = totalMinSec + songMinSec;                          //Accumulates the sum of all times listed in a file

		songMinutes = int(songMinSec / 60);                              //Perform required calculations for final output
		songSeconds = int(songMinSec) % 60;
		totalMinutes = int(totalMinSec / 60);
		totalSeconds = int(totalMinSec) % 60;
		cdMin = int(cdSpace - totalMinSec) / 60;
		cdSec = int(cdSpace - totalMinSec) % 60;

		cout << songNumber << setw(songNumberWidth) << setfill(' ')
			<< songMinutes << setw(9) << setfill(' ') << songSeconds
			<< setw(11) << setfill(' ') << totalMinutes
			<< setw(9) << setfill(' ')
			<< totalSeconds << endl;
	}

	cout << endl << "There are " << cdMin << " minutes and " << cdSec
		<< " seconds of space left on the 80-minute CD."
		<< endl << endl;

	songs.close();

	//Reset variables, reopen songs.txt, and write table output to the songLengths.txt file
	songNumber = 0;
	totalMinSec = 0;
	songs.open("songs.txt");
	songLengths.open("songLengths.txt");

	songLengths << "Song" << setw(21) << setfill(' ')
		<< "Song  Time" << setw(20) << setfill(' ')
		<< "Total  Time" << endl;

	songLengths << "Number" << setw(22) << setfill(' ')
		<< "Minutes  Seconds" << setw(20) << setfill(' ')
		<< "Minutes  Seconds" << endl;

	songLengths << "------" << setw(22) << setfill(' ')
		<< "-------  -------" << setw(21) << setfill(' ')
		<< "-------  -------\n" << endl;

	while (!songs.eof()) {

		songs >> songMinSec;

		songNumber++;

		songNumberWidth = songNumber < 10 ? 15 : 14;                        //Sets width of gap between the first and second columns based on the song number

		totalMinSec = totalMinSec + songMinSec;                             //Recalculate variables values when needed

		songMinutes = int(songMinSec / 60);
		songSeconds = int(songMinSec) % 60;
		totalMinutes = int(totalMinSec / 60);
		totalSeconds = int(totalMinSec) % 60;

		songLengths << songNumber << setw(songNumberWidth) << setfill(' ')
			<< songMinutes << setw(9) << setfill(' ') << songSeconds
			<< setw(11) << setfill(' ') << totalMinutes
			<< setw(9) << setfill(' ')
			<< totalSeconds << endl;
	}

	songLengths << endl << "There are " << cdMin << " minutes and " << cdSec
		<< " seconds of space left on the 80-minute CD."
		<< endl << endl;

	songs.close();
	songLengths.close();

	//Closing program statements 
	system("pause");
	return 0;
}
//Function definitions
/*  
    - The setw function sets the total width of an output value and if the length of the output is less than what is
      specified, the remaining columns will be blank
	- The setfill function is often used in conjunction with setw, in which the setfill function will fill any blank
	  columns from a setw with a given character
	- The open and close functions open and close a file, respectively
	- The eof function will return a boolean based on if a file has reached the end of the file content.
*/