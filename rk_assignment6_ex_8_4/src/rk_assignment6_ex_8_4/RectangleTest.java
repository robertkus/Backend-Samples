//RectangleTest.java -- This program utilizes the Rectangle class and displays its capabilities,
//    including setting and getting class values, and calculating the perimeter and area.
//CSIS 212-D01
//No external sources used.

package rk_assignment6_ex_8_4;

//Import Scanner to get and store user inputs.
import java.util.Scanner;

public class RectangleTest {
	
	// Declare and initialize global constants
	final static int errorChoice = 4;     // If there is an error with the selection, the choice will be set to this constant's value.
	
	public static void main(String[] main) { 
		
		System.out.println("Robert Kus – Assignment 6 - Exercise 8.4\n");
		
		// Declare and initialize local variable.
		Scanner userInput = new Scanner(System.in);
		int choice = 0;
		
		// Create initial Rectangle object and show its length, width, perimeter, and area using the Rectangle class methods.
		System.out.println("Creating a rectangle of 10 length and 8 width:");
		Rectangle rectangle = new Rectangle(10,8);
		rectangle.printRectangleProperties();
		
		// While the choice is 1 or 2, prompt the user to set a new value for the length or width.
		// If the choice is 3 or the value of errorChoice, 4, end the loop and the program.
		while (choice != 3 && choice != errorChoice) {
			
			// Using the getChoice method, give the user a choice between setting the width, setting the length, or exiting the program.
			// All error-checking, including the try/catch block, is handled inside the getChoice method.
			choice = getChoice(userInput);
			
			if (choice == 1) {      // Set length
				
				double length = 0;
				
				System.out.println("You selected: 1. Set Length\n");
				
				// When the user is asked to enter a new value for the length. If an invalid entry is typed,
				//  show the proper error message and ask for a new selection. Otherwise, set the rectangle
				//  length as that value, using the setLength method.
				try {
					
					System.out.print("Enter a length value between 0 and 20:");
					double lengthInput = userInput.nextDouble();
					
					if (lengthInput < 0 || lengthInput > 20) {
						
						System.out.println("The length value entered is invalid.");
						
					}
					else {
						
						System.out.println("Setting new length value.");
						length = lengthInput;
						rectangle.setLength(length);
						rectangle.printRectangleProperties();

					}
				}
				catch (Exception ex) {
					
					System.out.println("The length value entered is invalid.");
					
				}
			}
			else if (choice == 2) {                  // Set width
				
				double width = 0;
				
				System.out.println("You selected: 2. Set Width\n");
				
				// When the user is asked to enter a new value for the width. If an invalid entry is typed,
				//  show the proper error message and ask for a new selection. Otherwise, set the rectangle
				//  width as that value, using the setWidth method.
				try {
					
					System.out.print("Enter a width value between 0 and 20:");
					width = userInput.nextDouble();
					
				}
				catch (Exception ex) {
					
					System.out.println("The width value entered is invalid.");
					
				}
				
				if (width < 0 || width > 20) {
					
					System.out.println("The width value entered is invalid.");
					
				}
				else {
					
					System.out.println("Setting new width value.");
					rectangle.setWidth(width);
					rectangle.printRectangleProperties();
					
				}
				
			}
			
			else if (choice == 3) {           // Exit the program.
				
				System.out.println("You selected: 3. Exit\n");
				
			}
			
		}
		
		userInput.close();
		
	} // end method main
	
	// This method prompts the user for a selection, continually doing so while 
	//  an invalid choice is selected.
	private static int getChoice(Scanner input) {
		
		// Declare and initialize local variables.
		int choice = 0;
		
		// Use a try/catch block to catch any non-integer entries. If an invalid selection is
		//  made, set the choice to 3 and exit the program.
		try {
			
			// Show the options using the showOptions method.
			System.out.println("Please select from one of the following options:\n");
			System.out.println("1. Set Length");
			System.out.println("2. Set Width");
			System.out.println("3. Exit");
			System.out.print("Choice:");
			
			int selection = input.nextInt();
			
			if (selection < 1 || selection > 3) {
				
				System.out.println("\nThe selection is invalid. Exiting the program\n");
				choice = errorChoice;
				
			}
			else {
				
				choice = selection;
				
			}
			
		}
		catch (Exception ex) {
			
			System.out.println("\nThe selection is invalid. Exiting the program\n");
			choice = errorChoice;
			
		}
		
		return choice;
		
	} // end method getChoice

} // end class RectangleTest
