/*
 * File:   main.cpp
 * Author: Robert Kus
 *
 * Created on August 23, 2023
 */

#include "SelfOrderedList.h"
#include "llist.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	string heuristicTypes[] = { "count", "moveToFront" , "transpose" };
	bool isFound = false;     //Initialize search boolean

	//Implement the three self-organizing list heuristics
	for (string type : heuristicTypes) {

		char initialCharList[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };

		//Initialize new Self-Ordered List
		SelfOrderedList<char>* selfOrderedCharList = new SelfOrderedList<char>(type);

		for (int i = 0; i < sizeof(initialCharList); i++) {
			selfOrderedCharList->add(initialCharList[i]);
		}

		char searchItemList[] = { 'F', 'D', 'F', 'G', 'E', 'G', 'F',
								  'A', 'D', 'F', 'G', 'E', 'H', 'I' };

		for (int i = 0; i < sizeof(searchItemList); i++) {
			isFound = selfOrderedCharList->find(searchItemList[i]);
		}

		selfOrderedCharList->printlist();
	}

	//Test 2: Implementing self-organizing heuristics from file
	for (string type : heuristicTypes) {
		ifstream file;
		file.open("test.txt");
		string text;
		//Initialize new Self-Ordered List
		SelfOrderedList<string>* selfOrderedTextList = new SelfOrderedList<string>(type);
		while (file >> text) {
			isFound = selfOrderedTextList->find(text);
		}
		file.close();

		selfOrderedTextList->printlist();
	}

	//close program
	cout << endl << endl;
	system("pause");
	return 0;
}
