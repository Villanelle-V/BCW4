
#include <iostream>
#include "Passport.h"

Passport::Passport(std::string name, std::string surname, int day, int month, int year) {
	this->name = name;
	this->surname = surname;
	this->date = new Date(day, month, year);

	if (this->number == 999999 ) {
		lastSeries[1] += 1;
		this->series = lastSeries;
		globalNumber = 0;
		this->number = globalNumber;
	}
	else if (this->series == "AZ" && this-> number == 999999 ) {
		lastSeries[0] += 1;
		this->series = lastSeries;
		globalNumber = 0;
		this->number = globalNumber;
	}
	else if ( this->series == "ZZ" && this->number == 999999 ) {
		throw OutOfNumbers("ERROR! Numbers are over.");
	}

	globalNumber += 1;

	this->series = lastSeries;
	this->number = globalNumber;
}

Passport::~Passport() {
	delete date;
}

void Passport::setSeries(std::string newSeries) {
	lastSeries = newSeries;
	this->series = lastSeries;
	globalNumber = 0;
	this->number = globalNumber;
}

const std::string Passport::getName() const {
	return this->name;
}

const std::string Passport::getSurname() const {
	return this->surname;
}
const std::string Passport::getSeries() const {
	return this->series;
}
const int Passport::getNumber() const {
	return this->number;
}

std::ostream& operator<<(std::ostream& out, const Passport& passport) {
	out << passport.getName() << " " << passport.getSurname() << ": "
		<< passport.getSeries();
		printf("%06d", passport.getNumber());
	return out;
}

std::string Passport::lastSeries = "AA";
int Passport::globalNumber = 0;
