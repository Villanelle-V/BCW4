#include <iostream>
#include "Unit.h"
#include "SpellCaster.h"
#include "Soldier.h"
#include "Wizard.h"

int main() {
	Soldier* s1 = new Soldier("soldier1");
	Wizard* w1 = new Wizard("wizard1");

	std::cout << *s1 << std::endl;
	std::cout << *w1 << std::endl;
}