/*
* File:   bstMain.cpp
* Author: Robert Kus -- CSIS 215 -- Programming Assignment 2 -- Threaded Binary Tree
*
* This program uses <int, string> pairs provided in the assignment instructions to build a binary search tree (BST).
* Then, the program prints the BST structure and it's size onto the console. Finally, the program
* prints the values in the BST in order from smallest to largest key, then prints those same values in reverse order. 
*/

#include <string>
#include <iostream>
#include <sstream>
#include "BSTNode.h"
#include "BST.h"
#include "dictionary.h"
#include "book.h"

using namespace std;

int main(char** argv) {

	cout << "Robert Kus -- CSIS 215 Programming Assignment 2 -- Threaded Binary Tree" << endl << endl;

	BST<int, string> myBST;

	//Insert the values into the BST Tree
	myBST.insert(77, "seventy-seven");
	myBST.insert(70, "seventy");
	myBST.insert(75, "seventy-five");
	myBST.insert(66, "sixty-six");
	myBST.insert(79, "seventy-nine");
	myBST.insert(68, "sixty-eight");
	myBST.insert(67, "sixty-seven");
	myBST.insert(69, "sixty-nine");
	myBST.insert(90, "ninety");
	myBST.insert(85, "eighty-five");
	myBST.insert(83, "eighty-three");
	myBST.insert(87, "eighty-seven");
	myBST.insert(65, "sixty-five");

	cout << "Testing the insert function to build my tree." << endl;
	cout << "My BST tree size is " + myBST.size() << endl;
	cout << "My tree's stucture is:" << endl;

	//Print the BST Tree
	myBST.print();

	cout << "Inorder printing of my tree:" << endl;

	//Print the BST Tree values in ascending order
	myBST.printInorder();

	cout << "Reverse order printing of my tree:" << endl;

	//Print the BST tree values in reverse order
	myBST.printReverse();

	return 0;
}