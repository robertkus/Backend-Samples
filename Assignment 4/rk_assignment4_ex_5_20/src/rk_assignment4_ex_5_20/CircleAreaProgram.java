//CircleAreaProgram.java -- This program calculates the area of a circle based on the radius entered by the user. The
//      program uses a private method called circleArea to perform the calculations.
//CSIS 212-D01
//No external sources used.

package rk_assignment4_ex_5_20;

//Import Scanner to get and store user inputs.
import java.util.Scanner;

public class CircleAreaProgram {

	public static void main(String[] args) {
		
		System.out.println("Robert Kus – Assignment 4 - Exercise 5.20\n");
		
		Scanner userInput = new Scanner(System.in);   // Declare and initialize scanner variable
		
		// Get the radius value from the user.
		System.out.print("Enter the radius of the circle (0 or greater): ");
		double radius = userInput.nextDouble();
		
		// If the user fails to enter a positive value for the radius, continue to prompt the user.
		while (radius < 0) { 
			System.out.println("\nThe radius cannot be a negative number.\n");
			System.out.print("Enter the radius of the circle (0 or greater): ");
			radius = userInput.nextDouble();
			
		}
		
		userInput.close(); // Close the Scanner object to prevent memory leaks.
		
		System.out.println("\nCalculating the area of the circle...\n");
		
		double area = circleArea(radius);
		
		System.out.printf("The area of the circle is " + area + ".");
		
	} // end method main
	
	// The circleArea method uses the radius entered by the user to calculate the area of the circle.
	private static double circleArea(double circleRadius) {
		
		// Use the PI constant and pow (stands for power) method from the Math class in the area calculation.
		
		return Math.PI * Math.pow(circleRadius, 2);    // Area of a circle = PI * radius^2
		
	} // end method circleArea
	
} // end class CircleAreaProgram
