// IntroC++Classwork1.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	double length;
	double width;
	double area;

	cout << "What is the length?" << endl;
	cin >> length;
	cout << "What is the width?" << endl;
	cin >> width;

	area = length * width;

	cout << "--------------------------------\n";
	cout << "|                              |\n";
	cout << "|                              |\n";
	cout << "|                              |\n";
	cout << "|                              |\n";
	cout << "-------------------------------\n";
	cout << "The area is " << area << endl;
	return 0;
}