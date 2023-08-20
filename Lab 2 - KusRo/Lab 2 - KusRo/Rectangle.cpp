/*
 * Rectangle.cpp defines and interprets the methods that are members of the rectangle class. It is the file that executes the methods in header file
 * 'Rectangle.h'.
 */ 

#include "Rectangle.h"
#include <math.h>
#include <iostream>

using namespace std;

// Sets the width of the rectangle. Called by the parameter-based rectangle constructor.
void rectangle::setWidth(double measurement)
{
	if (measurement > 0) {
		width = measurement;
	}
	else
	{
		width = 0;
	}
}

// Displays the width of the rectangle. This function is set as a constant to prevent the width from being altered. Called by the showData function.
double rectangle::getWidth() const
{
	return width;
}

// Sets the length of the rectangle. Called by the parameter-based rectangle constructor.
void rectangle::setLength(double measurement)
{
	if (measurement > 0) {
		length = measurement;
	}
	else
	{
		length = 0;
	}
}

// Displays the length of the rectangle. This function is set as a constant to prevent the length from being altered. Called by the showData function.
double rectangle::getLength() const
{
	return length;
}

// Calculates the perimeter of the rectangle. Called by the showData function.
double rectangle::calcPerimeter()
{
	return length * 2 + width * 2;
}

// Calculates the area of the rectangle. Called by the showData function.
double rectangle::calcArea()
{
	return length * width;
}

/*
  Calculates the measurement of the diagonal of the rectangle(the measurement between a rectangle's two non-adjacent corners). Called by the showData
  function.
*/ 
double rectangle::calcDiagonal()
{
	/*
	    diagonal = (length^2 + width^2)^0.5
		pow is the Power function, used to calculate a number by an exponent
	*/
	return pow(pow(length, 2) + pow(width, 2), 0.5);         
}

// Displays rectangle data entered by a user and the results of the calculations produced by that data.
void rectangle::showData()
{
	cout << endl << "Here is the data for your rectangle: " << endl << endl;
	cout << "Length: " << getLength() << endl;
	cout << "Width: " << getWidth() << endl;
	cout << "Diagonal: " << calcDiagonal() << endl;
	cout << "Perimeter: " << calcPerimeter() << endl;
	cout << "Area: " << calcArea() << endl;
}

// Sets the length and width of the rectangle based on user input: it 'builds the rectangle'. If the default constructor is used, length and width are 0.
rectangle::rectangle(double lengthInput, double widthInput)
{
	setLength(lengthInput);
	setWidth(widthInput);
}

/*
 * Note: The default constructor does not need to be defined here as the length and width variables are already initialized in the class.
 *       When the default constructor is called (without parameters), length and width will equal 0.
 */