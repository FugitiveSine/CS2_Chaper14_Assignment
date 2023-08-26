/*
 * Date.hpp
 *
 *  Created on: Mar 25, 2023
 *      Author: henry
 */

#ifndef DATE_HPP_
#define DATE_HPP_
#include <iostream>

using namespace std;

class Date {
public:
	Date();
	virtual ~Date();
	int getDay();
	int getMonth();
	int getYear();

	bool setDay(int aDay);
	bool setMonth(int aMonth);
	bool setYear(int aYear);

	int numOfDays();

	bool operator++(int x);
	bool operator--(int x);
	bool operator==(const Date& rightDate);

	bool operator<(const Date& rightDate);
	bool operator>(const Date& rightDate);

	friend ostream& operator<<(ostream& stream, const Date& rightDate){
		if(rightDate.day == 0 || rightDate.month == 0 || rightDate.year == 0){
			stream << "Invalid data sent" << endl;
		}else{
			stream << rightDate.month << "/" << rightDate.day << "/" << rightDate.year << '\n';
		}
		return stream;
	}//<<
private:
	int day;
	int month;
	int year;
};

#endif /* DATE_HPP_ */
