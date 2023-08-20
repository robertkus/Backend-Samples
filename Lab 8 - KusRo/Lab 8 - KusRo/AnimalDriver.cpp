/*
* AnimalDriver.cpp-The program asks the user to create three animals. Animal choices include antelopes, long-eared owls, buffalos, and tasmanian devils.
* Users are prompted to enter an order name for each animal, which will be used alongside a randomly-generated age to create an animal. Each new animal
* will be dynamic and stored in a common animal list. After the user creates three new animals, the list will display information 
* pertaining to each animal. The animal objects in the list are then destroyed before ending the program.
* 
* CSIS 112-B01
*/

#include <iostream>
#include <string>
#include "Antelope.h"
#include "Long_Eared_Owl.h"
#include "Buffalo.h"
#include "Tasmanian_Devil.h"

using namespace std;

int main() {

	cout << "Robert Kus -- Lab 8 - Polymorphism" << endl << endl;

	//Variable declaration
	string animalName, orderName, selection;
	int animalCount = 0;

	Antelope* newAntelope = nullptr;
	Long_Eared_Owl* newLongEaredOwl = nullptr;
	Buffalo* newBuffalo = nullptr;
	Tasmanian_Devil* newTasmanianDevil = nullptr;

	Animal* animalList[3]{};

	//Program logic
	
    //Seed random number generator with 100;
	srand(100);

	//Continue asking user to create an animal until three animals are made.
	while (animalCount < 3) {
		
		do {
			cout << "Main Menu" << endl << endl;
			cout << "1 - Antelope" << endl << endl;
			cout << "2 - Long Eared Owl" << endl << endl;
			cout << "3 - Buffalo" << endl << endl;
			cout << "4 - Tasmanian Devil" << endl << endl;
			cout << "Enter Selection: ";
			getline(cin, selection);

			//Display error message if user's entry is blank or does not match a selection.
			if (selection != "1" && selection != "2" && selection != "3" && selection != "4") {
				cout << "Invalid selection. Please try again." << endl << endl;
			}

		} while (selection != "1" && selection != "2" && selection != "3" && selection != "4");

		do {
			cout << endl << "Enter the Order associated with the Animal you selected: ";
			getline(cin, orderName);

			//Any entry is acceptable as long as it is not blank.
			if (orderName.empty()) {
				cout << "Entry cannot be blank. Please try again." << endl << endl;
			}
		} while (orderName.empty());


		//Create a dynamic animal-based object (dependent on the user's selection) and add it to the animal list.
		if (selection == "1") {
			newAntelope = new Antelope("Antelope", orderName);
			animalList[animalCount] = newAntelope;

		}
		else if (selection == "2") {
			newLongEaredOwl = new Long_Eared_Owl("Long Eared Owl", orderName);
			animalList[animalCount] = newLongEaredOwl;
		}
		else if (selection == "3") {
			newBuffalo = new Buffalo("Buffalo", orderName);
			animalList[animalCount] = newBuffalo;
		}
		else {
			newTasmanianDevil = new Tasmanian_Devil("Tasmanian Devil", orderName);
			animalList[animalCount] = newTasmanianDevil;
		}
		system("pause");
		animalCount++;
	}

	//Display information for each animal stored in the list
	for (int i = 0; i < animalCount; i++) {
		animalList[i]->displayInfo();
	}

	//Destroy each dynamic animal-based object stored in the list
	for (int i = 0; i < animalCount; i++) {
		delete animalList[i];
		animalList[i] = nullptr;
	}

	system("pause");
	return 0;
}