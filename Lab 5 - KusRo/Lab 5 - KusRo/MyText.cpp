/*  
* MyText.cpp - Defines and executes the member functions of the MyText class. Some functions will call other functions that are members of the
* Vigenere class.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "MyText.h"

using namespace std;

//Encrypts one word and adds it to the words vector.
void MyText::encryptWord(char *token) {
	string output = v.encrypt(string(token));
	words.push_back(output);
}

//Decrypts one word and adds it to the words vector.
void MyText::decryptWord(char *token) {
	string output = v.decrypt(string(token));
	words.push_back(output);
}

//Creates a file and outputs a words vector into it
void MyText::FileCreate(string fileName) {
	ofstream outputFile(fileName);

	//For each item in words, add it to the output file, followed by a space
	for (auto& word : words) {
		outputFile << word + " ";
	}

	outputFile.close();
}

//Displays a list of words from the vector
void MyText::DisplayText(string fileName, bool isEncrypted) {

	ifstream file;
	string fileText;

	//Alter display message based on if the file contains encrypted or decrypted data.
	string cryptographyType = isEncrypted ? "Encrypted" : "Decrypted";

	file.open(fileName);

	cout << endl << "The new file contains the following " << cryptographyType << " message: " << endl << endl;

	while (getline(file, fileText)) {
		cout << fileText;
	}

	//Display word count
	cout << endl << "The message contains " << WordCount() << " words." << endl;

	file.close();

	//Clear the current words list to allow the program to be reused
	words.clear();
}

//Returns the word count of the vector
int MyText::WordCount() {
	
	return int(words.size());
}

//Default constructor
MyText::MyText() {
}

//Single-argument constuctor that passes in the key, which is then used in the Vigenere setKey function
MyText::MyText(string k) {
	v.setKey(k);
}

//Destructor
MyText::~MyText() {}