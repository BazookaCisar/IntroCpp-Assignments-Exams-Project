// IntroC++FinalExamLabWork2.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

//Write a C++ program to accept  the number of miles that the cars A and B can travel on a full tank.
//Store the total gallons that the cars can hold in an array and calculate the number of miles per gallon the cars get.
//Display the result on the screen.
//Miles per Gallon = Total number of miles Travelled / Gallons of gas used.

using namespace std;

int main()
{
	double miles1;
	double miles2;
	double average1;
	double average2;

	int gallons[2] = { 14, 10 };

	cout << "Enter how many miles car A can travel on a full tank of gas.";
	cin >> miles1;
	average1 = miles1 / gallons[0];
	cout << "The car's MPG is: " << average1 << endl;
	system("pause");
	cout << "Enter how many miles car B can travel on a full tank of gas.";
	cin >> miles2;
	average2 = miles2 / gallons[1];
	cout << "The car's MPG is: " << average2 << endl;
	system("pause");

	return 0;
}
