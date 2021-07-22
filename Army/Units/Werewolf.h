#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "SpellCaster.h"

class Werewolf : public SpellCaster {
public:
	Werewolf(const char* name = "Werewolf", int hitPoints = 150, int damage = 20);
	~Werewolf();
};
#endif // !WEREWOLF_H

