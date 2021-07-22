#include "VampireState.h"

VampireState::VampireState(const char* name, int hitPoints, int damage, Unit* owner):
	State(name, hitPoints, damage, owner) {}

VampireState::~VampireState() {}

void VampireState::attack(Unit* enemy) {
	this->ensureIsAlive();

	enemy->takePhisicalDamage(this->getDamage());
	enemy->counterAttack(this->owner);

	this->bloodSucker(enemy);

}

void VampireState::counterAttack(Unit* enemy) {
	enemy->takePhisicalDamage(this->getDamage() / 2); 

	this->bloodSucker(enemy); //??
}

void VampireState::bloodSucker(Unit* enemy) {
	enemy->takePhisicalDamage(10);
	this->hitPoints += 10;
}