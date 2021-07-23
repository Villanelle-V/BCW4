#include "VampireAttack.h"

#define VAMP_BITE 5

VampireAttack::VampireAttack() {}

VampireAttack::~VampireAttack() {}

//transform

void VampireAttack::attack(Unit* enemy) {
	this->ensureIsAlive(enemy);

	enemy->takePhisicalDamage(this->getState()->getDamage());
	enemy->counterAttack(this->getState()->getOwner());

	this->getState()->setHitPoints(VAMP_BITE);

}

void VampireAttack::counterAttack(Unit* enemy) {
	enemy->takePhisicalDamage(this->getState()->getDamage() / 2);

	this->getState()->setHitPoints(VAMP_BITE);
	
	
}