//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//*                                                                                                       *
//* Program name    : L1-2.cpp                                                                            *
//*                                                                                                       *
//* Written by      : Adam Karsner                                                                        *
//*                                                                                                       *
//* Purpose         : This program is used to calculate the final cost of an item based off of the        *
//*                   entered markup percentage and sales tax rate.  This program also displays the full  *
//*                   breakdown of all factors used to calculate the final cost.                          *
//*                                                                                                       *
//* Inputs          : 1. Original price of an item                                                        *
//*                   2. Percentage of desired price markup                                               *
//*                   3. The sales tax rate                                                               *
//*                                                                                                       *
//* Outputs         : 1. The original price                                                               *
//*                   2. The price markup percentage                                                      *
//*                   3. The selling price with markup included                                           *
//*                   4. The sales tax rate                                                               *
//*                   5. The calculated sales tax amount, the calculated                                  *
//*                   6. The calculated final price                                                       *
//*                                                                                                       *
//* Calls           : No internal or external calls                                                       *
//*                                                                                                       *
//* Structure       : BEGIN                                                                               *
//*                        Monolithic code w/no subprocesses                                              *
//*                   STOP                                                                                *
//*                        End of program                                                                 *
//*                                                                                                       *
//*-------------------------------------------------------------------------------------------------------*
//*                                                                                                       *
//* Collaboration   : Collaboration with the following lab group members:                                 *
//*                          Anele Ncongo                                                                 *
//*                          Elijah Topete                                                                *
//*                          John Weaver                                                                  *
//*                          Sebastian Tiberos Cruz                                                       *
//*                                                                                                       *
//*-------------------------------------------------------------------------------------------------------*
//*                                                                                                       *
//* Change Log:                                                                                           *
//*                                   Revision Info                                                       *
//*       Date:   Author:      Rel.  Ver.  Mod.  Purpose:                                                 *
//*  02/06/2024   akarsner     001   001   000   Initial release.                                         *
//*  02/08/2024   akarsner     001   002   000   Add more commentary, some styling, fix program           *
//*                                              exit prompt                                              *
//*                                                                                                       *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>

using namespace std;

int main()
{
    // Declare variables.
    double origPrice,
        percMarkup,
        taxRate,
        mkupPrice,
        salesTax,
        finalPrice;
    
    // Display the source author and program information.
    cout << "Adam Karsner\t" << "L1-2\t" << "L1-2.exe" << endl;

    // Prompt the user to enter the original price of an item.
    cout << "Enter the original price of the item: ";
    cin >> origPrice;
    cout << endl;

    // Prompt the user to enter the desired percentage of item markup.
    cout << "Enter the marked up percentage: ";
    cin >> percMarkup;
    cout << endl;

    // Primpt the user to enter the sales tax rate.
    cout << "Enter the sales tax rate: ";
    cin >> taxRate;
    cout << endl;

    // Display the original price of the item and the percentage that the price of the item will
    // be marked up.
    cout << "The original price = $" << origPrice << endl;
    cout << "The price is marked up by " << percMarkup << "%" << endl;

    // Calculate the selling price of the item after the cost of markup has been added to the original
    // item price.
    mkupPrice = origPrice + (origPrice * (percMarkup / 100));

    // Display the selling price with markup added to the original price.
    cout << "The selling price = $" << mkupPrice << endl;

    // Display the sales tax rate.
    cout << "The sales tax rate = " << taxRate << "%" << endl;
    
    // Calculate the cost of sales tax from the selling price.
    salesTax = mkupPrice * (taxRate / 100);

    // Display the amount of sales tax that will be added to the selling price.
    cout << "The sales tax = $" << salesTax << endl;

    // Calculate the final price of the item with price markup and sales tax added.
    finalPrice = mkupPrice + salesTax;

    // Display the final price.
    cout << "The final price = $" << finalPrice << endl;

    // Wait for user to press Enter before exiting the program.
    char q;
    cout << "\n\nPress Enter to exit.";
    cin.ignore(2, '\n');
    cin.get(q);

    return 0;
}