// IntroC++MidtermLabWork.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include<iostream>
#include<fstream> 
#include<string>
#include<cmath>

using namespace std;

int main()
{
	double base = 0;
	double height = 0;
	double radius = 0;
	int x;
	int y;
	int selection;
	const double PI = 3.14159;
	int num = 0;

	do
	{
		cout << "-------------------------------------------------------\n";
		cout << "|  1. Calulate the area of a triangle.                |\n";
		cout << "|  2. Calculate an area of a circle.                  |\n";
		cout << "|  3. Compare two numbers.                            |\n";
		cout << "|  4. Display 'I am taking midterm exam!!' 5 times.   |\n";
		cout << "|  5. Write the message in a file.                    |\n";
		cout << "|  6. Display the above message from the file.        |\n";
		cout << "|  7. Exit.                                           |\n";
		cout << "-------------------------------------------------------\n";

		cout << "Enter your selection: " << endl;
		cin >> selection;

		if (selection == 1)
		{
			cout << "Enter the base of the triangle:" << endl;
			cin >> base;
			cout << "Enter the height of the triangle:" << endl;
			cin >> height;
			cout << "The area of the triangle is " << (base * height) / 2 << endl;

		}
		else
		{
			if (selection == 2)
			{
				cout << "Enter the radius:" << endl;
				cin >> radius;
				cout << "The area of the circle is " << PI * pow(radius, 2) << endl;
			}
			else if (selection == 3)
			{
				cout << "Enter the first number:" << endl;
				cin >> x;
				cout << "Enter the second number:" << endl;
				cin >> y;

				if (x == y)
					cout << x << " is equal to " << y << endl;
				if (x != y)
					cout << x << " is not equal to " << y << endl;
				if (x > y)
					cout << x << " is greater than " << y << endl;
				if (x < y)
					cout << x << " is less than " << y << endl;
				if (x >= y)
					cout << x << " is greater than or equal to " << y << endl;
				if (x <= y)
					cout << x << " is less than or equal to " << y << endl;
			}
			else if (selection == 4)
			{
				do
				{
					cout << "I am taking midterm exam!!" << endl;
					num = num + 1;
				} while (num < 5);
			}
			else if (selection == 5)
			{
				cout << "You chose to write a message with the file." << endl;
				ofstream file = ofstream("C:\\Users\\student\\Documents\\Message2.txt");

				file << "I am taking midterm exam!!" << endl;
				file.close();
			}
			else if (selection == 6)
			{
				cout << "You chose to display the above message from the file." << endl;
				string line;
				ifstream file = ifstream("C:\\Users\\student\\Documents\\Message2.txt");

				while (file.good())
				{
					getline(file, line);
					cout << line << endl;
				}
				file.close();
			}
			else if (selection == 7)
			{
				cout << "Thanks, come again." << endl;
				break;
			}

		}
	} while (selection > 0);

	return 0;
}



