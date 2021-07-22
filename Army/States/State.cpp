#include "State.h"
//#include "exceptions.hpp"

class UnitIsDeadException {};

State::State(const char* name, int hitPoints, int damage, Unit* owner)
    : name(name), hitPoints(hitPoints), hitPointsLimit(hitPoints),
    damage(damage), owner(owner) {}

State::~State() {}

void State::ensureIsAlive() {
    if (this->hitPoints == 0) {
        throw UnitIsDeadException();
    }
}

const char* State::getName() const {
    return this->name;
}

int State::getHitPoints() const {
    return this->hitPoints;
}

int State::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

int State::getDamage() const {
    return this->damage;
}

void State::takePhisicalDamage(int dmg) {
    this->ensureIsAlive();

    if ( dmg > this->hitPoints ) {
        this->hitPoints = 0;
        return;
    }
    this->hitPoints -= dmg;
}

void State::takeMagicalDamage(int dmg) {
    this->ensureIsAlive();

    if (dmg > this->hitPoints) {
        this->hitPoints = 0;
        return;
    }
    this->hitPoints -= dmg;
}

void State::attack(Unit* enemy) {
    this->ensureIsAlive();

    enemy->takePhisicalDamage(this->getDamage());
    enemy->counterAttack(this->owner);
}

void State::counterAttack(Unit* enemy) {
    enemy->takePhisicalDamage(this->getDamage() / 2);
}
