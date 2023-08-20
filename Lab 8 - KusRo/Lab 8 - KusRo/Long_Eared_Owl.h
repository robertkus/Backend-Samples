#pragma once
/*
* Long_Eared_Owl.h - This class includes the properties and functions required to create a Long Eared Owl object. Each function is defied within the class.
*
* Reference -
*             Williams, W. (2023). C++ PROGRAMMING: POLYMORPHISM ASSIGNMENT INSTRUCTIONS [Class handout].
					  Liberty University. CSIS-112-B01
*/

#include <iostream>
#include <string>
#include "Animal.h"

class Long_Eared_Owl : public Animal {
public:
	//Long Eared Owl's Eat function
	std::string Eat() {
		return "As a Long Eared Owl, I eat Small Birds and Reptiles.";
	}

	//Default constructor
	Long_Eared_Owl() : Animal() {
		std::cout << "Invoking Long Eared Owl constructor." << std::endl << std::endl;
	}

	//Parameter-based constructor
	Long_Eared_Owl(std::string name, std::string orderName)
		: Animal(name, orderName) {

		// (Williams, 2023)
		setAge(((rand() % 4001) + 2000) / 100.0);                                          // ((rand() % ((40 * 100) + 1)) + (20 * 100)) / 100.0

		std::cout << "Invoking Long Eared Owl constructor." << std::endl << std::endl;
	}

	//Destructor
	~Long_Eared_Owl() {
		std::cout << "Invoking Long Eared Owl destructor." << std::endl << std::endl;
	}

private:
};