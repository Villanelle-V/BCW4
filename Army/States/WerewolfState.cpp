#include "WerewolfState.h"

WerewolfState::WerewolfState(const char* name, int hitPoints, int damage, Unit* owner):
	State(name, hitPoints, damage, owner) {}

WerewolfState::~WerewolfState() {}