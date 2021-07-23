#include <iostream>
#include "Identifiable.h"

int main() {
	Identifiable* i1 = new Identifiable();
	Identifiable* i2 = new Identifiable();

	std::cout << Identifiable::count << std::endl;

	return 0;
}