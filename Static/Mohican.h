#ifndef MOHICAN_H
#define MOHICAN_H

#include <iostream>
#include <list>

class Mohican {
private:
	int id;
	static std::list<Mohican*> list;
	static Mohican* last;
	static int count;
public:
	Mohican();
	~Mohican();
	int getId();
	static Mohican& getLast();
};

#endif // MOHICAN_H