#include "BerserkerState.h"

BerserkerState::BerserkerState(const char* name, int hitPoints, int damage, Unit* owner):
	State(name, hitPoints, damage, owner) {}

BerserkerState::~BerserkerState() {}

void BerserkerState::takeMagicalDamage(int dmg) {
	std::cout << "Not today, asshole!" << std::endl;
}