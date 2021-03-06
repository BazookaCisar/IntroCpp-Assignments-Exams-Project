// IntroC++Classwork5.2.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	int highest = 0;
	double num;
	double total;
	const int studentCount = 4;
	const int subjectCount = 3;
	double average;
	double grades[studentCount][subjectCount] =
	{
		{ 78, 85, 81 },
	{ 87, 85, 91 },
	{ 90, 95, 91 },
	{ 82, 80, 71 }
	};

	//Display each student score
	for (int i = 0; i <= subjectCount; i++)
	{
		cout << "Student " << i + 1 << " Score" << endl;

		for (int j = 0; j < subjectCount; j++)
		{
			cout << setw(10) << "Subject " << j + 1 << ": " << grades[i][j];
			num = grades[i][j];
			total = total + num;
		}


		cout << endl;
		cout << "The total is " << total << endl;
		average = total / 3;
		cout << "The average is " << average << endl;
		if (average > highest)
			highest = average;

		total = 0;
		cout << endl;
	}

	cout << "The highest average score is " << highest << endl;

	return 0;
}

