#pragma once
/*
* Buffalo.h - This class includes the properties and functions required to create a Buffalo object. Each function is defied within the class.
*
* Reference -
*             Williams, W. (2023). C++ PROGRAMMING: POLYMORPHISM ASSIGNMENT INSTRUCTIONS [Class handout].
					  Liberty University. CSIS-112-B01
*/

#include <iostream>
#include <string>
#include "Animal.h"

class Buffalo : public Animal {
public:
	//Buffalo's Eat function
	std::string Eat() {
		return "As a Buffalo, I eat Grass, Shrubs, and Leaves.";
	}

	//Default constructor
	Buffalo() : Animal() {
		std::cout << "Invoking Buffalo constructor." << std::endl << std::endl;
	}

	//Parameter-based constructor
	Buffalo(std::string name, std::string orderName)
		: Animal(name, orderName) {

		// (Williams, 2023)
		setAge(((rand() % 1531) + 680) / 100.0);                               // ((rand() % ((15.3 * 100) + 1)) + (6.8 * 100)) / 100.0

		std::cout << "Invoking Buffalo constructor." << std::endl << std::endl;
	}

	//Destructor
	~Buffalo() {
		std::cout << "Invoking Buffalo destructor." << std::endl << std::endl;
	}

private:
};