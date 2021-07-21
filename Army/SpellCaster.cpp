#include "SpellCaster.h"

SpellCaster::SpellCaster(const std::string& name) {
    this->damage = 10;
    this->hitPoints = 150;
    this->hitPointsLimit = 150;
    this->name = name;
    this->magicDamage = 20;
}

SpellCaster::SpellCaster() {
    this->damage = 10;
    this->hitPoints = 150;
    this->hitPointsLimit = 150;
    this->name = "SpellCasler";
}

SpellCaster::~SpellCaster() {}

int SpellCaster::getMagicDamage() const {
    return this->damage;
}

std::ostream& operator<<(std::ostream& out, const SpellCaster& spellCusler) {
    out << spellCusler.getName() << "'s power is\t " << spellCusler.getDamage() << ", his points:\t" << spellCusler.getHitPoints() << ".";
    return out;
}
