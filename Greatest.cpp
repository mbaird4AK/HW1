/*  Additional HW1 for CS201
* Written by Martin Baird
* Program should take in many numbers and keep the greatest
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int input;
	int greatest = -2147483647;

	cout << "Type some integers:\nType '0' to end\n";
	while (!(cin >> input) || (input != 0))
	{
		if (input==2147483647)
		{
			greatest = input;
			cout << "That's the BIGGEST!\n";
			break;
		}
		cout << "\nNot big enough\nTry again\nor type '0' to end\n";
		cout << "Type a bigger number:\n";
		if (input>greatest)
		{
			greatest = input;
		}
		
		cin.clear();
		cin.ignore(123, '\n');
	}
	cout << "\nThe greatest number you typed was:\n";
	cout << greatest;

}