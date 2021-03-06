// IntroC++Classwork6.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar


#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main()
{

	// Declare the structure
	struct BookInfo {
		string title;
		string author;
		string publisher;
		string price;
	};

	struct PublisherInfo {

		int id;
		string name;
		BookInfo publisher;
		string city;
	};

	//Create an instance of a structure
	BookInfo book;
	PublisherInfo publisher;

	publisher.name = book.publisher;
	publisher.city = "Denver";

	book.title = "The ESPYs";
	book.author = "Written by Kobe Bryant";
	book.publisher = "Published by Borders";
	book.price = "$19.99";

	BookInfo BookInfoArray[5];
	BookInfoArray[0] = book;

	publisher.name = book.publisher;
	publisher.city = "Los Angeles";

	book.title = "How to Win";
	book.author = "Written by Bill Russell";
	book.publisher = "Published by Fine Arts";
	book.price = "$12.99";

	BookInfoArray[1] = book;

	publisher.name = book.publisher;
	publisher.city = "San Francisco";

	book.title = "Website Development";
	book.author = "Written by Mark Zuckerburg";
	book.publisher = "Published by Columbia";
	book.price = "$15.99";

	BookInfoArray[2] = book;

	publisher.name = book.publisher;
	publisher.city = "Daytona Beach";

	book.title = "How to Never Win in NASCAR";
	book.author = "Written by Danika Patrick";
	book.publisher = "Published by NASCAR";
	book.price = "$99.99";

	BookInfoArray[3] = book;

	publisher.name = book.publisher;
	publisher.city = "Miami";

	book.title = "The Greatest of All Time";
	book.author = "Written by LeBron James";
	book.publisher = "Published by LeBron James";
	book.price = "$32.99";

	BookInfoArray[4] = book;

	//Dispalying the Structure
	for (int i = 0; i < 5; i++)
	{
		cout << BookInfoArray[i].title << endl;
		cout << BookInfoArray[i].author << endl;
		cout << BookInfoArray[i].publisher << endl;
		cout << BookInfoArray[i].price << endl;
		cout << "___________________" << setw(5) << "__________________" << endl;

		cout << endl;
	}

	return 0;
}
