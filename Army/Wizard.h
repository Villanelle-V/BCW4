#ifndef  WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"

class Wizard : public SpellCaster {
public:
	Wizard(const char* name="Wizard", int hitPoints=150, int damage=20);
	virtual ~Wizard();
};

#endif // ! WIZARD_H

