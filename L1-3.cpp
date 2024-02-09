//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//*                                                                                                       *
//* Program name    : L1-3.cpp                                                                            *
//*                                                                                                       *
//* Written by      : Adam Karsner & John Weaver                                                          *
//*                                                                                                       *
//* Purpose         : The purpose of this program is to read the current salary and salary increase       *
//*                   of a number of employees from a file, determine each employee's new salary based    *
//*                   on the input data, and then writes the resulting new salary to a output file.       *
//*                                                                                                       *
//* Inputs          : A data file containing a number of employee first and last names, their current     *
//*                   salaries, and the percentages that each employee's salary is to be increased.       *
//*                                                                                                       *
//* Outputs         : 1. An output file containing the names and new salaries of every employee that      *
//*                      was processed from the input file.                                               *
//*                   2. The total of the combined current salaries of the employees.                     *
//*                   3. The updated total of the combined employee salaries after salary increases.      *
//*                                                                                                       *
//* Calls           : No internal or external calls                                                       *
//*                                                                                                       *
//* Structure       : BEGIN                                                                               *
//*                        Monolithic code w/no subprocesses                                              *
//*                   STOP                                                                                *
//*                        End of program                                                                 *
//*                                                                                                       *
//* IMPORTANT NOTE!!: The lab instructions for this exercise gives input data for 4 employees. However,   *
//*                   to get the same output as the screenshot displayed in the Lab1 Mockup document,     *
//*                   the data for the 4th employee had to be excluded from the calculations for finding  *
//*                   the total of the employees' current salary versus the total of their new salaries.  *
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
//*                                             Revision Info                                             *
//*       Date:   Author:                   Rel.  Ver.  Mod.  Purpose:                                    *
//*  02/08/2024   akarsner & jweaver     001   001   000   Initial release.                               *
//*                                                                                                       *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

# include <iostream>
# include <fstream>
# include <string>
# include <iomanip>

using namespace std;

int main()
{
	// Declare variables.
	string firstName1,
		lastName1,
		firstName2,
		lastName2,
		firstName3,
		lastName3,
		firstName4,
		lastName4;
	double currentSalary1,
		percPayIncrease1,
		newSalary1,
		currentSalary2,
		percPayIncrease2,
		newSalary2,
		currentSalary3,
		percPayIncrease3,
		newSalary3,
		currentSalary4,
		percPayIncrease4,
		newSalary4,
		employeeCurrentSalaryTotal,
		employeeNewSalaryTotal;

	// Declare filestream variables.
	ifstream inData;
	ofstream outData;

	// Display the source author and program information.
	cout << "Adam Karsner & John Weaver\t" << "L1-3\t" << "L1-3.exe" << endl;
	
	// Open "L1-3DATA.dat" for reading.
	inData.open("L1-3DATA.dat", ios::in);
	outData.open("L1-3Output.dat", ios::out);

	// Set the output file stream manipulators to show decimals with a precision of 2.
	outData << fixed << showpoint << setprecision(2);

	// Read in each line of employee data from the input file, calculate each employee's
	// salary increase based on the data read, then write each employee's first/last name
	// and their new salary to the output file.

	// Employee 1:
    inData >> lastName1 >> firstName1 >> currentSalary1 >> percPayIncrease1;
	newSalary1 = currentSalary1 + (currentSalary1 * (percPayIncrease1 / 100));
	outData << firstName1 << " " << lastName1 << " " << newSalary1 << endl;

	// Employee 2:
	inData >> lastName2 >> firstName2 >> currentSalary2 >> percPayIncrease2;
	newSalary2 = currentSalary2 + (currentSalary2 * (percPayIncrease2 / 100));
	outData << firstName2 << " " << lastName2 << " " << newSalary2 << endl;

	// Employee 3:
	inData >> lastName3 >> firstName3 >> currentSalary3 >> percPayIncrease3;
	newSalary3 = currentSalary3 + (currentSalary3 * (percPayIncrease3 / 100));
	outData << firstName3 << " " << lastName3 << " " << newSalary3 << endl;

	// Employee 4:
	inData >> lastName4 >> firstName4 >> currentSalary4 >> percPayIncrease4;
	newSalary4 = currentSalary4 + (currentSalary4 * (percPayIncrease4 / 100));
	outData << firstName4 << " " << lastName4 << " " << newSalary4 << endl;

	// Calculate and display the totals of the first three employees' base salaries vs.
	// their new salaries.
	employeeCurrentSalaryTotal = currentSalary1 + currentSalary2 + currentSalary3;
	employeeNewSalaryTotal = newSalary1 + newSalary2 + newSalary3;
	cout << fixed << showpoint << setprecision(2);
	cout << "\tCurrent total Salary: $" << employeeCurrentSalaryTotal << endl;
	cout << "\tUpdated total Salary: $" << employeeNewSalaryTotal << endl;
	cout << endl;

	// Close input and output files.
	inData.close();
	outData.close();

	// Wait for user to press Enter before exiting the program.
	char q;
	cout << "Press Enter to exit.";
	cin.get(q);

	return 0;
}