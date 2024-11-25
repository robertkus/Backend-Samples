using System;

namespace rk_thePowerOfNumbersAssignment
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Declare and initialize main constants and variables

            const int length = 5;

            long[] baseNumbers = new long[length];
            long[] exponents = new long[length];
            long[] results = new long[length];
            
            Random numGenerator = new Random();

            // Populate the baseNumbers and exponents arrays with random integers using a for lool. 

            for (int index = 0; index < baseNumbers.GetUpperBound(0); index++)    // The GetUpperBound method will return the same value when applied to any of the three arrays.
            {
                baseNumbers[index] = numGenerator.Next(1, 51);    // Inserts an integer between 1 and 50.
                exponents[index] = numGenerator.Next(1, 11);      // Inserts an integer between 1 and 10.
            }

            for (int index = 0; index < baseNumbers.GetUpperBound(0); index++)
            {
                results[index] = Power(baseNumbers[index], exponents[index]);
            }

            PrintArray(baseNumbers, exponents, results);

            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }

        /* The Power method takes a base number and exponent, returning the base number multiplied by itself exponential times
           using recursive logic (ex: If the baseNumber is 2 and the exponent is 3, then the return value will be 8). */
        private static long Power(long baseNumber, long exponent)
        {
            if (exponent == 1)
            {
                return baseNumber;
            }

            // Use recursion (have the method call itself within the method body) to multiply the base number itself as many times needed as possible.

            long returnValue = baseNumber * Power(baseNumber, exponent - 1);

            return returnValue;
        }

        /* The PrintArray method displays the base numbers, the exponents, and the calculated results
           as a neatly organized table. */
        private static void PrintArray(long[] baseNumbers, long[] exponents, long[] results)
        {
            Console.WriteLine("Base\t\tExponent\tResult");
            
            // Use a for loop to print the base numbers, exponents, and results stored in the arrays.

            for (int index = 0; index < baseNumbers.GetUpperBound(0); index ++)
            {
                Console.WriteLine($"{baseNumbers[index]}\t\t{exponents[index]}\t\t{results[index]}");
            }
        }
    }
}
