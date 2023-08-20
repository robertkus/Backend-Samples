/*
* Book.cpp - Defines and executes the public functions in the Book class
*/

#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

void Book::setTitle(string bookTitle) {
	title = bookTitle;
}

string Book::getTitle() {
	return title;
}

void Book::setGenre(string bookGenre) {
	genre = bookGenre;
}

string Book::getGenre() {
	return genre;
}

void Book::setBookType(string bookType) {
	typeBook = bookType;
}

string Book::getBookType() {
	return typeBook;
}

void Book::setReadingScore(int bookScore) {
	readingScore = bookScore;
}

int Book::getReadingScore() {
	return readingScore;
}

Book::Book() {
	cout << "Creating a new book." << endl << endl;
}

Book::~Book() {
	cout << "In the Book destructor." << endl << endl;
}