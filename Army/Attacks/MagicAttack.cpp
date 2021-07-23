#include "MagicAttack.h"

MagicAttack::MagicAttack() {}
MagicAttack::~MagicAttack() {}

void MagicAttack::magicAttack(SpellCaster* attacker, Unit* enemy, int mana) {
	enemy->getState()->takeMagicalDamage(mana);
}
