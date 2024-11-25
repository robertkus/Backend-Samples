using System;

namespace rk_salesCalculatorAssignment
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Obtain the name of the salesPerson from the user's input.

            Console.Write("Enter the name of the salesperson: ");
            string salesPerson = Console.ReadLine();

            // Prompt the user to reenter the name if no entry was made until a valid name is entered.

            while (salesPerson == null || salesPerson == "")
            {
                Console.WriteLine("Invalid entry.");
                Console.Write("Enter the name of the Salesperson: ");
                salesPerson = Console.ReadLine();
            }

            // Declare and intialize global variables and constants.

            int intItem = 0;
            double dblTotalSales = 0;

            const double item1Value = 239.99;
            const double item2Value = 129.75;
            const double item3Value = 99.95;
            const double item4Value = 350.89;

            // Use the user's item selection as the loop control variable. The loop will end if the user enters -1.

            while (intItem != -1)
            {
                // Use a try/catch loop to catch any invalid integer entries (Any non-integer entries such as decimals, strings, etc.).

                try
                {
                    // Display the list of available items and their price.

                    Console.WriteLine("\nList and value of items avaliable for sale: \n");
                    Console.WriteLine("Item   Value");
                    Console.WriteLine($"1      {item1Value}");
                    Console.WriteLine($"2      {item2Value}");
                    Console.WriteLine($"3      {item3Value}");
                    Console.WriteLine($"4      {item4Value}\n");

                    // Get the item selection from the user (or -1).

                    Console.Write("Enter the number of an item (1, 2, 3, or 4) that was sold (or -1 to end the program.): ");
                    string selection = Console.ReadLine();
                    intItem = int.Parse(selection);

                    // Check if the user's entry is valid. If not, reprompt them to enter a valid number. 

                    bool validItem = intItem == -1 || (intItem >= 1 && intItem <= 4);

                    while (!validItem)
                    {
                        Console.WriteLine("Invalid entry.");
                        Console.Write("Enter the number of an existing item (1, 2, 3, or 4) that was sold (or -1 to end the program.): ");
                        intItem = int.Parse(Console.ReadLine());
                        validItem = intItem == -1 || (intItem >= 1 && intItem <= 4);
                    }

                    if (intItem != -1)
                    {
                        // Get the quantity from the user (must be a whole number 0 or more).

                        Console.Write("Enter in the quantity sold for that item (Any whole number 0 or greater): ");
                        int intQuantity = int.Parse(Console.ReadLine());

                        // If a negative quantity was entered, prompt the user to enter a valid quantity.

                        while (intQuantity < 0)
                        {
                            Console.WriteLine("Invalid entry.");
                            Console.Write("Enter in the quantity sold for that item (Any whole number 0 or greater): ");
                            intQuantity = int.Parse(Console.ReadLine());
                        }

                        double dblItemSales = 0;

                        // Use a switch statement to calculate the value of the items sold based on the the item number entered.

                        switch (intItem)
                        {
                            case 1:
                                dblItemSales = intQuantity * item1Value;
                                break;
                            case 2:
                                dblItemSales = intQuantity * item2Value;
                                break;
                            case 3:
                                dblItemSales = intQuantity * item3Value;
                                break;
                            case 4:
                                dblItemSales = intQuantity * item4Value;
                                break;
                        }

                        // Display the name of the sales person, the number of items sold, item #, and the value of items sold.

                        string dblItemSalesString = dblItemSales.ToString("C");

                        Console.WriteLine($"{salesPerson} has sold {intQuantity} of item #{intItem} at {dblItemSalesString}.");

                        // Add the value of items sold for the current item to the saleperson's total sales.

                        dblTotalSales += dblItemSales;
                    }
                }
                catch
                {
                    /* If there are any non-integer entries entered by the user for the item number or quantity sold,
                        an display the proper error message. 
                       Users will be reprompted to enter an item number and quantity sold. */

                    Console.WriteLine("\nA non-integer type value was entered for the item number or quantity sold. " +
                        "Please enter in whole numbers when prompted to enter the item number and quantity sold.");
                }
            }

            // Display the name of the salesperson and the value of their total sales.

            string dblTotalSalesString = dblTotalSales.ToString("C");

            Console.WriteLine($"\nSalesperson {salesPerson} sold a total of {dblTotalSalesString}");

            Console.WriteLine("\nPress any key to continue");
            Console.ReadKey();
        }
    }
}
