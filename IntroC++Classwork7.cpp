// IntroC++Classwork7.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main()
{
	enum Water { //Constants
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};

	int dayOfWeek = 0;

	cout << "Enter one of the numbers to get it's day in the week:" << endl;
	cout << "------------------\n";
	cout << "|       1        |\n";
	cout << "|       2        |\n";
	cout << "|       3        |\n";
	cout << "|       4        |\n";
	cout << "|       5        |\n";
	cout << "|       6        |\n";
	cout << "|       7        |\n";
	cout << "------------------\n";
	cin >> dayOfWeek;

	switch (dayOfWeek)
	{
	case 1:
		cout << "It's Sunday" << endl;
		break;
	case 2:
		cout << "It's Monday" << endl;
		break;
	case 3:
		cout << "It's Tuesday" << endl;
		break;
	case 4:
		cout << "It's Wednesday" << endl;
		break;
	case 5:
		cout << "It's Thursday" << endl;
		break;
	case 6:
		cout << "It's Friday" << endl;
		break;
	case 7:
		cout << "It's Saturday" << endl;
		break;
	}

	return 0;
}