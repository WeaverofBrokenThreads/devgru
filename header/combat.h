#ifndef COMBAT_H
#define COMBAT_H

#include <iostream>
#include "character.h"

using namespace std;

class Combat
{
public:
    Combat(vector<Character *> Fighter);

    // VARS

    vector<Character> Combatants;

    int RoundTime;
    int CurrRound;
    int CombatTime;

    // METHODS

    void ResolveRound();
    void Initiative();
    void Attack();
};

#endif // COMBAT_H
