#ifndef VAMPIRE_STATE_H
#define VAMPIRE_STATE_H

#include "State.h"

class VampireState : public State {
public:
    VampireState(const char* name, int hitPoints, int damage, Unit* owner);
    virtual ~VampireState();
    virtual void attack(Unit* enemy);
    virtual void counterAttack(Unit* enemy);
    virtual void bloodSucker(Unit* enemy);
};
#endif // !VAMPIRE_STATE_H

