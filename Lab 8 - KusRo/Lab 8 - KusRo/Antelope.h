#pragma once
/*
* Antelope.h - This class includes the properties and functions required to create an Antelope object. Each function is defied within the class.
*
* Reference -
*             Williams, W. (2023). C++ PROGRAMMING: POLYMORPHISM ASSIGNMENT INSTRUCTIONS [Class handout].
					  Liberty University. CSIS-112-B01
*/

#include <iostream>
#include <string>
#include "Animal.h"

class Antelope : public Animal {
public:
	//Antelope's Eat function
	std::string Eat() {
		return "As an Antelope, I eat Grass, Shoots, and Seeds.";
	}

	//Default constructor
	Antelope() : Animal() {
		std::cout << "Invoking Antelope constructor." << std::endl << std::endl;
	}

	//Parameter-based constructor
	Antelope(std::string name, std::string orderName)
		: Animal(name, orderName) {

		// (Williams, 2023)
		setAge(((rand() % 1051) + 1540) / 100.0);                                   //((rand() % ((10.5 * 100) + 1)) + (15.4 * 100)) / 100.0

		std::cout << "Invoking Antelope constructor." << std::endl << std::endl;
	}

	//Destructor
	~Antelope() {
		std::cout << "Invoking Antelope destructor." << std::endl << std::endl;
	}

private:
};