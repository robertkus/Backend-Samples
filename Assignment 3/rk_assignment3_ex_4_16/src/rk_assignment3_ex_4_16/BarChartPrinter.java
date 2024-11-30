//BarChartPrinter.java -- The program obtains 5 numbers between 1 and 30 and displays those results in a bar chart style. Each number is 
//  represented by a row of asterisks (*). For instance, the number 3 would be displayed as ***.
//CSIS 212-D01
//No external sources used.

package rk_assignment3_ex_4_16;

//Import Scanner to get and store user inputs.
import java.util.Scanner;

public class BarChartPrinter {
	
	public static void main(String[] args)
	{
		System.out.println("Robert Kus – Assignment 3 - Exercise 4.16\n");
		
		// Declare and initialize global variables.
		
		Scanner userInput = new Scanner(System.in);
		
		String mainInputMessageTemplate = "Enter the %s number between 1 and 30 (integers only): ";
		String invalidInputMessage = "The number you entered was invalid";
		
		String barOne = "";
		String barTwo = "";
		String barThree = "";
		String barFour = "";
		String barFive = "";
		
		System.out.printf(mainInputMessageTemplate, "first");
		int intOne = userInput.nextInt();
		
		while (intOne < 1 || intOne > 30) {
			System.out.println(invalidInputMessage);
			System.out.printf(mainInputMessageTemplate, "first");
			intOne = userInput.nextInt();
		}
		
		System.out.printf(mainInputMessageTemplate, "second");
		int intTwo = userInput.nextInt();
		
		while (intTwo < 1 || intTwo > 30) {
			System.out.println(invalidInputMessage);
			System.out.printf(mainInputMessageTemplate, "second");
			intTwo = userInput.nextInt();
		}
		
		System.out.printf(mainInputMessageTemplate, "third");
		int intThree = userInput.nextInt();
		
		while (intThree < 1 || intThree > 30) {
			System.out.println(invalidInputMessage);
			System.out.printf(mainInputMessageTemplate, "third");
			intThree = userInput.nextInt();
		}
		
		System.out.printf(mainInputMessageTemplate, "fourth");
		int intFour = userInput.nextInt();
		
		while (intFour < 1 || intFour > 30) {
			System.out.println(invalidInputMessage);
			System.out.printf(mainInputMessageTemplate, "fourth");
			intFour = userInput.nextInt();
		}
		
		System.out.printf(mainInputMessageTemplate, "fifth");
		int intFive = userInput.nextInt();
		
		while (intFive < 1 || intFive > 30) {
			System.out.println(invalidInputMessage);
			System.out.printf(mainInputMessageTemplate, "fifth");
			intFive = userInput.nextInt();
		}
		
		userInput.close(); // Close the Scanner object to prevent memory leaks.
		
		System.out.printf("\nYou entered %d %d %d %d %d.%n%n",
				intOne, intTwo, intThree, intFour, intFive);
		
		System.out.println("The five numbers produce the following bar charts:\n");
		
		/* Using for loops, create a bar graph by adding an apostrophe
		   to each bar based on their respective entries. */
		
		for (int count1 = 0; count1 < intOne; barOne += "*", count1++);
		System.out.println(barOne);
		
		for (int count2 = 0; count2 < intTwo; barTwo += "*", count2++);
		System.out.println(barTwo);
		
		for (int count3 = 0; count3 < intThree; barThree += "*", count3++);
		System.out.println(barThree);
		
		for (int count4 = 0; count4 < intFour; barFour += "*", count4++);
		System.out.println(barFour);
		
		for (int count5 = 0; count5 < intFive; barFive += "*", count5++);
		System.out.println(barFive);
		
		
	} // end method main

} // end class BarChartPrinter
