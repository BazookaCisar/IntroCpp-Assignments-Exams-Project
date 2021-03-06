// IntroC++Classwork4.2.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip> /*adding spaces using setw(whichever number you want)*/

using namespace std;

int main()
{
	string states[7][2] = { { "Florida", "FL" },
	{ "Georgia", "GA" },
	{ "New York", "NY" },
	{ "California", "CA" },
	{ "Alabama", "AL" },
	{ "New Jersey", "NJ" },
	{ "North Carolina", "NC" } };

	cout << "States" << setw(27) << "State Code" << endl;
	cout << "------" << setw(27) << "----------" << endl;


	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				cout << states[i][j] << setw(25) << endl;
			}
			else
			{
				cout << states[i][j] << endl;
			}
		}
	}

	return 0;
}
