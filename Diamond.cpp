/* HW1 for CS201
* Written by Martin Baird
* Program should take in a number and print a diamond
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x, y, i = 0, j = 0;

	cout << "Type a positive integer for width:\n";
	cin >> x;
	cout << "You typed:";
	cout << x;

	while (x<1)
	{
		cout << "\nError: Not a positive integer\nTry again\n";
		cout << "Type a positive integer for width:\n";
		cin >> x;
		cout << "You typed:";
		cout << x;
	}

	while (j < y)
	{
		while (i < x)
		{
			cout << "*";
			i++;
		}
		cout << "\n";

		j++;
		i = 0;
	}





	cout << "\nPress ENTER to quit ";
	while (cin.get() != '\n');
	
}