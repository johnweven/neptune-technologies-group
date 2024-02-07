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
//* Inputs          : two integers, the last name of an employee, a decimal number between 0 and 70       *
//*                                                                                                       *
//* Outputs         : student's name, the lab number and exercise, the name of the exercise's             *
//*                   executable file, the values of num1 and num2, display the value of newNum, the new  *
//*                   value of newNum after performing some additional variable arithmetic, display       *
//*                   employee's salary details                                                           *
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
//*                                                                                                       *
//*  To-Do:                                                                                               *
//*        1.  Add in data tests as described in step "o" from the L1-1 coding exercise within the        *
//*            "CIS 022 - Lab1 Mockups.docx" document.                                                    *
//*                                                                                                       *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int SECRET = 13;
    const double RATE = 12.50;

    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    cout << "Adam Karsner\t" << "L1-1\t" << "L1-1.exe" << endl;
    cout << "Type two integers separated by a space" << endl;
    cout << "and then press the enter key: ";
    cin >> num1 >> num2;
    cout << endl;
    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl;
    newNum = (num1 * 2) + num2;
    cout << "The value of newNum = " << newNum << endl;
    newNum = newNum + SECRET;
    cout << "The new value of newNum = " << newNum << endl << endl;
    cout << "Enter last name: ";
    cin >> name;
    cout << endl;
    cout << "Enter a decimal number between 0 and 70: ";
    cin >> hoursWorked;
    cout << endl;
    wages = RATE * hoursWorked;
    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;

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