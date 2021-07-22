#ifndef BERSERKER_STATE_H
#define BERSERKER_STATE_H

#include "State.h"

class BerserkerState : public State {
public:
    BerserkerState(const char* name, int hitPoints, int damage, Unit* owner);
    virtual ~BerserkerState();
    virtual void takeMagicalDamage(int dmg);
};
#endif // !BERSERKER_STATE_H

