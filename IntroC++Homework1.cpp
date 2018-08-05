// IntroC++Homework1.cpp : Defines the entry point for the console application.
//
//Broward College 
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include <iostream>

using namespace std;

int main()
{

	float num1;
	float num2;
	int num3;
	float num4;

	cout << "Enter a number: " << endl;
	cin >> num1;

	cout << "Enter a second number: " << endl;
	cin >> num2;

	cout << "Choose an operation." << endl;
	cout << "Enter 1 to add, 2 to subtract, 3 to multiply, 4 to divide: " << endl;
	cin >> num3;

	if (num3 >4 || num3 <1)
	{
		cout << "Your operation choice isn't valid!  Please run the program again." << endl;
		cout << "Press Enter to end program." << endl;
		getchar();
		return 0;
	}
	else
	{
		if (num3 == 1)
		{
			num4 = num1 + num2;
			cout << "Result is: " << num4 << endl;
		}
		else if (num3 == 2)
		{
			num4 = num1 - num2;
			cout << "Result is: " << num4 << endl;
		}
		else if (num3 == 3)
		{
			num4 = num1 * num2;
			cout << "Result is: " << num4 << endl;
		}
		else if (num3 == 4)
		{
			num4 = num1 / num2;
			cout << "Result is: " << num4 << endl;
		}

	}

	cout << "Press Enter to end program." << endl;
	getchar();

	return 0;
}
