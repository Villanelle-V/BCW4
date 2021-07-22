#include "Wizard.h"

Wizard::Wizard(const char* name, int hitPoints, int damage) :
	SpellCaster(name, hitPoints, damage) {}

Wizard::~Wizard() {}