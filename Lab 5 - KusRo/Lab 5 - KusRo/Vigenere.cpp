/* 
* Vigenere.cpp - Defines and executes the member functions of the Vigenere class.
*/

#include <iostream>
#include <string>
#include "Vigenere.h"

using namespace std;

/*  Reference:
*		Tutorials Point (2023). C++ Program to Implement the Vigenere Cypher. 
            https://www.tutorialspoint.com/cplusplus-program-to-implement-the-vigenere-cypher
*/

//Set the data member key
void Vigenere::setKey(string k) {
	key = toUpperCase(k);
}

//Get the data member key
string Vigenere::getKey() {
	return key;
}

//Converts the given string to upper case and returns it
string Vigenere::toUpperCase(string k) {
	for (auto& letter : k) { 
		letter = toupper(letter); 
	}

	return k;
}

//Encrypts the string and returns it
//Tutorials Point (2023)
string Vigenere::encrypt(string w) {
	string output;
	for (int i = 0, j = 0; i < w.length(); ++i) {
		char c = w[i];
		if (c >= 'a' && c <= 'z')
			c += 'A' - 'a';
		else if (c < 'A' || c > 'Z')
			continue;
		output += (c + key[j] - 2 * 'A') % 26 + 'A';       //added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
		j = (j + 1) % key.length();
	}
	return output;
}

//Decrypts the string and returns it
//(Tutorials Point(2023))
string Vigenere::decrypt(string w) {
	string output;
	for (int i = 0, j = 0; i < w.length(); ++i) {
		char c = w[i];
		if (c >= 'a' && c <= 'z')
			c += 'A' - 'a';
		else if (c < 'A' || c > 'Z')
			continue;
		output += (c - key[j] + 26) % 26 + 'A';           //added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
		j = (j + 1) % key.length();
	}
	return output;

}

//Default constructor
Vigenere::Vigenere() {
}

//Single-argument constructor
Vigenere::Vigenere(string k) {
	key = k;
}

//Destructor
Vigenere::~Vigenere() {}