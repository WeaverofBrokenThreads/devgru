// MEDIUM PRIORITY

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



// Same as Maneuver

struct Technique
{

};


// Stick with struct for now, maybe change to class later.

struct Maneuver
{
	Maneuver();

	// VARS

	string type;
	float InitiativeMod;
	float AttackMod;
	float DefenseMod;
	float PrepareTime;
	float BaseTime;
	float MSMod;
	vector<Technique> Techniques;

};

#endif // COMBAT_H
