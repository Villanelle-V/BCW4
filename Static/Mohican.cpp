#include "Mohican.h"

Mohican::Mohican() {
	count += 1;
	this->id = count;

	list.push_back(this);
	last = list.back();
}

Mohican::~Mohican() {
	if ( this == list.back() ) {
		list.pop_back();
	}

	if ( list.size() == 0 ) {
		last = nullptr;
		return;
	}

	last = list.back();
}

int Mohican::getId() {
	return this->id;
}

Mohican& Mohican::getLast() {
	return *last;
}

int Mohican::count = 0;
Mohican* Mohican::last = nullptr;
std::list<Mohican*>Mohican::list = std::list<Mohican*>();
