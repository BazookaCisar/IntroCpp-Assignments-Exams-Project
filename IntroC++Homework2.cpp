// IntroC++Homework2.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int Farenheight = 1;
	int Celcius = 2;
	int degree;
	int convert;
	double conversionc;
	double conversionf;
	cout << "Choose either option 1 or 2 to convert Celcius to Farenheight or Farenheight to Celcius" << endl;
	cout << "--------------------------------\n";
	cout << "|  1. Celcius to Farenheight   |\n";
	cout << "|  2. Farenheight to Celcius   |\n";
	cout << "--------------------------------\n";
	cout << "Choose option 1 or 2." << endl;
	cin >> convert;
	cout << "Choose a degree." << endl;
	cin >> degree;
	conversionc = degree * 1.8 + 32;
	conversionf = (degree - 32) / 1.8;
	if (convert == 1)
	{
		cout << degree << " degree('s) Celcius in Farenheight is " << conversionc << " degrees." << endl;
	}
	else
	{
		if (convert == 2)
		{
			cout << degree << " degree('s) Farenheight in Celcius is " << conversionf << " degrees." << endl;
		}
	}
	return 0;
}