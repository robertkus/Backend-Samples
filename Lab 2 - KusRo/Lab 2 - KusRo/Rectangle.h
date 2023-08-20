/*
 * This rectangle class file collects height and width measurements required to produce a 'rectangle'. Height and width are assigned 0 if the default
 * rectangle constuctor is called by a program. This class uses the measurements to calculate the perimeter, area, and diagonal (the measurement between
 * one corner and the non-ajacent corner) of the rectangle. Other functions used are those used to 'set' height and width measurements (used by the 
 * parameter-based constructor), functions that 'get' the current height and width measurements, and the showData function displays the measures
 * and calculations associated with the rectangle.
 */

class rectangle
{
	public:
		double calcPerimeter();                                      //Calculates the rectangle's perimeter
		double calcArea();                                           //Calculates the rectangle's area
		double calcDiagonal();                                       //Calculates the diagonal of the rectangle
		void showData();                                             //Displays the width, length, length of the diagonal, perimeter, area
		void setWidth(double measurement);                           //Sets the width
		double getWidth() const;                                     //Returns the width
		void setLength(double measurement);                          //Sets the length
		double getLength() const;                                    //Returns the length

		rectangle() {};                                              //Default Constructor
		rectangle(double, double);                                   //Constructor with parameters
	private:
		double width = 0;           // Declare and initialize length and width private variables
		double length = 0; 
};