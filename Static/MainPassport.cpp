#include <iostream>
#include "Passport.h"

int main() {
	Passport* pass1 = new Passport("Olga", "Orlova", 15, 3, 1978);
	Passport* pass2 = new Passport("Andrey", "Kozhuh", 2, 11, 2002);

	std::cout << Passport::lastSeries << Passport::globalNumber << std::endl;
	std::cout << *pass1 << std::endl;

	return 0;
}