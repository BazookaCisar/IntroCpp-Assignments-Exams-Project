// IntroC++Classwork5.1.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int numbers[3][5] = {
		{ 12, 24, 32, 21, 42 },
	{ 14, 67, 87, 65, 93 },
	{ 19, 1, 24, 12, 8 }
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 4; j >= 0; j--)
		{
			cout << numbers[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}