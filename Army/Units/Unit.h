#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "State.h"

class State;

class Unit {
protected:
    State* state;
public:
    Unit(const char* name, int hitPoints, int damage);
    virtual ~Unit();

    const char* getName() const;
    int getHitPoints() const;
    int getHitPointsLimit() const;
    int getDamage() const;

    virtual void takePhisicalDamage(int dmg);
    virtual void takeMagicalDamage(int dmg);

    virtual void attack(Unit* enemy);
    virtual void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif // UNIT_H

