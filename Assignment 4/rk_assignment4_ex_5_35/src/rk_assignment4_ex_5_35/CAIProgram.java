//CAIProgram.java -- This program generates two random numbers and the user enter a value that they think
//     is the product of the two numbers. The program then displays a message stating whether the response
//     is correct or not. If it is correct, the program generates another two numbers and asks for the product
//     of the numbers. If wrong, the program continues to ask for the product until the correct answer is entered.
//     Note: CAI stands for Computer-Assisted Instruction
//CSIS 212-D01
//No external sources used.

package rk_assignment4_ex_5_35;

//Import SecureRandom to allow program to generate random numbers;
import java.security.SecureRandom;

//Import Scanner to get and store user inputs.
import java.util.Scanner;

public class CAIProgram {
	
	public static void main(String[] args) {
		
		System.out.println("Robert Kus – Assignment 4 - Exercise 5.35\n");
		
		// Declare and initialize local variables
		Scanner userInput = new Scanner(System.in);
		SecureRandom randNumbers = new SecureRandom();

		int answer = 0;
		
		double userAnswer = 0;   // Declare and initialize the userAnswer variable that will control the while loop.
		
		// Generate a multiplication question and ask the user to enter an answer while the user does not enter -1.
		while (userAnswer != -1) {
			
			answer = GetQuestionAndAnswer(randNumbers);   // Show the new question and get the answer from the GetQuestionAndAnswer method.
			
			userAnswer = userInput.nextDouble();     // Get the user's response, allowing whole and rational number entries.
			
			// Compare the user's response with the answer if the response is not -1.
			if (userAnswer != -1) {
			
				// Continually prompt the user to enter the correct answer if their response is incorrect.
				while (answer != userAnswer) {
					
					System.out.print("No. Please try again: ");
					userAnswer = userInput.nextDouble();
				}
				
				System.out.println("Very Good!\n");
			}
			
		}
		
		userInput.close(); // Close the Scanner object to prevent memory leaks.
		
		System.out.println("That concludes today's lesson. Goodbye.");
		
	} // end method main
	
	/* This private method generates two random numbers, displays a multiplication question 
	   based on those numbers, and returns the product of those two numbers.*/
	private static int GetQuestionAndAnswer(SecureRandom randNumbers) {

		// Get two random numbers from 0 to 9.
		int number1 = randNumbers.nextInt(9);
		int number2 = randNumbers.nextInt(9);
		
		System.out.printf("What is %d times %d (Enter '-1' to quit)? ", number1, number2);   // Show the question.
		
		return number1 * number2;   // Return the product of the two numbers.
		
	} // end method GetQuestionAndAnswer
	
} // end class CAIProgram

