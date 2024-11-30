//DiceRolling.java -- The program simulates the rolling of two die, rolling the dice 36,000 times, calculating the sum
//	of each roll, and returns the results in a tabular format, showing the number of times a dice total was rolled.
//  The program uses a random number generator to create a pair of rolls between 1 and 6 and holds the number of times
//  a sum was calculated in a one-dimensional array, tallying up the sums between 2 and 12.
//CSIS 212-D01
//No external sources used.

package rk_assignment5_ex_6_17;

//Import SecureRandom to allow program to generate random numbers.
import java.security.SecureRandom;

public class DiceRolling {

	public static void main(String[] args) {
		
		System.out.println("Robert Kus – Assignment 5 - Exercise 6.17\n");
		
		// Declare and initialize SecureRandom variable, used for generating random numbers.
		SecureRandom randomNumbers = new SecureRandom();
		
		/* Declare and initialize the array that will hold the number of times each total of the two dice is made.
		   (The array length will need to be 11, holding sums from 2 to 12). */
		
		int[] diceSums = new int[11];
		
		// Use a for loop to simulate the rolling of dice 36000 times.
		for (int i = 0; i < 36000; i++) {
			
			/* Get a random die roll between 1 and 6 (Add 1 to the random
			   integer to ensure the number is between 1 and 6). */
			int die1 = 1 + randomNumbers.nextInt(6);
			int die2 = 1 + randomNumbers.nextInt(6);
			
			// Sum up the two die values.
			int sum = die1 + die2;
			
			/* Use a nested for loop to iterate through each diceSums location,
			   incrementing the value at the location only if the sum is correctly
			   associated with that location (ex: a sum of 2 would be associated with
			   the diceSums value at index 0, which tallies how many times 2 was rolled).*/
			for (int j = 0; j < diceSums.length; j++) {
				
				// Only increment the value at the correct diceSums location (There should only be one location).
				if (j == sum - 2) {
					diceSums[j]++;
				}
			}
		}
		
		// Display the simulated results of the 36,000 dice roles.
		System.out.println("Showing the results of 36,000 pairs of dice rolled:\n");
		printResults(diceSums);

	} // end method main
	
	// Print the results of the dice rolls in a neatly tabular format.
	private static void printResults(int[] diceRolls) {
		
		System.out.println("Roll\tRollCount");
		
		// Use a for loop to display the dice sums and the number of times that each sum was rolled.
		for (int i = 0; i < diceRolls.length; i++) {
			
			// Declare and initialize sum and sum count variables.
			int diceRoll = i + 2;
			int rollCount = diceRolls[i];
			
			// Print the results in a neatly tabular format.
			System.out.printf("%d\t%d\n", diceRoll, rollCount);
		}
		
	} // end method printResults
	
} // end class DiceRolling
