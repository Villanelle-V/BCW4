#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"
#include "RogueState.h"

class Rogue : public Unit {
public:
	Rogue(const char* name = "Rogue", int hitPoints = 200, int damage = 30);
	virtual ~Rogue();
};

#endif // !ROGUE_H

