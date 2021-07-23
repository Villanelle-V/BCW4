#ifndef MAGIC_ATTACK_H
#define MAGIC_ATTACK_H

#include "SpellCaster.h"

class MagicAttack {
	MagicAttack();
	~MagicAttack();

	void magicAttack(SpellCaster* attacker, Unit* enemy, int mana);
};

#endif //MAGIC_ATTACK_H
