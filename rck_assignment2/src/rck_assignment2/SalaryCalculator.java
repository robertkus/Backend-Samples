//SalaryCalculator.java -- This program calculates the pay of three employees based on each employee's hours worked and pay rate.
//   The program captures the hours worked and pay rates based on user inputs, and while loops are used to continuously prompt for
//   these entries if an entry less than 0 is entered. If...else blocks determine which calculation is used and what pay is displayed
//   for each employee based on the hours worked. If the employee works 40 hours or less, they are paid their normal rate for each
//   hour worked. If the employee works more than 40 hours, they are paid their normal rate for the first 40 hours and 1.5 times their
//   normal rate for every hour worked after.
//CSIS 212-D01
//No external sources used.

package rck_assignment2;

//Import Scanner to get and store user inputs.
import java.util.Scanner;

public class SalaryCalculator {
	
	public static void main(String[] args) {
		
		System.out.println("Robert Kus – Assignment 2\n");
		
		// Declare and initialize global variables.
		
		Scanner userInput = new Scanner(System.in);
		
		double employee1Pay = 0;
		double employee2Pay = 0;
		double employee3Pay = 0;
		
		int maxNormalHrs = 40;
		double overtimeRate = 1.5;
		
		// Get the user's input for employee 1's rate and hours worked.
		
		System.out.print("Enter employee 1's hourly rate: ");
		double employee1Rate = userInput.nextDouble();
		
		// Prompt the user to enter a valid hourly rate entry if it is less than 0.
		
		while (employee1Rate < 0) {
			
			System.out.print("Please enter a value 0 or greater: ");
			employee1Rate = userInput.nextDouble();
		}
		
		System.out.print("Enter employee 1's hourly worked: ");
		int employee1Hours = userInput.nextInt();
		
		// Prompt the user to enter a valid hours entry if it is less than 0.
		
		while (employee1Hours < 0) {
			
			System.out.print("Please enter a value 0 or greater: ");
			employee1Hours = userInput.nextInt();
		}
		
		/* Display employee 1's pay based on their hourly rate and hours worked 
		   (Every hour worked past is paid at 1.5 times the hourly salary). */
		
		if (employee1Hours > maxNormalHrs) {
			
			employee1Pay = employee1Rate * maxNormalHrs + employee1Rate * (employee1Hours - maxNormalHrs) * overtimeRate;
			System.out.printf("Pay for employee 1 is $%.2f%n", employee1Pay);
			
		} else {
			
			employee1Pay = employee1Rate * employee1Hours;
			System.out.printf("Pay for employee 1 is $%.2f%n", employee1Pay);
		}
		
		// Get the user's input for employee 2's rate and hours worked.
		
		System.out.print("Enter employee 2's hourly rate: ");
		double employee2Rate = userInput.nextDouble();
		
		// Prompt the user to enter a valid hourly rate entry if it is less than 0.
		
		while (employee2Rate < 0) {
			
			System.out.print("Please enter a value 0 or greater: ");
			employee2Rate = userInput.nextDouble();
		}
		
		System.out.print("Enter employee 2's hourly worked: ");
		int employee2Hours = userInput.nextInt();
		
		// Prompt the user to enter a valid hours entry if it is less than 0.
		
		while (employee2Hours < 0) {
			
			System.out.print("Please enter a value 0 or greater: ");
			employee2Hours = userInput.nextInt();
		}
		
		/* Display employee 2's pay based on their hourly rate and hours worked 
		   (Every hour worked past is paid at 1.5 times the hourly salary). */
		
		if (employee2Hours > maxNormalHrs) {
			
			employee2Pay = employee2Rate * maxNormalHrs + employee2Rate * (employee2Hours - maxNormalHrs) * overtimeRate;
			
			System.out.printf("Pay for employee 2 is $%.2f%n", employee2Pay);
			
		} else {
			
			employee2Pay = employee2Rate * employee2Hours;
			
			System.out.printf("Pay for employee 2 is $%.2f%n", employee2Pay);
		}
		
		// Get the user's input for employee 3's rate and hours worked.
		
		System.out.print("Enter employee 3's hourly rate: ");
		double employee3Rate = userInput.nextDouble();
		
		// Prompt the user to enter a valid hourly rate entry if it is less than 0.
		
		while (employee3Rate < 0) {
			
			System.out.print("Please enter a value 0 or greater: ");
			employee3Rate = userInput.nextDouble();
		}
		
		System.out.print("Enter employee 3's hourly worked: ");
		int employee3Hours = userInput.nextInt();
		
		// Prompt the user to enter a valid hours entry if it is less than 0.
		
		while (employee3Hours < 0) {
			
			System.out.print("Please enter a value 0 or greater: ");
			employee3Hours = userInput.nextInt();
		}
		
		/* Display employee 3's pay based on their hourly rate and hours worked 
		   (Every hour worked past is paid at 1.5 times the hourly salary). */
		
		if (employee3Hours > maxNormalHrs) {
			
			employee3Pay = employee3Rate * maxNormalHrs + employee3Rate * (employee3Hours - maxNormalHrs) * overtimeRate;
			
			System.out.printf("Pay for employee 3 is $%.2f%n", employee3Pay);
			
		} else {
			
			employee3Pay = employee3Rate * employee3Hours;
			
			System.out.printf("Pay for employee 3 is $%.2f%n", employee3Pay);
		}
		
		userInput.close(); // Close the Scanner object to prevent memory leaks.
		
	} // end method main
	
} // end class SalaryCalculator
