//VariableLengthArgumentList.java -- This program calculates the product of a series of
//  integers passed to a method product with a variable-length argument list. The program
//  tests this method with three calls, one with two integers, one with three integers, and one with four integer.
//  The values for each integer are determined randomly.
//CSIS 212-D01
//No external sources used.
package rk_assignment5_ex_6_14;

// Import SecureRandom to allow program to generate random numbers.
import java.security.SecureRandom;

public class VariableLengthArgumentList {

	public static void main(String[] args) {
		
		System.out.println("Robert Kus – Assignment 5 - Exercise 6.14\n");
		
		// Declare and initialize SecureRandom variable, used for generating random numbers.
		SecureRandom randomNumbers = new SecureRandom();
		
		// Declare and initialize the integers that will be used (each integer will be between 0 and 10).
		int integer1 = randomNumbers.nextInt(11);
		int integer2 = randomNumbers.nextInt(11);
		int integer3 = randomNumbers.nextInt(11);
		int integer4 = randomNumbers.nextInt(11);
		int integer5 = randomNumbers.nextInt(11);
		int integer6 = randomNumbers.nextInt(11);
		int integer7 = randomNumbers.nextInt(11);
		int integer8 = randomNumbers.nextInt(11);
		int integer9 = randomNumbers.nextInt(11);
		
		// Show the user which multiplication problems will be calculated using the randomly-generated integers.
		System.out.println("The following multiplication problems will be calculated:");
		System.out.printf("1. %d x %d\n", integer1, integer2);
		System.out.printf("2. %d x %d x %d\n", integer3, integer4, integer5);
		System.out.printf("3. %d x %d x %d x %d\n\n", integer6, integer7, integer8, integer9);
		
		int product1 = product(integer1, integer2);
		int product2 = product(integer3, integer4, integer5);
		int product3 = product(integer6, integer7, integer8, integer9);
		
		// Show the user the answers to the multiplication problems.
		System.out.println("\nHere are the answers to the multiplication problems:");
		System.out.printf("1. %d\n", product1);
		System.out.printf("2. %d\n", product2);
		System.out.printf("3. %d\n", product3);
		
	} // end method main
	
	/* This method returns the product of each number entered as a parameter in the method.
	   The method can have as many parameters as needed, provided each parameter is an integer. */
	private static int product (int... numbers) {
		
		// Initialize the final product variable to 1.
		int finalProduct = 1;
		
		// Using an enhanced for loop, multiply the finalProduct by each number fed as a parameter in the method.
		for (int number: numbers) {
			finalProduct *= number;
		}
		
		// Return the product of the numbers entered.
		return finalProduct;
		
	} //end method product
	
} // end class VariableLengthArgumentList
