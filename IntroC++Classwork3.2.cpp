// IntroC++Classwork3.2.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// Write a program that uses a loop to display the following pattern.

	cout << "Pattern A:" << endl;

	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "+";
		}
		{
			cout << "\n";
		}
	}

	cout << "Pattern B:" << endl;

	for (int i = 6; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "+";
		}
		{
			cout << "\n";
		}
	}

	return 0;
}

