//DateTest.java -- This program utilizes the Date class and displays its capabilities,
//    including setting and getting class values, and printing dates to the console.
//CSIS 212-D01
//No external sources used.

package rk_assignment6_ex_7_13;

public class DateTest {

	public static void main(String[] main) {
		
		System.out.println("Robert Kus – Assignment 6 - Exercise 7.13\n");
		
		System.out.println("Creating a new date for 09/10/2020:\n");
		
		// Declare and initialize a new Date object, then display the date
		//  and use the get methods to show the month, day, and year separately.
		Date newDate = new Date(9,10,2020);
		
		newDate.displayDate();
		
		System.out.printf("The month value is %d\n", newDate.getMonth());
		System.out.printf("The day value is %d\n", newDate.getDay());
		System.out.printf("The year value is %d\n\n", newDate.getYear());
		
		// Use the set methods to change the values in the date object, then print
		//  the new date to the console.
		System.out.println("Modifying the date to show 11/05/2024:\n");
		
		newDate.setMonth(11);
		newDate.setDay(5);
		newDate.setYear(2024);
		
		newDate.displayDate();
		
	}  // end method main
	
} // end class DateTest