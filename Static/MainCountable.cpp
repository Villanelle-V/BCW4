#include <iostream>
#include "Countable.h"

int main() {
	Countable* c1 = new Countable();
	Countable* c2 = new Countable();

	std::cout << Countable::count << std::endl;

	return 0;
}
