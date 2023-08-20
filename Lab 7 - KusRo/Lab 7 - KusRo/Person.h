#pragma once
/*
* Person.h - A class consisting of the public methods and private variables needed to build a Person object. The object will
* store an employee's personal information and the class is inherited by the TeamMember and Leader classes.
*/

#include <string>
#include <cstdlib>
#include <cctype>
#include "Date.h"

class Person {
	public:
		//Set the employee's id to a Person object
		void setId(std::string idNumber) { id = idNumber; }

		//Get the employee's id from a Person object
		std::string getId() { return id; }

		//Set the employee's first name to a Person object
		void setFirstName(std::string personFirstName) { firstName = personFirstName; }  

		//Get the employee's first name to a Person object
		std::string getFirstName() { return firstName; }

		//Set the employee's last name to a Person object
		void setLastName(std::string personLastName) { lastName = personLastName; }

		//Get the employee's last name to a Person object
		std::string getLastName() { return lastName; }		

		//Set the employee's date of birth to a Person object
		void setBirthDate(Date dateOfBirth) { birthDate = dateOfBirth; }

		//Get the employee's date of birth to a Person object
		Date getBirthDate() { return birthDate; }

		//Get the full name of a person
		std::string getFullName() { return getFirstName() + " " + getLastName(); }

		//Default constructor
		Person() {
			setId("");
			setFirstName("");
			setLastName("");
			setBirthDate(Date());
		}

		//Parameter-based constructor
		Person(std::string idNumber, std::string personFirstName, std::string personLastName, Date personBirthDate) {
			setId(idNumber);
			setFirstName(personFirstName);
			setLastName(personLastName);
			setBirthDate(personBirthDate);
		}

		//Destructor
		~Person() {
		}

	private:
		std::string id;                   //The employee's id
		std::string firstName;            //The employee's first name
		std::string lastName;             //The employee's last name
		Date birthDate;                   //The employee's date of birth
};