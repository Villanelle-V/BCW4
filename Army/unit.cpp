#include "unit.h"

Unit::Unit(const std::string& name) {
    this->damage = 30;
    this->hitPoints = 200;
    this->hitPointsLimit = 200;
    this->name = name;
}

Unit::Unit() {
    this->damage = 30;
    this->hitPoints = 200;
    this->hitPointsLimit = 200;
    this->name = "Unit";
}

Unit::~Unit() {}

int Unit::getDamage() const {
    return this->damage;
}
int Unit::getHitPoints() const {
    return this->hitPoints;
}
int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}
const std::string& Unit::getName() const {
    return this->name;
}

void Unit::sethitPoints() {
    this->hitPoints;
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() << "'s power is\t " << unit.getDamage() << ", his points:\t" << unit.getHitPoints() << ".";
    return out;
}
