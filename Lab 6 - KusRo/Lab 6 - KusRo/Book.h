/*
* Book.h - This class file includes all of the private and public members required to create a Book object. Private variables include the
* title, genre, typeBook, and reading score, each with their associated public get and set function.
*/

#include <string>

class Book {
public:
	void setTitle(std::string);       //Set the title of the book
	std::string getTitle();           //Get the title of the book
	void setGenre(std::string);       //Set the genre of the book
	std::string getGenre();           //Get the genre of the book
	void setBookType(std::string);    //Set the type of the book
	std::string getBookType();        //Get the type of the book
	void setReadingScore(int);        //Set the reading score for the book
	int getReadingScore();            //Get the reading score for the book
	Book();                           //Default constructor
	~Book();                          //Destructor
private:
	std::string title;
	std::string genre;
	std::string typeBook;
	int readingScore;
};
