#pragma once
/*
* Date.h - Produce a date based on initial inputs and default the display of that date to a specified format.
* 
* Reference -
*             Williams, W. (2023). C++ PROGRAMMING: INHERITANCE AND OPERATOR OVERLOADING ASSIGNMENT INSTRUCTIONS [Class handout].
                      Liberty University. CSIS-112-B01
*/


// (Williams, 2023)
#include <iostream>
#include <cstdlib>
#include <cctype>
class Date {
	friend std::ostream& operator<<(std::ostream&, Date);
public:
	Date(int d = 0, int m = 0, int yyyy = 0) {
		setDate(d, m, yyyy);
	}
	~Date() {}
	void setDate(int d, int m, int yyyy) {
		day = d;
		month = m;
		year = yyyy;
	}
private:
	int day;
	int month;
	int year;
};
std::ostream& operator<<(std::ostream& output, Date d) {
	output << d.month << "/" << d.day << "/" << d.year;
	return output;
}

