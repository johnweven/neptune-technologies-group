//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//*                                                                                                       *
//* Program name    : L1-1.cpp                                                                            *
//*                                                                                                       *
//* Written by      : Adam Karsner                                                                        *
//*                                                                                                       *
//* Purpose         : This program gathers some integral data from the user and does some basic variable  *
//*                   arithmetic from those inputs.  It also gathers employee information from the user   *
//*                   and then calculates and displays the employee's salary details.                     *
//*                                                                                                       *
//* Inputs          : 1. Two integers separated by a space                                                *
//*                   2. A last name.                                                                     *
//*                   3. A decimal number between 0 and 100                                               *
//*                                                                                                       *
//* Outputs         : 1. The values of num1 and num2                                                      *
//*                   2. The value of newNum after doing some variable arithmetic                         *
//*                   3. The new value of newNum after performing some additional variable arithmetic     *
//*                   4. Employee's salary details                                                        *
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
//*                   Help from professor John Urrutia of SCC, CIS-022 Spring 2024                        *
//*                                                                                                       *
//*-------------------------------------------------------------------------------------------------------*
//*                                                                                                       *
//* Change Log:                                                                                           *
//*                                   Revision Info                                                       *
//*       Date:   Author:      Rel.  Ver.  Mod.  Purpose:                                                 *
//*  02/04/2024   akarsner     001   001   000   First release.                                           *
//*  02/06/2024   akarsner     001   002   000   Add flowerbox, fix code styling.                         *
//*  02/08/2024   akarsner     001   003   000   Add more commentary, some style fixups.                  *
//*                                                                                                       *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare constants.
    const int SECRET = 13;
    const double RATE = 12.50;

    // Declare variables.
    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    // Display the source author and program information.
    cout << "Adam Karsner\t" << "L1-1\t" << "L1-1.exe" << endl;

    // Prompt the user to enter two integers separated by a space and then assign
    // those integers to variables num1 and num2 respectively.
    cout << "Type two integers separated by a space" << endl;
    cout << "and then press the enter key: ";
    cin >> num1 >> num2;
    cout << endl;

    // Display the values of num1 and num2.
    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl;

    // Calculate the value of newNum by doing some basic arithmetic with num1 and num2 and
    // display the value.
    newNum = (num1 * 2) + num2;
    cout << "The value of newNum = " << newNum << endl;

    // Calculate a new value of newNum by adding the value of constant SECRET to it, then
    // display the new value of newNum.
    newNum += SECRET;
    cout << "The new value of newNum = " << newNum << endl;
    cout << endl;

    // Prompt the user for a last name.
    cout << "Enter last name: ";
    cin >> name;
    cout << endl;
 
    // Prompt the user to enter a decimal number between 1 and 100 and let that be the number of
    // hours worked.
    cout << "Enter a decimal number between 0 and 100: ";
    cin >> hoursWorked;
    cout << endl;

    // Calculate the employee's wages by multiplying the number of hours worked by the constant
    // payrate, RATE.
    wages = RATE * hoursWorked;

    // Now display the breakdown of the employee's salary information.
    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;

    // Wait for user to press Enter before exiting the program.
    char q;
    cout << "\n\nPress Enter to exit.";
    cin.ignore(2, '\n');
    cin.get(q);

    return 0;
}