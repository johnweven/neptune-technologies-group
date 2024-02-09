//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//*                                                                                                       *
//* Program name    : L1-4.cpp                                                                            *
//*                                                                                                       *
//* Written by      : Adam Karsner                                                                        *
//*                                                                                                       *
//* Purpose         : The purpose of this program is to determine how many trees of a given radius        *
//*                   can be can be planted in a yard with a specified length in feet, when there is      *
//*                   also a certain amount of space between each fully grown planted tree.               *
//*                   The program also determines the amount of space occupied by each fully grown        * 
//*                   planted tree in feet.                                                               *
//*                                                                                                       *
//* Inputs          : 1. Length of the yard in feet                                                       *
//*                   2. The radius of the fully grown tree in inches.                                    *
//*                   3. The required amount of space between planted fully grown trees in feet.          *
//*                                                                                                       *
//* Outputs         : 1. The number of trees that can be planted in the yard.                             *
//*                   2. The total space occupied by the fully grown trees in feet (rounded to 2 decimal  *
//*                      places.)                                                                         *
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
//*  02/08/2024   akarsner     001   001   000   Initial release.                                         *
//*  02/08/2024   akarsner     001   002   000   Some minor styling changes                               *
//*                                                                                                       *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Declare constants.
	const double PI = 3.141592653589793238462643383279502884197;

	// Declare variables.
	double yardLength,
		treeRadiusInInches,
		treeRadiusInFeet,
		treeSpacing,
		treeSpaceWidth,
		treeArea,
		totalAreaOfTrees;
	int numPlantableTrees;

	// Display the source author and program information.
	cout << "Adam Karsner\t" << "L1-4\t" << "L1-4.exe" << endl;

	// Prompt the user to enter the length of the yard in feet.
	cout << "Enter the length of the yard in feet: ";
	cin >> yardLength;
	cout << endl;

	// Prompt the user to enter the radius of the fully grown tree in inches.
	cout << "Enter the radius in inches of the fully grown tree: ";
	cin >> treeRadiusInInches;
	cout << endl;

	// Prompt the user to enter the desired distance in feet between fully grown trees.
	cout << "Enter the distance in feet between fully grown trees: ";
	cin >> treeSpacing;
	cout << endl << endl;

	// Convert the entered radius of the fully grown tree from inches into feet.
	treeRadiusInFeet = treeRadiusInInches / 12;

	// Calculate the amount of linear space occupied by each fully planted tree with spacing included.
	treeSpaceWidth = (2 * treeRadiusInFeet) + treeSpacing;

	// Calculate the total area that a fully grown tree would occupy in feet.
	treeArea = PI * (treeRadiusInFeet * treeRadiusInFeet);

	// Calculate the number of trees that can be planted in the yard.
	numPlantableTrees = (yardLength / treeSpaceWidth);

	// Display the total number of plantable trees.
	cout << "The number of trees that can be planted: " << setprecision(1) << numPlantableTrees;

	// Calculate the total area of space occupied by all planted fully grown trees in feet.
	totalAreaOfTrees = treeArea * numPlantableTrees;

	//Display the total area of space occupied by planted fully grown trees.
	cout << "\nTotal area occupied by the trees: " << setprecision(3) << showpoint << totalAreaOfTrees << endl;

	// Wait for user to press Enter before exiting the program.
	char q;
	cout << "\n\nPress Enter to exit.";
	cin.ignore(2, '\n');
	cin.get(q);

	return 0;
}