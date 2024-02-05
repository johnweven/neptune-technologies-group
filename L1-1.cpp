/* TODO: 1. add flowerbox
         2. add tests
         3. fix press-key-to-exit to work properly
         4. make code style a little prettier
*/

#include <iostream>
#include <string>

using namespace std;

int main ()
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
cout << "Pay Rate: $ " << RATE << endl;
cout << "Hours Worked: " << hoursWorked << endl;
cout << "Salary: " << wages << endl;

char q;
cout << "\nPress any key to continue ...";
cin.ignore(2,'\n');
cin.get(q);
return 0;
}