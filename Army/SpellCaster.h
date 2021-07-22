#ifndef SPELL_CASLER_H
#define SPELL_CASLER_H

#include <iostream>
#include <string>
#include "Unit.h"

class SpellCaster: public Unit {
protected:
    int magicDamage;
public:
    SpellCaster(const char* name="Spell Caster", int hitPoints=150, int damage=20);
    ~SpellCaster();
    int getMagicDamage() const;
};

std::ostream& operator<<(std::ostream& out, const SpellCaster& unit);

#endif // !SPELL_CASLER_H

