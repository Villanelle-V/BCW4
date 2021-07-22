#include "Soldier.h"

Soldier::Soldier(const char* name, int hitPoints, int damage):
	Unit(name, hitPoints, damage) {}

Soldier::~Soldier() {}