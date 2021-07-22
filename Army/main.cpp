#include <iostream>
//#include "Unit.h"
//#include "SpellCaster.h"
#include "Soldier.h"
#include "Wizard.h"
#include "Berserker.h"
#include "Rogue.h"
//#include "RogueState.h"
//#include "State.h"
//#include "VampireState.h"
#include "Vampire.h"

int main() {
	Soldier* s1 = new Soldier("soldier1");
	Wizard* w1 = new Wizard("wizard1");
	Rogue* r1 = new Rogue("rogue1");
	Vampire* v1 = new Vampire();

	std::cout << *s1 << std::endl;
	std::cout << *w1 << std::endl;
	std::cout << *r1 << std::endl;
	std::cout << *v1 << std::endl;

	v1->attack(w1);

	r1->attack(s1);

	std::cout << *s1 << std::endl;
	std::cout << *w1 << std::endl;
	std::cout << *r1 << std::endl;
	std::cout << *v1 << std::endl;
}