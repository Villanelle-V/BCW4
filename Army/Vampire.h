#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "SpellCaster.h"
#include "VampireState.h"

class Vampire : public SpellCaster {
public:
	Vampire(const char* name = "Vampire", int hitPoints = 150, int damage = 20);
	virtual ~Vampire();
};
#endif // !VAMPIRE_H
