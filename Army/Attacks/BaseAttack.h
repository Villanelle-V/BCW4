#ifndef BASE_ATTACK_H
#define BASE_ATTACK_H

#include "Unit.h"

class UnitIsDead {};

class BaseAttack {
protected:
	BaseAttack();
	~BaseAttack();
	virtual void ensureIsAlive(Unit& enemy);
	virtual void attack(Unit& attacker, Unit& enemy);
	virtual void counterAttack(Unit& attacker, Unit& enemy);
	//virtual void takeDamage(int dmg);
};
#endif // !BASE_ATTACK_H

