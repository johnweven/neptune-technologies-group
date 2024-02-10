//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//*                                                                                                       *
//* Program name    : L1-3.cpp                                                                            *
//*                                                                                                       *
//* Written by      : Adam Karsner & John Weaver                                                          *
//*                                                                                                       *
//* Purpose         : The purpose of this program is to read the current salary and salary increase       *
//*                   percentage for a number of employees from a file, determine each employee's new     *
//*                   salary based on the input data, and then writes the resulting new salary to an      *
//*                   output file.  The program also informs the user of the combined total of the        *
//*                   employees' current salaries, as well as the combined totals of their new            *
//*                   salaries.                                                                           *
//*                                                                                                       *
//* Inputs          : A data file "L1-3DATA.dat" containing a number of employees' first and last         *
//*                   names, their current salaries, and the percentages that each employee's salary      *
//*                   is to be increased.                                                                 *
//*                                                                                                       *
//* Outputs         : 1. An output file "L1-3Output.dat" containing the first and last names, and the     *
//*                      new salary of every employee that was processed from the input file.             *
//*                   2. The total of the combined current salaries of the processed employees.           *
//*                   3. The updated total of the combined updated salaries for every processed           *
//*                      employee after salary increases have been calculated and applied.                *
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
		lastName3;

	double currentSalary1,
		percPayIncrease1,
		newSalary1,
		currentSalary2,
		percPayIncrease2,
		newSalary2,
		currentSalary3,
		percPayIncrease3,
		newSalary3,
		employeeCurrentSalaryTotal,
		employeeNewSalaryTotal;

	// Declare filestream variables.
	ifstream inData;
	ofstream outData;

	// Display the source author and program information.
	cout << "Adam Karsner & John Weaver\t" << "L1-3\t" << "L1-3.exe" << endl;
	
	// Open "L1-3DATA.dat" for input, and "L1-3Output.dat" for output.
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