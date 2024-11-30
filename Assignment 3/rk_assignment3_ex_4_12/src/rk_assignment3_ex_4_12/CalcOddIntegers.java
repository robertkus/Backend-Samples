//CalcOddIntegers.java -- The program calculates the product of the odd integers between 1 and 15 (using a for loop),
//     then prints the result to the console.
//CSIS 212-D01
//No external sources used.

package rk_assignment3_ex_4_12;

public class CalcOddIntegers {

	public static void main(String[] args)
	{
		System.out.println("Robert Kus – Assignment 3 - Exercise 4.12\n");
		
		System.out.println("Calculating the product of all odd integers from 1 to 15.\n");
		
		// Declare and initialize final product variable
		
		int finalProduct = 1;
		
		// Use a for loop to multiply each odd number from 1 to 15
		
		for (int oddNum = 1; oddNum <= 15; finalProduct *= oddNum, oddNum += 2) 
		{
			// All necessary calculations are handled in the for loop parameters.
		}
		
		// Print the final product to the console
		
		System.out.printf("The product of all odd integers from 1 to 15 is %d.", finalProduct);
		
	} // end method main
	
} // end class CalcOddIntegers
