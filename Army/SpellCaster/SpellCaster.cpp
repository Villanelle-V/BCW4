#include "SpellCaster.h"

SpellCaster::SpellCaster(const char* name, int hitPoints, int damage):
    Unit(name, hitPoints, damage) {
    this->magicDamage = 25;
   // this->state = new State(name, hitPoints, damage, this);
}

SpellCaster::~SpellCaster() {}

int SpellCaster::getMagicDamage() const {
    return this->magicDamage;
}

std::ostream& operator<<(std::ostream& out, const SpellCaster& spellCusler) {
    out << spellCusler.getName() << "'s power is\t " << spellCusler.getDamage() << ", his points:\t" << spellCusler.getHitPoints() << ".";
    return out;
}