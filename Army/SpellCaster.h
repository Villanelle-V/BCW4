#ifndef SPELL_CASLER_H
#define SPELL_CASLER_H

#include <iostream>
#include <string>
#include "Unit.h"

class SpellCaster: public Unit {
protected:
    int magicDamage;
public:
    SpellCaster(const std::string& name);
    SpellCaster();
    ~SpellCaster();
    int getMagicDamage() const;
};

std::ostream& operator<<(std::ostream& out, const SpellCaster& unit);

#endif // !SPELL_CASLER_H
