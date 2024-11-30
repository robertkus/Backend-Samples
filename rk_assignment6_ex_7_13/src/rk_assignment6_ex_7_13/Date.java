//Date.java -- This file contains the Date class and include instance variables, get methods, set methods,
//    and a public method that prints dates to the console.
//CSIS 212-D01
//No external sources used.

package rk_assignment6_ex_7_13;

public class Date {
	
	// Declare instance variables
	private int month;
	private int day;
	private int year;
	
	// Create the parameter-based constructor, initializing class variable values when
	// a new Date object is created.
	public Date(int month, int day, int year) {
		
		// Use the set methods so that the parameter values can be validated before setting the variables to them.
		setMonth(month);
		setDay(day);
		setYear(year);
		
	}
	
	// Build get and set methods. Use this when referring to a class variable if the
	// variable name and the parameter name are the same. For the set methods, apply
	// logic to set a minimum/maximum value if the value does not fall in a given range.
	public int getMonth() {
		
		return month;
		
	} // end method getMonth
	
	public void setMonth(int month) {
		
		if (month < 1) {
			
			System.out.printf("%d is not a month. Setting month to 1.\n", month);
			this.month = 1;
			
		}
		else if (month > 12) {
			
			System.out.printf("%d is not a month. Setting month to 12.\n", month);
			this.month = 12;
			
		}
		else {
			
			this.month = month;
			
		}
		
	} // end method setMonth
	
	public int getDay() {
		
		return day;
		
	} // end method getDay
	
	public void setDay(int day) {
		
		if (day < 1) {
			
			System.out.printf("%d is not a day. Setting day to 1.\n", day);
			this.day = 1;
			
		}
		else if (day > 31) {
			
			System.out.printf("%d is not a day. Setting day to 31.\n", day);
			this.day = 12;
			
		}
		else {
			
			this.day = day;
			
		}
		
		this.day = day;
		
	} // end method setDay
	
	public int getYear() {
		
		return year;
		
	} // end method getYear
	
	public void setYear(int year) {
		
		if (year < 0) {
			
			System.out.printf("%d is not a year. Setting year to 0.\n", year);
			this.year = 0;
			
		}
		else {
			
			this.year = year;
			
		}
		
	} // end method setYear
	
	// The displayDate method shows the date entered in MM/DD/YYYY format
	public void displayDate() {
		
		// If the month or day is less than 10, ensure that the leading zero for each value is added
		//  in the displayed date.
		String monthZero = month < 10 ? "0" : "";
		String dayZero = day < 10 ? "0" : "";
		
		System.out.printf("%s%d/%s%d/%d\n", monthZero, month, dayZero, day, year);
		
	} // end method displayDate

} // end class Date
