#ifndef ROGUE_STATE_H
#define ROGUE_STATE_H

#include "State.h"

class RogueState : public State {
public:
    RogueState(const char* name, int hitPoints, int damage, Unit* owner);
    virtual ~RogueState();
    virtual void attack(Unit* enemy);
};

#endif // !ROGUE_STATE_H

