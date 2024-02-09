//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//*                                                                                                       *
//* Program name    : L1-3.cpp                                                                            *
//*                                                                                                       *
//* Written by      : John Weaver                                                                         *
//*                                                                                                       *
//* Purpose         : This program will prompt the user to Insert the card from the bank, it will then    *
//*                   retrieve the user’s balance, if the balance is negative or zero the program will    *
//*                   display the prompt “No funds available”.If the user has funds the program will      *
//*                   continue to run.The program will display the display the 4% and $25 fee if certain  * 
//*                   conditions are met. Then prompt the user to input an amount of withdrawal less      *
//*                   than $500. The program will calculate the users withdrawal cost, services fees      *
//*                   (if applicable), and their balance after the withdrawal, these values will be       *
//*                   displayed to the user. The user will be given the final prompt of verification of   *
//*                   the transaction.                                                                    *
//*                                                                                                       *
//* Inputs          : 1. The user's bank balance.                                                         *
//*                   2. The user's withdrawal amount.                                                    *
//*                                                                                                       *
//* Outputs         : 1. Display the value of the user's balance.                                         *
//*                                                                                                       *
//* Calls           : No internal or external calls.                                                      *
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
//*  02/08/2024   jweaver      001   001   000   Initial release.                                         *
//*                                                                                                       *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// Display the source author and program information.
	cout << "John Weaver\t" << "L1-3\t" << "L1-3.exe" << endl;

    // Declare Variables.
    double accountBalance;
    cout << "Enter your account balance in dollars: ";
    cin >> accountBalance;

    double withdrawalAmount;
    cout << "Enter the amount you wish to withdraw in dollars: ";
    cin >> withdrawalAmount;

    const double dailyLimit = 500.0;
    const double serviceChargeThreshold = 300.0;
    const double serviceChargeRate = 0.04; // 4% charge
    const double insufficientFundsCharge = 25.0;

    // Check for withdrawal limit.
    if (withdrawalAmount > dailyLimit) {
        cout << "Error: The maximum amount that can be withdrawn per day is 500 dollars." << endl;
    } else if (withdrawalAmount > accountBalance) {
        // Check for insufficient funds without considering service charge.
        cout << "Warning: Insufficient funds in your account." << endl;
        if (accountBalance > 0) {
            // Customer can still opt for withdrawal with a service charge if the account balance is positive.
            cout << "You can opt to withdraw up to " << accountBalance << " dollars with an additional service charge of 25 dollars. Proceed? (yes/no): ";
            string response;
            cin >> response;
            if (response == "yes" || response == "Yes") {
                if (accountBalance - insufficientFundsCharge >= 0) {
                    // Apply service charge and withdraw all money.
                    accountBalance -= insufficientFundsCharge;
                    cout << "Transaction successful: " << accountBalance << " dollars have been withdrawn." << endl;
                    accountBalance = 0; // All money withdrawn.
                    cout << "Your new account balance is 0 dollars." << endl;
                } else {
                    cout << "Error: Insufficient funds to cover the service charge." << endl;
                }
            } else {
                cout << "Withdrawal cancelled." << endl;
            }
        } else {
            // Account balance is zero or negative.
            cout << "Error: Your account balance is insufficient for any withdrawal." << endl;
        }
    } else {
        // Calculate service charge if applicable.
        double serviceCharge = 0.0;
        if (withdrawalAmount > serviceChargeThreshold) {
            serviceCharge = (withdrawalAmount - serviceChargeThreshold) * serviceChargeRate;
        }

        // Check if account balance can cover the withdrawal amount plus service charge.
        if (accountBalance >= withdrawalAmount + serviceCharge) {
            accountBalance -= (withdrawalAmount + serviceCharge);
            cout << fixed << setprecision(2);
            cout << "Transaction successful: " << withdrawalAmount << " dollars have been withdrawn." << endl;
            cout << "Service charge applied: " << serviceCharge << " dollars." << endl;
            cout << "Your new account balance is " << accountBalance << " dollars." << endl;
        } else {
            cout << "Error: Insufficient funds to cover the withdrawal and the service charge." << endl;
        }
    }

	// Wait for user to press Enter before exiting the program.
	char q;
	cout << "\n\nPress Enter to exit.";
	cin.ignore(2, '\n');
	cin.get(q);

    return 0;
}
