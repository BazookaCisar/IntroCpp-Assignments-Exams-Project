// IntroC++FinalExamLabWork4.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

//Store the following data in a file called “ListOfNumbers.txt” and display them on the screen.
//100
//200
//300
//400
//500

using namespace std;

int main()
{
	int selection;

	cout << "--------\n";
	cout << "|  1   |\n";
	cout << "|  2   |\n";
	cout << "--------\n";

	cout << "Enter number 1 store create a file with numbers. Enter number 2 to view the file." << endl;
	cin >> selection;

	if (selection == 1)
	{
		cout << "You chose to write a message with the file." << endl;
		ofstream file = ofstream("C:\\Users\\student\\Documents\\ListOfNumbers.txt");
		file << "100" << endl;
		file << "200" << endl;
		file << "300" << endl;
		file << "400" << endl;
		file << "500" << endl;
		file.close();
	}
	if (selection == 2)
	{
		cout << "You chose to display the above message from the file." << endl;
		string line;
		ifstream file = ifstream("C:\\Users\\student\\Documents\\ListOfNumbers.txt");
		while (file.good())
		{
			getline(file, line);
			cout << line << endl;
		}
		file.close();
	}

	return 0;
}