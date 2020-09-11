/*  Additional 4 HW1 for CS201
* Written by Martin Baird
* Program should take a number in miles and convert to kilometers
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int input;
	float Kilo;

	cout << "Type an integer of miles to be converted to kilometers\n";
	while (!(cin >> input))
	{
		cout << "\nNot a number\n";
		cout << "Type a number:\n";
		
		cin.clear();
		cin.ignore(123, '\n');
	}

	Kilo = input * 1.609;
	cout << "\nThe number of kilometers in that number of miles is:\n";
	cout << Kilo;

}