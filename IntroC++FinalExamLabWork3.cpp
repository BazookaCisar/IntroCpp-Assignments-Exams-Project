// IntroC++FinalExamLabWork3.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

//Write a program to calculate the total sales tax on a purchase amount.
//The state sales tax is 4 percent and the county sales tax is 2 percent.
//Accept the purchase amount from the user.
//Display the output in the following format
//-------------------------------------
//| Total Purchase Amount : $00.00    |
//| State Tax  amount(4 % ) : $00.00  |
//| County Tax amount(2 % ) : $00.00  |
//| __________________________________|
//| Total : $00.00                    | 
//| __________________________________|


using namespace std;

int main()
{
	int item = 0;

	double statetax = 0;

	double countytax = 0;
	double total = 0.00;

	cout << "What was the price of your item?" << endl;
	cin >> item;


	statetax = 0.04 * item;
	countytax = 0.02 * item;
	total = (item + statetax + countytax);

	cout << "     Sales Reicpt" << endl;
	cout << "_______________________" << endl;
	cout << "Item1 = $" << item << endl;
	cout << "_______________________" << endl;
	cout << "Sub Total = $79.99" << endl;
	cout << "State Tax = $3.20" << endl;
	cout << "County Tax = $1.60" << endl;
	cout << "_______________________" << endl;
	cout << "Total = " << total << endl;

	return 0;
}
