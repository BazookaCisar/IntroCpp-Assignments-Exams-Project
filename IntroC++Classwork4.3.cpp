// IntroC++Classwork4.3.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip> /*adding spaces using setw(whichever number you want)*/

//Array Function

using namespace std;

void displayArray(string num[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << num[i] << endl;
	}
}

int main()
{
	string numbers[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

	displayArray(numbers, 7);

	return 0;
}

