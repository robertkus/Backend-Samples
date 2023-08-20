/*
* Bookdriver.cpp - The program asks the user how many books they have read and what the title, genre, and type for each book. The program
* will assign each book object a reading score based on a random number generator and then display information for each book. Messages are
* displayed when a book object is created or destroyed and dynamic variables and pointers are used in the creation of book objects.
*/
//CSIS 112-B01

//Header files used in the program
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Book.h"

using namespace std;

//Function Prototypes
bool checkIfInteger(string);       //Check if entry is an integer (Uses a string stored from the getline function)

int main() {

	cout << "Robert Kus -- Lab 6 - Dynamic Memory" << endl << endl;

	//Variable declaration
	int initialCount = 0;
	int bookCount = 0;
	int bookScore = 0;
	string bookCountString;
	string bookName;
	string bookGenre;
	string bookType;

	Book* newBook = nullptr;        //Declare and initialize Book object pointer to null
	Book** bookList = nullptr;      //Declare and initialize list of Book objects to null

	//Program Logic

	//Obtain the number of books the user has read, recording the entire line as a string and determine if it is valid.
	cout << "How many books have you read in the last year?" << endl;
	getline(cin, bookCountString);

	//User will be asked to enter how many books they read if the entry is invalid
	while (!checkIfInteger(bookCountString)) {            
		cout << "Please enter a valid number of books (whole number). " << endl;
		getline(cin, bookCountString);
	}

	//If the number of books are valid, store it as an integer and use it to set the length of the Book list.
	bookCount = stoi(bookCountString);
	bookList = new Book*[bookCount];

	//Seed random number generator with 100;
	srand(100);

	//Ask the user for details for the books based on the number of books they read
	//If the user leaves an entry blank, ask the user for the entry again
	for (int i = 0; i < bookCount; i++) {
		cout << "What is the name of a book?" << endl;
		getline(cin, bookName);

		while (bookName.empty()) {                      
			cout << "The book name cannot be blank. Please enter a book name." << endl;
			getline(cin, bookName);
		}

		cout << "What is the genre of the " + bookName + " book? (Western, Devotional, etc.)" << endl;
		getline(cin, bookGenre);

		while (bookGenre.empty()) {
			cout << "The book genre cannot be blank. Please enter a book genre. (Western, Devotional, etc.)" << endl;
			getline(cin, bookGenre);
		}

		cout << "What is the type of the book? (Paper, Electronic, etc.)" << endl;
		getline(cin, bookType);

		while (bookType.empty()) {
			cout << "The book type cannot be blank. Please enter a book type (Paper, Electronic, etc.)" << endl;
			getline(cin, bookType);
		}

		bookScore = 1 + rand() % 5;               //Produce a random integer between 1 and 5.

		newBook = new Book;                       //Build a new dynamic book
		newBook->setTitle(bookName);              //Use Book set functions to initialize private variables
		newBook->setGenre(bookGenre);
		newBook->setBookType(bookType);
		newBook->setReadingScore(bookScore);

		bookList[i] = newBook;                //Add the new book object to a list
	}

	//Display properties associtated with each book in the list of books using the Book class's get functions
	cout << "These are the books you have read this year: " << endl;
	for (int i = 0; i < bookCount; i++) {
		cout << "Book name:              " << bookList[i]->getTitle() << endl;
		cout << "Book genre:             " << bookList[i]->getGenre() << endl;
		cout << "Book type:              " << bookList[i]->getBookType() << endl;
		cout << "Reading score (1-5):    " << bookList[i]->getReadingScore() << endl << endl;
	}

	for (int i = 0; i < bookCount; i++) {
		delete bookList[i];
		bookList[i] = nullptr;
	}

	delete[] bookList;
	bookList = nullptr;

	system("pause");
	return 0;
}

//User-Defined Functions

//Check if a numeric entry is an integer
bool checkIfInteger(string entry) {

	if (entry.empty()) { return false; }           //Check whether an entry exists

	for (const char& digit : entry) {
		if (!isdigit(digit)) {                     //Check each character in the string to determine if it is a digit
			return false;
		}
	}

	return true;
}