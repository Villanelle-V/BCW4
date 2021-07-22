#include "Vampire.h"

Vampire::Vampire(const char* name, int hitPoints, int damage):
	SpellCaster(name, hitPoints, damage) {}

Vampire::~Vampire() {}