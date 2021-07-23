#ifndef PASSPORT_H
#define PASSPORT_H

#include <string>
#include "Date.h"

class OutOfNumbers {
public:
	std::string text;
	OutOfNumbers(const std::string& text) : text(text) {}
};

class Passport {
private:
	int number;
	std::string series;
	std::string name;
	std::string surname;
	Date* date;
public:
	static std::string lastSeries;
	static int globalNumber;
public:
	Passport(std::string name, std::string surname, int day, int  month, int year);
	~Passport();

	void setSeries(std::string newSeries);

	const std::string getName() const;
	const std::string getSurname() const;
	const std::string getSeries() const;
	const int getNumber() const;

};

std::ostream& operator<<(std::ostream& out, const Passport& passport);

#endif // _PASSPORT_H

