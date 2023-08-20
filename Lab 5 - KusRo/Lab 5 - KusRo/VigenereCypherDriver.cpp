/*
* VigenereCyperDriver.cpp - In this program, the user will enter in a key (a word, set of characters, etc.). Upon entering the key, the user will then
* choose whether they wish to encrypt a file, decrypt a file, or quit/exit. If a user wishes to encrypt or decrypt a file, they will be prompted to 
* enter the file name. Using the key entered, the program will read the file data and encrypt it. The user will then be prompted to enter a file
* name for the newly encrypted/decrypted file to be placed in. The program will display the file data before and after encryption/decryption as well as
* the file's word count.
*/
//CSIS 112-B01

//Header files used in the program
#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
#include "MyText.h"

using namespace std;

//Function Prototypes
int displayMenu();                                //Display menu selection and return value based on selection.
void encryptAndDecryptFile(int, MyText);          //Encrypt and decrypt files based on user selection.

int main() {

	cout << "Robert Kus -- Lab 5 - Pointers" << endl << endl;

	//Variable declaration
	int menuChoice = 0;
	string theKey;
	MyText textObject;

	//Program Logic

	//Get and set the encryption/decryption key based on the user's input.
	cout << "Enter an encryption/decryption key: ";
	getline(cin, theKey);
	textObject = MyText(theKey);

	//Display the menu
	menuChoice = displayMenu();

	//The program will continue to run as long as the user decides to encrypt or decrypt a file.
	while (menuChoice != 3) {

		//Encrypt or decrypt the file based on user's choice using a helper method.
		encryptAndDecryptFile(menuChoice, textObject);
		menuChoice = displayMenu();
	}

	cout << endl;
	system("pause");
	return 0;
}

//Display the selection menu and return the user's selction.
int displayMenu() {
	string selection;
	bool isValidSelection = false;

	//The program will continue asking for the user's selection if the selection is invalid.
	while (!isValidSelection) {
		cout << endl << "Vigenere Cypher" << endl << endl;
		cout << setw(5) << setfill(' ') << "Main Menu" << endl << endl;
		cout << "1 - Encrypt File" << endl;
		cout << "2 - Decrypt File" << endl;
		cout << "3 - Quit" << endl;
		getline(cin, selection);

		//Display error message and clear entry if invalid. Otherwise, return the selection.
		if (cin.fail() || selection.empty() || 
			(selection != "1" && selection != "2" && selection != "3")) {
			cout << "That is not a valid selection. Please select 1, 2, or 3: " << endl;
		}
		else {
			isValidSelection = true;
		}
	}

	return stoi(selection);
}

//Encrypt or decrypt file based on user selection. User's cannot reach this function unless they choose 1 or 2.
void encryptAndDecryptFile(int selection, MyText myTextObject) {

	//Initialize actionType based on selection (1 for "encrypt", 2 for "decrypt")
	string actionType = selection == 1 ? "encrypt" : "decrypt";

	string fileInputName;
	string fileOutputName;
	string inputLine;
	ifstream inputFile;
	char inputCharacters[1000]{};
	char* token = nullptr;
	char* nextToken = nullptr;

	cout << endl << "Enter the name of the file/filepath to " << actionType << " : ";
	getline(cin, fileInputName);
	inputFile.open(fileInputName);

	//If the file does not exist, throw an error message and exit the function.
	if (!inputFile) {
		cout << "Sorry, that file cannot be reached." << endl;
		return;
	}

	//Display file text line by line and copy the lines' characters into the inputCharacters array (1000 charactes max) 
	while (getline(inputFile, inputLine)) {
		cout << inputLine << endl;
		strncpy_s(inputCharacters, inputLine.c_str(), 1000);
	}

	//Tokenize the first word in the text file, encrypting or decrypting it based on the user's choice.
	token = strtok_s(&inputCharacters[0], " ,\t\n", &nextToken);
	if (selection == 1) {
		myTextObject.encryptWord(token);
	}
	else {
		myTextObject.decryptWord(token);
	}

	//Continue encrypting and decrypting the rest of the words in the text file.
	while (token != nullptr) {
		token = strtok_s(nullptr, " ,\t\n", &nextToken);
		if (token == nullptr) { continue; }               //End while loop if there are no words left

		if (selection == 1) {
			myTextObject.encryptWord(token);
		}
		else {
			myTextObject.decryptWord(token);
		}
	}

	cout << endl << "A new file will be created that contains the " << actionType + "ed" << " message." << endl;
	cout << "Please enter the name of the new file to create: ";
	getline(cin, fileOutputName);

	//Create a new file that will hold the encrypted/decrypted text
	myTextObject.FileCreate(fileOutputName);

	//Display the text in the new file and its word count
	myTextObject.DisplayText(fileOutputName, selection == 1);
	inputFile.close();
}