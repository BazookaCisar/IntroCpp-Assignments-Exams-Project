// IntroC++Classwork4.1.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>

//1. store days of the week in an array and display them

using namespace std;

int main()
{
	string week[7] = { "Sunday" , "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };


	for (int i = 0; i < 7; i++)
	{
		cout << week[i] << " ";
		cout << endl;
	}


	return 0;
}