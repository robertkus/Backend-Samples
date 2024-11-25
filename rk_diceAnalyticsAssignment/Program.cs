using System;

namespace rk_diceAnalyticsAssignment
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Declare and initialize global integer arrays and variables.

            int[] rollCounts = new int[11];         // There are 11 possible sums for each roll.
            Random randGenerator = new Random();

            // Simulate a person rolling a pair of dice 36,000 times and group those results by their sum (2 through 12).

            for (int roll = 0; roll < 36000; roll++)
            {
                // Generate two die between 1 and 6 (7 is the max limit and will never be selected). Then sum up the variables.

                int die1 = randGenerator.Next(1, 7);
                int die2 = randGenerator.Next(1, 7);
                int rollCount = die1 + die2;

                /* Use a for loop to determine which position the sum of the two die should be applied to.
                   Increase the count at that position by 1.
                   Note: The index value retrieve by the GetUpperBound() method should be 10. */

                for (int rollIndex = 0; rollIndex <= rollCounts.GetUpperBound(0); rollIndex++)
                {
                    /* The first possible sum of the two rolls is two, and one higher every other roll.
                       Thus, at index 0, the first sum is 0 + 2, or 2. */

                    if (rollCount == rollIndex + 2)
                    {
                        rollCounts[rollIndex]++;
                    }
                }
            }

            // Display the results of the rolls, based on the sum of each roll, using a for loop.

            Console.WriteLine("Roll\t\tCount");

            for (int index = 0; index <= rollCounts.GetUpperBound(0);  index++) 
            {
                int rollSum = index + 2;
                int rollCount = rollCounts[index];
                Console.WriteLine($"{rollSum}\t\t{rollCount}");
            }

            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }
    }
}
