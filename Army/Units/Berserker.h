#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"
#include "Berserker.h"

class Berserker : public Unit {
	Berserker(const char* name = "Berserker", int hitPoints = 130, int damage = 30);
	virtual ~Berserker();
};
#endif // !BERSERKER_H

