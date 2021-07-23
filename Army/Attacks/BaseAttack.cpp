#include "BaseAttack.h"

BaseAttack::BaseAttack() {}

BaseAttack::~BaseAttack() {}

void BaseAttack::ensureIsAlive(Unit& enemy) {
		if (enemy.getHitPoints() == 0) {
			throw UnitIsDead();
		}
}

void BaseAttack::attack(Unit& attacker, Unit& enemy) {
	ensureIsAlive(enemy);

	if ( attacker.getDamage() > enemy.getHitPoints() ) {
		this->state.attack(enemy);
		return;
	}
	enemy->getState().takeDamage(attacker->getState().getDamage());
	enemy->onEventAction();
	enemy.hitPoints -= attacker.getDamage();
	counterAttack(enemy, attacker);
}

void BaseAttack::counterAttack(Unit& attacker, Unit& enemy) {
	ensureIsAlive(enemy);

	if ( attacker.getDamage() > enemy.getHitPoints() ) {
		this->state.attack(enemy);
	return;
	}
	enemy->getState().takeDamage(attacker->getState().getDamage());
	enemy->onEventAction();
}


// void BaseAttack::attack(Unit* enemy) {
//     this->state->attack(enemy);
// }

// void BaseAttack::counterAttack(Unit* enemy) {
//     this->state->counterAttack(enemy);
// }
