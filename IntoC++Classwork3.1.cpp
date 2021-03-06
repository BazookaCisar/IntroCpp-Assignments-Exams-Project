// IntoC++Classwork3.1.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// Write a program to calculate Ticket price in a movie theatre.
	// 1. Adult ticket = $10.00
	// 2. Student ticket = $7.00
	// 3. Kids ticket = $5.00

	double adult = 10.00;
	double student = 7.00;
	double kids = 5.00;
	int selection;
	int num;
	int ticket = 0;

	do
	{
		cout << "--------------------------------\n";
		cout << "| 1. Adult                     |\n";
		cout << "| 2. Student                   |\n";
		cout << "| 3. Kids                      |\n";
		cout << "| 0. Exit                      |\n";
		cout << "--------------------------------\n";

		cout << "Enter your selection: " << endl;
		cin >> selection;

		if (selection == 1)
		{
			cout << "How many adults?" << endl;
			cin >> num;
			cout << "Your total is " << adult * num << endl;
		}
		else
		{
			if (selection == 2)
			{
				cout << "How many students?" << endl;
				cin >> num;
				cout << "Your total is " << student * num << endl;
			}
			else if (selection == 3)
			{
				cout << "How many kids?" << endl;
				cin >> num;
				cout << "Your total is " << kids * num << endl;
			}
			else if (selection == 0)
			{
				cout << "Thanks, come again." << endl;
				break;
			}

		}
	} while (selection > 0);


	return 0;
}