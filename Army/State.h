#ifndef STATE_HPP
#define STATE_HPP

#include "Unit.h"

class Unit;

class State {
protected:
    const char* name;
    int hitPoints;
    int hitPointsLimit;
    int damage;

    void ensureIsAlive();
    Unit* owner;

public:
    State(const char* name, int hitPoints, int damage, Unit* owner);
    virtual ~State();

    const char* getName() const;
    int getHitPoints() const;
    int getHitPointsLimit() const;
    int getDamage() const;

    virtual void takePhisicalDamage(int dmg);
    virtual void takeMagicalDamage(int dmg);

    virtual void attack(Unit* enemy);
    virtual void counterAttack(Unit* enemy);
};


#endif // STATE_HPP

