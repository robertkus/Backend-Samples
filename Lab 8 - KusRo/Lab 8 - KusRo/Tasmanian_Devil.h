#pragma once
/*
* Tasmanian_Devil.h - This class includes the properties and functions required to create a Tasmanian Devil object. Each function is defied within the class.
*
* Reference -
*             Williams, W. (2023). C++ PROGRAMMING: POLYMORPHISM ASSIGNMENT INSTRUCTIONS [Class handout].
					  Liberty University. CSIS-112-B01
*/

#include <iostream>
#include <string>
#include "Animal.h"

class Tasmanian_Devil : public Animal {
public:
	//Tasmanian Devil's Eat function
	std::string Eat() {
		return "As a Tasmanian Devil, I eat Mice, Rats, and Rabbits.";
	}

	//Default constructor
	Tasmanian_Devil() : Animal() {
		std::cout << "Invoking Tasmanian Devil constructor." << std::endl << std::endl;
	}

	//Parameter-based constructor
	Tasmanian_Devil(std::string name, std::string orderName)
		: Animal(name, orderName) {

		// (Williams, 2023)
		setAge(((rand() % 531) + 340) / 100.0);                                         // ((rand() % ((5.3 * 100) + 1)) + (3.4 * 100)) / 100.0

		std::cout << "Invoking Tasmanian Devil constructor." << std::endl << std::endl;
	}

	//Destructor
	~Tasmanian_Devil() {
		std::cout << "Invoking Tasmanian Devil destructor." << std::endl << std::endl;
	}

private:
};