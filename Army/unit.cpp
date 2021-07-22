#include "unit.h"

Unit::Unit(const char* name, int hitPoints, int damage) {
    this->state = new State(name, hitPoints, damage, this);
}

Unit::~Unit() {}

const char* Unit::getName() const {
    return this->state->getName();
}

int Unit::getDamage() const {
    return this->state->getDamage();
}
int Unit::getHitPoints() const {
    return this->state->getHitPoints();
}
int Unit::getHitPointsLimit() const {
    return this->state->getHitPointsLimit();
}

void Unit::takePhisicalDamage(int dmg) {
    this->state->takePhisicalDamage(dmg);
}

void Unit::takeMagicalDamage(int dmg) {
    this->state->takeMagicalDamage(dmg);
}

void Unit::attack(Unit* enemy) {
    this->state->attack(enemy);
}

void Unit::counterAttack(Unit* enemy) {
    this->state->counterAttack(enemy);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() << "'s power is\t " << unit.getDamage() << ", his points:\t" << unit.getHitPoints() << ".";
    return out;
}