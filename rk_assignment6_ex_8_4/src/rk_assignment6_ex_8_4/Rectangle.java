//Rectangle.java -- This file contains the Rectangle class and include instance variables, get methods, set methods,
//    and public methods that calculate the perimeter and the area.
//CSIS 212-D01
//No external sources used.

package rk_assignment6_ex_8_4;

public class Rectangle {

	// Declare instance variables
	double length;
	double width;
	
	// Create the parameter-based constructor, initializing class variable values when
	//  a new Rectangle object is created.
	public Rectangle(double lengthValue, double widthValue) {
		
		// Use the set methods so that the parameter values can be validated before setting the variables to them.
		setLength(lengthValue);
		setWidth(widthValue);
		
	}
	
	// Build get and set methods. For the set methods, apply
	//  logic to ignore setting the length or width if the parameter
	//  value is less than 0 or greater than 20.
	public double getLength() {
		
		return length;
		
	} // end method getLength
	
	public void setLength(double lengthValue) {
		
		if (lengthValue < 0 || lengthValue > 20) {
			
			System.out.println("The length must be set between 0 and 20.");
			
		}
		else {
			
			length = lengthValue;
			
		}
		
	} // end method setLength
	
	public double getWidth() {
		
		return width;
		
	} // end method getWidth
	
	public void setWidth(double widthValue) {
		
		if (widthValue < 0 || widthValue > 20) {
			
			System.out.println("The width must be set between 0 and 20");
			
		}
		else {
			
			width = widthValue;
			
		}
		
	} // end method setWidth
	
	// This method calculates the perimeter (length * 2 + width * 2).
	public double calculatePerimeter() {
		
		return length * 2 + width * 2;
		
	} // end method calculatePerimeter
	
	// This method calculates the area (length * width).
	public double calculateArea() {
		
		return length * width;
		
	} // end method calculateArea
	
	// This method calculates the area (length * width). All values are rounded to the nearest tenth digit.
	public void printRectangleProperties() {
		
		System.out.printf("Length: %.1f\n", length);
		System.out.printf("Width: %.1f\n", width);
		System.out.printf("Perimeter: %.1f\n", calculatePerimeter());
		System.out.printf("Area: %.1f\n\n", calculateArea());
		
	} // end method calculateArea
	
} // end class Rectangle
