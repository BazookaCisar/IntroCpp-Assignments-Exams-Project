// IntroC++Project.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

//Project Requirement: Code Generator
//
//You are going to create an application using C++ to generate code samples.
//Your application should provide a menu item to display various options until user selects "Exit/Quit" option.
//Your application should generate a program which makes a decision using If ..else ..statement.
//Your application should generate a program which makes a decision using Switch statement.
//Your application should generate a program which creates a file with a message.
//Your application should generate a program which reads contents from a file.
//Your application should generate a program which stores user eneterd numbers and stores in an array and displays back in the reverse order.
//Your application should have an option to dispaly the contents of the genearted programs.


#include "stdafx.h"
#include<iostream>
#include<fstream> 
#include<string>
#include<cmath>
#include<thread>
#include<chrono>

using namespace std;

int main()
{
	int x;
	int y;
	int selection;
	int num = 0;
	int numbers[5];

	do
	{
		cout << "-------------------------------------------------------\n";
		cout << "|  1. Enter a number between 1-6. Switch statements.  |\n";
		cout << "|  2. Reverse order application.                      |\n";
		cout << "|  3. Compare two numbers using if/else statements.   |\n";
		cout << "|  4. Write the message in a file.                    |\n";
		cout << "|  5. Display the above message from the file.        |\n";
		cout << "|  6. Exit.                                           |\n";
		cout << "-------------------------------------------------------\n";

		cout << "Enter your selection: " << endl;
		cin >> selection;

		if (selection == 1)
		{
			cout << "You chose to write a message with the file." << endl;
			ofstream file = ofstream("C:\\Users\\jacis\\Documents\\file1.txt");

			file << "#include stdafx.h" << endl;
			file << "#include<iostream>" << endl;
			file << "#include<fstream>" << endl;
			file << "#include<string>" << endl;
			file << "#include<cmath>" << endl;
			file << "#include<thread>" << endl;
			file << "#include<chrono>" << endl;
			file << "" << endl;
			file << "using namespace std;" << endl;
			file << "" << endl;
			file << "int main()" << endl;
			file << "{" << endl;
			file << "cout << 'Enter a number between 1-5. Enter 6 to view the contents of the generated program.' << endl;" << endl;
			file << "cin >> num;" << endl;
			file << "" << endl;
			file << "if (num == 1)" << endl;
			file << "{" << endl;
			file << "cout << You have entered number 1." << endl;
			file << "}" << endl;
			file << "if (num == 2)" << endl;
			file << "{" << endl;
			file << "cout << You have entered number 2." << endl;
			file << "}" << endl;
			file << "if (num == 3)" << endl;
			file << "{" << endl;
			file << "cout << You have entered number 3." << endl;
			file << "}" << endl;
			file << "if (num == 4)" << endl;
			file << "{" << endl;
			file << "cout << You have entered number 4." << endl;
			file << "}" << endl;
			file << "if (num == 5)" << endl;
			file << "{" << endl;
			file << "cout << You have entered number 5." << endl;
			file << "}" << endl;
			file << "if (num == 6)" << endl;
			file << "{" << endl;
			file << "cout << You have chosen to view the contents of the generated program." << endl;
			file << "" << endl;
			file << "string line;" << endl;
			file << "ifstream file = ifstream('C:\\Users\\jacis\\Documents\\file1.txt');" << endl;
			file << "" << endl;
			file << "while (file.good())" << endl;
			file << "{" << endl;
			file << "getline(file, line);" << endl;
			file << "cout << line << endl;" << endl;
			file << "}" << endl;
			file << "file.close();" << endl;
			file << "}" << endl;
			file << "" << endl;
			file << "switch (num)" << endl;
			file << "{" << endl;
			file << "case 1:" << endl;
			file << "cout << You have entered number 1." << endl;
			file << "break;" << endl;
			file << "case 2:" << endl;
			file << "cout << You have entered number 1." << endl;
			file << "break;" << endl;
			file << "case 3:" << endl;
			file << "cout << You have entered number 1." << endl;
			file << "break;" << endl;
			file << "case 4:" << endl;
			file << "cout << You have entered number 1." << endl;
			file << "break;" << endl;
			file << "case 5:" << endl;
			file << "cout << You have entered number 1." << endl;
			file << "break;" << endl;
			file << "case 6:" << endl;
			file << "cout << You chose to view the ontents of the generated program." << endl;
			file << "break;" << endl;
			file << "}" << endl;
			file << "" << endl;
			file << "return 0;" << endl;
			file << "}" << endl;
			file.close();

			cout << "Enter a number between 1-5. Enter 6 to view the contents of the generated program." << endl;
			cin >> num;

			if (num == 1)
			{
				cout << "You have entered number 1." << endl;
			}
			if (num == 2)
			{
				cout << "You have entered number 2." << endl;
			}
			if (num == 3)
			{
				cout << "You have entered number 3." << endl;
			}
			if (num == 5)
			{
				cout << "You have entered number 4." << endl;
			}
			if (num == 5)
			{
				cout << "You have entered number 5." << endl;
			}
			if (num == 6)
			{
				cout << "You have chosen to view the contents of the generated program." << endl;

				string line;
				ifstream file = ifstream("C:\\Users\\jacis\\Documents\\file1.txt");

				while (file.good())
				{
					getline(file, line);
					cout << line << endl;
				}
				file.close();
			}
			switch (num)
			{
			case 1:
				cout << "Thank you for complying." << endl;
				break;
			case 2:
				cout << "Thank you for complying." << endl;
				break;
			case 3:
				cout << "Thank you for complying." << endl;
				break;
			case 4:
				cout << "Thank you for complying." << endl;
				break;
			case 5:
				cout << "Thank you for complying." << endl;
				break;
			case 6:
				cout << "You chose to view the ontents of the generated program." << endl;
				break;
			default:
				cout << "You have not entered a number between 1-5 or 6." << endl;
				break;
			}

		}
		else
		{
			if (selection == 2)
			{
				cout << "You chose to write a message with the file." << endl;
				ofstream file = ofstream("C:\\Users\\jacis\\Documents\\file2.txt");

				file << "#include stdafx.h" << endl;
				file << "#include<iostream>" << endl;
				file << "#include<fstream>" << endl;
				file << "#include<string>" << endl;
				file << "#include<cmath>" << endl;
				file << "#include<thread>" << endl;
				file << "#include<chrono>" << endl;
				file << "" << endl;
				file << "using namespace std;" << endl;
				file << "" << endl;
				file << "int main()" << endl;
				file << "{" << endl;
				file << "cout << Enter 1 to generate a program which stores user enterd\n" << endl;
				file << "cout << numbers and stores in an array and displays back in\n" << endl;
				file << "cout << the reverse order.Enter 2 to display the contents of\n" << endl;
				file << "cout << the generated program." << endl;
				file << "cin >> num" << endl;
				file << "if (num == 1)" << endl;
				file << "{" << endl;
				file << "for (int i = 0; i < 5; i++)" << endl;
				file << "{" << endl;
				file << "cout << Enter a number : ;" << endl;
				file << "cin >> numbers[i];" << endl;
				file << "}" << endl;
				file << "(num == 2)" << endl;
				file << "{" << endl;
				file << "cout << 'You have chosen to view the contents of the generated program.' << endl;" << endl;
				file << "" << endl;
				file << "string line;" << endl;
				file << "ifstream file = ifstream('C:\\Users\\jacis\\Documents\\file2.txt');" << endl;
				file << "" << endl;
				file << "while (file.good())" << endl;
				file << "{" << endl;
				file << "getline(file, line);" << endl;
				file << "cout << line << endl;" << endl;
				file << "" << endl;
				file << "file.close();" << endl;
				file << "}" << endl;
				file << "" << endl;

				cout << "Enter 1 to generate a program which stores user enterd\n";
				cout << "numbers and stores in an array and displays back in\n";
				cout << "the reverse order. Enter 2 to display the contents of\n";
				cout << "the generated program." << endl;
				cin >> num;

				if (num == 1)
				{
					for (int i = 0; i < 5; i++)
					{
						cout << "Enter a number: ";
						cin >> numbers[i];
					}

					for (int i = 4; i >= 0; i--)
					{
						cout << numbers[i];
					}
				}
				if (num == 2)
				{
					cout << "You have chosen to view the contents of the generated program." << endl;

					string line;
					ifstream file = ifstream("C:\\Users\\jacis\\Documents\\file2.txt");

					while (file.good())
					{
						getline(file, line);
						cout << line << endl;
					}
					file.close();
				}

			}
			else if (selection == 3)
			{
				cout << "You chose to write a message with the file." << endl;
				ofstream file = ofstream("C:\\Users\\jacis\\Documents\\file3.txt");

				file << "#include stdafx.h" << endl;
				file << "#include<iostream>" << endl;
				file << "#include<fstream>" << endl;
				file << "#include<string>" << endl;
				file << "#include<cmath>" << endl;
				file << "#include<thread>" << endl;
				file << "#include<chrono>" << endl;
				file << "" << endl;
				file << "using namespace std;" << endl;
				file << "" << endl;
				file << "int main()" << endl;
				file << "{" << endl;
				file << "cout << Enter 1 to generate a program which makes a descision\n;" << endl;
				file << "cout << using if/else statements. Enter 2 to display the\n;" << endl;
				file << "cout << contents of the generated program.\n;" << endl;
				file << "cin >> num;" << endl;
				file << "" << endl;
				file << "if (num == 1)" << endl;
				file << "{" << endl;
				file << "cout << Enter the first number:" << endl;
				file << "cin >> x;" << endl;
				file << "cout << Enter the second number:" << endl;
				file << "cin >> y;" << endl;
				file << "" << endl;
				file << "if (x == y)" << endl;
				file << "cout << x <<  is equal to  << y << endl;" << endl;
				file << "if (x != y)" << endl;
				file << "cout << x <<  is not equal to  << y << endl;" << endl;
				file << "if (x > y)" << endl;
				file << "cout << x <<  is greater than  << y << endl;" << endl;
				file << "if (x < y)" << endl;
				file << "cout << x <<  is less than  << y << endl;" << endl;
				file << "if (x >= y)" << endl;
				file << "cout << x <<  is greater than or equal to  << y << endl;" << endl;
				file << "if (x <= y)" << endl;
				file << "cout << x <<  is less than or equal to  << y << endl;" << endl;
				file << "}" << endl;
				file << "(num == 2)" << endl;
				file << "{" << endl;
				file << "cout << 'You have chosen to view the contents of the generated program.' << endl;" << endl;
				file << "" << endl;
				file << "string line;" << endl;
				file << "ifstream file = ifstream('C:\\Users\\jacis\\Documents\\file3.txt');" << endl;
				file << "" << endl;
				file << "while (file.good())" << endl;
				file << "{" << endl;
				file << "getline(file, line);" << endl;
				file << "cout << line << endl;" << endl;
				file << "" << endl;
				file << "file.close();" << endl;
				file << "}" << endl;
				file << "" << endl;
				file << "" << endl;
				file << "return 0;" << endl;
				file << "}" << endl;

				cout << "Enter 1 to generate a program which makes a descision\n";
				cout << "using if/else statements. Enter 2 to display the\n";
				cout << "contents of the generated program.\n";
				cin >> num;

				if (num == 1)
				{
					cout << "Enter the first number:" << endl;
					cin >> x;
					cout << "Enter the second number:" << endl;
					cin >> y;

					if (x == y)
						cout << x << " is equal to " << y << endl;
					if (x != y)
						cout << x << " is not equal to " << y << endl;
					if (x > y)
						cout << x << " is greater than " << y << endl;
					if (x < y)
						cout << x << " is less than " << y << endl;
					if (x >= y)
						cout << x << " is greater than or equal to " << y << endl;
					if (x <= y)
						cout << x << " is less than or equal to " << y << endl;
				}
				if (num == 2)
				{
					cout << "You have chosen to view the contents of the generated program." << endl;

					string line;
					ifstream file = ifstream("C:\\Users\\jacis\\Documents\\file3.txt");

					while (file.good())
					{
						getline(file, line);
						cout << line << endl;
					}
					file.close();
				}
			}
			else if (selection == 4)
			{
				cout << "You chose to write a message with the file." << endl;
				ofstream file = ofstream("C:\\Users\\jacis\\Documents\\file4.txt");

				file << "This is my first C++ project!!" << endl;
				file.close();
			}
			else if (selection == 5)
			{
				cout << "You chose to display the above message from the file." << endl;
				string line;
				ifstream file = ifstream("C:\\Users\\jacis\\Documents\\file4.txt");

				while (file.good())
				{
					getline(file, line);
					cout << line << endl;
				}
				file.close();
			}
			else if (selection == 6)
			{
				cout << "Thank you for viewing my project." << endl;
				break;
			}

		}
	} while (selection > 0);

	return 0;
}

