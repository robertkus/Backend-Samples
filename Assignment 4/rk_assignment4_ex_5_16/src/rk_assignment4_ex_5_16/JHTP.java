//JHTP.java -- The program gets two integers from a user and determines if the second integer is a multiple of the first,
//        displaying the results to the console. A private method, called isMultiple, is used to perform the calculation.
//CSIS 212-D01
//No external sources used.

package rk_assignment4_ex_5_16;

//Import Scanner to get and store user inputs.

import java.util.Scanner;

public class JHTP {
	
	public static void main(String[] args) {
		
		System.out.println("Robert Kus – Assignment 4 - Exercise 5.16\n");
		
		Scanner userInput = new Scanner(System.in);  // Declare and initialize scanner variable
		
		// Get the first integer value from the user.
		System.out.print("Enter the first integer: ");
		int valueOne = userInput.nextInt();
		
		// Get the second integer value from the user.
		System.out.print("Enter the second integer: ");
		int valueTwo = userInput.nextInt();
		
		userInput.close(); // Close the Scanner object to prevent memory leaks.
		
		System.out.println("\nDetermining if the second integer is a multiple of the first integer...\n");
		
		// Use the isMultiple method to determine if valueTwo is a multiple of valueOne 
		
		boolean isValueTwoMultiple = isMultiple(valueOne, valueTwo);
	
		// Display the proper results based on the results.
		String multipleMsg = isValueTwoMultiple 
				? "is" 
			    : "is not";
		
		System.out.printf("%d %s a multiple of %d.", valueTwo, multipleMsg, valueOne);
		
	} // end method main
	
	/* The isMultiple method determines if integer2 is a multiple of integer1 
	   based on if the remainder is zero when integer1 is divided by integer2. */
	private static boolean isMultiple(int integer1, int integer2) {
		
		if (integer1 == 0 && integer2 == 0) {           // If integer 1 and integer2 is 0, return true.
			
			return true;
			
		} else if (integer1 == 0 || integer2 == 0) {    // If integer 1 or integer2 is 0 at this point, return false.
			
			return false;
			
		}
		else {
			
			return integer1 % integer2 == 0;       // Return the results of the calculation and comparison.
			
		}
		
	} // end method isMultiple
	
} // end class JHTP
