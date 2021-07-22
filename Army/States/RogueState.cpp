#include "RogueState.h"

RogueState::RogueState(const char* name, int hitPoints, int damage, Unit* owner) :
    State(name, hitPoints, damage, owner) {}

RogueState::~RogueState() {}

void RogueState::attack(Unit* enemy) {
    this->ensureIsAlive();
    enemy->takePhisicalDamage(this->getDamage());
}