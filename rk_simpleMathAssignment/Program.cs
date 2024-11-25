using System;

namespace rk_simpleMathAssignment
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /* Pass the logic in a Try/Catch loop to ensure that the program does not continue if there
                are any error during execution (usually because the user fails to enter valid integers). */
            try
            {
                // Declare and initialize variables
                int firstInteger = 0;
                int secondInteger = 0;

                // Gather the first and second integers from user inputs.
                Console.Write("Enter the first integer: ");
                firstInteger = int.Parse(Console.ReadLine());

                Console.Write("Enter the second integer: ");
                secondInteger = int.Parse(Console.ReadLine());

                // If the user's entries are valid, perform the following calculation and print them on the screen.
                Console.WriteLine($"\nThe two numbers your entered are: {firstInteger} and {secondInteger}");

                Console.WriteLine($"The sum of the two numbers is {firstInteger + secondInteger}");

                Console.WriteLine($"The difference of the two numbers is {firstInteger - secondInteger}");

                Console.WriteLine($"The product of the two numbers is {firstInteger * secondInteger}");

                /* Use a switch statement to display UNDEFINED for the quotient and remainder if the second integer 
                   is zero. Otherwise, display the quotient and remainder of the two numbers.*/
                switch (secondInteger)
                {
                    case 0:
                        Console.WriteLine("The quotient of the two numbers is UNDEFINED");
                        Console.WriteLine("The remainder of the two numbers is UNDEFINED\n");
                        break;
                    default:
                        //All decimal quotients will be rounded down to the nearest integer.
                        Console.WriteLine($"The quotient of the two numbers is {firstInteger / secondInteger}");
                        Console.WriteLine($"The remainder of the two numbers is {firstInteger % secondInteger}\n");
                        break;
                }

                /* Use an if/else block to display the correct comparison message and result depending
                   on if one of the integers is greater or if both are equal. */
                if (firstInteger == secondInteger)
                {
                    Console.WriteLine($"The two numbers are equal.");
                }
                else
                {
                    int largerNumber = firstInteger > secondInteger
                        ? firstInteger
                        : secondInteger;

                    Console.WriteLine($"The larger of the two numbers is: {largerNumber}");
                }
            }
            catch (Exception ex)
            {
                // Provide clear user feedback before ending the program.
                Console.WriteLine("At least one of your entries was not a valid integer. " +
                    "Please enter in valid integers next time (positive or negative whole numbers).");
            }
        }
    }
}
