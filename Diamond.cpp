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
	int width, length, blank, i = 0, j = 0;

	cout << "Type a positive integer for width:\n";
	cin >> width;
	cout << "You typed:";
	cout << width;

	while (width<1)
	{
		cout << "\nError: Not a positive integer\nTry again\n";
		cout << "Type a positive integer for width:\n";
		cin >> width;
		cout << "You typed:";
		cout << width;
	}

	cout << "\n";

	length = width;
	blank = width - 1;


	while (j < length)
	{
		while (i < blank)
		{
			cout << " ";
			i++;
		}
		while (i < width)
		{
			cout << "*";
			i++;
		}
		
		if (i = width)
		{	
			
			while (i > blank+1)
			{
				cout << "*";
				i--;
			}
			
			while (i < blank-i)
			{
				cout << " ";
				i++;
			}
			
		

			blank--;
		}
		

		cout << "\n";
		j++;
		i = 0;
	}

	j = 1;

	while (j < length)
	{
		while (i < blank+2)
		{
			cout << " ";
			i++;
		}
		while (i < width-1)
		{
			cout << "*";
			i++;
		}

		if (i = width)
		{

			while (i > blank+2)
			{
				cout << "*";
				i--;
			}

			while (i < blank - 1)
			{
				cout << " ";
				i++;
			}



			blank++;
		}
		

		cout << "\n";
		j++;
		i = 0;
	}




	cout << "\nPress ENTER to quit ";
	while (cin.get() != '\n');
	
}