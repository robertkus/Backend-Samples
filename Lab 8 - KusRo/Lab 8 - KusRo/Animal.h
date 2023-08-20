#pragma once
/*
* Animal.h - This class includes the properties and functions required to create an Animal object. Each function is defied within the class.
*/

#include <iostream>
#include <string>
#include <iomanip>

class Animal {
public:
	//Set an animal's common name
	void setCommonName(std::string name) {
		commonName = name;
	}

	//Get an animal's common name
	std::string getCommonName() const {
		return commonName;
	}

	//Set an animal's order type
	void setOrder(std::string orderType) {
		order = orderType;
	}

	//Get an animal's order type
	std::string getOrder() const {
		return order;
	}

	//Set an animal's age
	void setAge(double animalAge) {
		age = animalAge;
	}

	//Get an animal's age
	double getAge() const {
		return age;
	}

	//Virtual Eat function (not implemented)
	std::string virtual Eat() { return ""; };

	//Displays animal information (base function)
	void displayInfo() {
		std::cout << "I am a " << getCommonName() + "." << std::endl;
		std::cout << "I am a " << getOrder() << " and I am " << getAge()
			<< std::fixed << std::setprecision(2) << " years old." << std::endl;
		std::cout << Eat() << std::endl << std::endl;
	};

	//Default constructor
	Animal() {
		setCommonName("");
		setOrder("");
		setAge(0);
		std::cout << "Involking the default Animal constructor"
			<< std::endl << std::endl;
	}

	//Parameter-based constructor
	Animal(std::string name, std::string orderType) {
		setCommonName(name);
		setOrder(orderType);
		setAge(0);
		std::cout << "Involking the 2-argument Animal constructor"
			<< std::endl << std::endl;
	}

	//Destructor
	virtual ~Animal() {
		std::cout << "Involking the default Animal destructor" 
			<< std::endl << std::endl;
	}
private:
	std::string commonName;
	std::string order;
	double age;
};