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
//* Inputs          : original item price, mark up percentage, sales tax rate                             *
//*                                                                                                       *
//* Outputs         : the original price, the price markup percentage, the selling price with markup      *
//*                   included, the sales tax rate, the calculated sales tax amount, the calculated       *
//*                   final price                                                                         *
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
//*                                                                                                       *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <string>

using namespace std;

int main()
{
    double origPrice, percMarkup, taxRate, mkupPrice, salesTax, finalPrice;

    cout << "Adam Karsner\t" << "L1-2\t" << "L1-2.exe" << endl;
    cout << "Enter the original price of the item: ";
    cin >> origPrice;
    cout << endl;
    cout << "Enter the marked up percentage: ";
    cin >> percMarkup;
    cout << endl;
    cout << "Enter the sales tax rate: ";
    cin >> taxRate;
    cout << endl;
    cout << "The original price = $" << origPrice << endl;
    cout << "The price is marked up by " << percMarkup << "%" << endl;
    mkupPrice = origPrice + (origPrice * (percMarkup / 100));
    cout << "The selling price = $" << mkupPrice << endl;
    cout << "The sales tax rate = " << taxRate << "%" << endl;
    salesTax = mkupPrice * (taxRate / 100);
    cout << "The sales tax = $" << salesTax << endl;
    finalPrice = mkupPrice + salesTax;
    cout << "The final price = $" << finalPrice << endl;

    // FIXME: For some reason the following "press any key to exit" code segment doesn't work as expected.
    //        I asked the professor for assistance, since it's required in the exercise instructions.
    /*
        char q;
        cout << "\nPress any key to Exit.";
        cin.ignore(2, '\n');
        cin.get(q);
    */
    return 0;
}