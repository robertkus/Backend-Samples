/* 
* MyText.h - Includes the public and private members of the class MyText. The main function will use the public functions from this
* class to build a list of encrypted and decrypted words and to build/manipulate new Vigenene objects. This class also includes
* functions that displays the items within the word list as well as the number of words in that list.
*/

#include <string>
#include <vector>
#include "Vigenere.h"

class MyText {
	public:
		void encryptWord(char *);                  //Encrypts one word
		void decryptWord(char *);                  //Decrypts one word
		void FileCreate(std::string);              //Creates a file and outputs a words vector into it
		void DisplayText(std::string, bool);       //Displays a list of words from the vector
		int WordCount();                           //Returns the word count of the vector
		MyText();                                  //Default constructor
		MyText(std::string);                       //Single-argument constuctor that passes in the key, which is then used in the Vigenere setKey function
		~MyText();                                 //Destructor

	private:
		std::vector <std::string> words;
		Vigenere v;
};
