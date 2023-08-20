/* 
* Vigenere.h - This class file includes the public functions and private variables used to encrypt/decrypt words using the vigenere
* method. The user will be asked to type in a key, which is used in the encryption/decryption process and is used in building a new
* Viginere object.
* The public functions are called by functions/constructors in the MyText class; they will never be called in the main function.
*/

#include <string>

class Vigenere {
	public:
		void setKey(std::string);                //Set the data member key
		std::string getKey();                    //Get the data member key
		std::string toUpperCase(std::string);    //Converts the given string to upper case and returns it
		std::string encrypt(std::string);        //Encrypts the string and returns it
		std::string decrypt(std::string);        //Decrypts the string and returns it
		Vigenere();                              //Default constructor
		Vigenere(std::string);                   //Single-argument constructor
		~Vigenere();                             //Destructor

	private:
		std::string key;
};
