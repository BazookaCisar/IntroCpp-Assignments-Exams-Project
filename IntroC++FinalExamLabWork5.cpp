// IntroC++FinalExamLabWork5.cpp : Defines the entry point for the console application.
//
//Broward College
//COP 2001, Summer 2018
//Author: Joseph Cisar

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

//Write a program that uses a structure named MovieData to store the following information about a movie.
//Title
//Director
//Year Released
//Length of the movie
//
//Create a MovieData variable, store values for each item and display on the screen.

using namespace std;

int main()
{
	struct MovieData {
		string title;
		string director;
		string yearreleased;
		string lengthofmovie;
	};

	MovieData movie;

	movie.title = "Connections";
	movie.director = "Directed by: Peter Alexander";
	movie.yearreleased = "Released in: 2015";
	movie.lengthofmovie = "Length of Film: 78 minutes";

	MovieData MovieDataArray[1];
	MovieDataArray[0] = movie;

	for (int i = 0; i < 1; i++)
	{
		cout << MovieDataArray[i].title << endl;
		cout << MovieDataArray[i].director << endl;
		cout << MovieDataArray[i].yearreleased << endl;
		cout << MovieDataArray[i].lengthofmovie << endl;
	}

	return 0;
}
