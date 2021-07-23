#include "Identifiable.h"

Identifiable::Identifiable() {
	count += 1;
	this->id = count;
}

int Identifiable::getId() const {
	return this->id;
}

int Identifiable::getCount() {
	return count;
}

int Identifiable::count = 0;