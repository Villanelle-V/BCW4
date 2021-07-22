#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"

class Soldier : public Unit {
public:
	Soldier(const char* name = "Soldier", int hitPoint = 200, int damage = 30);
	virtual ~Soldier();
};

#endif // !SOLDIER_H

