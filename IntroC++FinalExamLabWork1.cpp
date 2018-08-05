// IntroC++FinalExamLabWork1.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar


#include "stdafx.h"
#include<iostream>

using namespace std;

//Write a C++ program that asks for length and width for two rectangles.
//The program should tell the user which rectangle has the greater area or if the areas are the same ?

int main()
{
	double length1;
	double width1;
	double length2;
	double width2;
	double area1;
	double area2;

	cout << "Please enter the length and width to find the area of two rectangles." << endl;

	cout << "Enter the length of the first rectangle: ";
	cin >> length1;
	cout << "Enter the width of the first rectangle: ";
	cin >> width1;

	area1 = length1 * width1;

	cout << "The area of the first rectangle is " << area1 << endl;

	cout << "Enter the length of the second rectangle: ";
	cin >> length2;
	cout << "Enter the width of the second rectangle: ";
	cin >> width2;

	area2 = length2 * width2;

	cout << "The area of the second rectangle is " << area2 << endl;


	if (area1 == area2)
		cout << "The area of the rectangles is the same." << endl;

	if (area1 > area2)
		cout << "The area for the first rectangle is greater than the area of the second rectangle." << endl;

	if (area1 < area2)
		cout << "The area for the second rectangle is greater than the area for the first rectangle." << endl;

	return 0;
}