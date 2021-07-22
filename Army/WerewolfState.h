#ifndef WEREWOLF_STATE_H
#define WEREWOLF_STATE_H

#include "State.h"

class WerewolfState : public State {
public:
	WerewolfState(const char* name, int hitPoints, int damage, Unit* owner);
	~WerewolfState();


};
#endif // !WEREWOLF_STATE_H
