#include <iostream>
#include "date.h"

Date::Date() {
	this->day = 1;
	this->month = 1;
	this->year = 2000;
}

Date::Date(int day, int month, int year) {
	validate(day, month, year);

	this->day = day;
	this->month = month;
	this->year = year;
}

Date::~Date() {}

void Date::validate(int day, int month, int year) {
	if (month < 1 || month > 12) {
		throw InvalidDate("ERROR! Wrong date.");
	}
	if (month == 2 && year % 400 == 0) {
		if (day < 1 || day > 29) {
			throw InvalidDate("ERROR! Wrong date.");
		}
	}
	if (month == 2 && year % 400 != 0) {
		if (day < 1 || day > 28) {
			throw InvalidDate("ERROR! Wrong date.");
		}
	}
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		if (day < 1 || day > 31) {
			throw InvalidDate("ERROR! Wrong date.");
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day < 1 || day > 30) {
			throw InvalidDate("ERROR! Wrong date.");
		}
	}
	if ( year > 2005 ) {
		throw IncorrectAge("ERROR! Person is young to obtain a passport.");
	}
}

int Date::getDay() const {
	return this->day;
}

int Date::getMonth() const {
	return this->month;
}

int Date::getYear() const {
	return this->year;
}