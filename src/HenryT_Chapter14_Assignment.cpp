//============================================================================
// Name        : HenryT_Chapter14_Assignment.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Date.hpp"

int main() {


	Date firstDate;
	firstDate.setYear(2021);
	firstDate.setMonth(5);
	firstDate.setDay(2);


	Date date2;
	date2.setYear(2024);
	date2.setMonth(3);
	date2.setDay(2);

	cout << firstDate << endl;

	cout << "Program ending, have a nice day!" << endl; // prints Program ending, have a nice day!
	return 0;
}
