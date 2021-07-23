#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "State.h"
#include "BaseAttack.h"
#include "Observable.h"

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
    State* getState() const;

    virtual void takePhisicalDamage(int dmg);
    virtual void takeMagicalDamage(int dmg);

    virtual void attack(Unit* enemy) = 0;
    virtual void counterAttack(Unit* enemy) = 0;
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif // UNIT_H

