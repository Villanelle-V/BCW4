#include <iostream>
#include "Mohican.h"

int main() {
	Mohican* mohican1 = new Mohican();
	Mohican* mohican2 = new Mohican();
	Mohican* mohican3 = new Mohican();
	Mohican* mohican4 = new Mohican();
	Mohican* mohican5 = new Mohican();
	Mohican* mohican6 = new Mohican();

	std::cout << "The last Mohican is " << Mohican::getLast().getId() << std::endl;

	delete mohican6;

	std::cout << "The last Mohican is " << Mohican::getLast().getId() << std::endl;

	delete mohican4;
	delete mohican2;
	delete mohican3;
	delete mohican1;
	delete mohican5;
	
	return 0;
}
