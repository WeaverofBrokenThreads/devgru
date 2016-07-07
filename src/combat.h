// MEDIUM PRIORITY

#ifndef COMBAT_H
#define COMBAT_H

#include <iostream>
#include "character.h"

using namespace std;

class Combat
{
public:
    Combat(vector<Character *> Fighters);



    // VARS

    vector<Character *> Combatants;

    int RoundTime;
    int CurrRound;
    int CombatTime;

    // METHODS

    void ResolveRound();
	void Attack(Character * Attacker, Character * Defender);
	void Initiative();
};



// Same as Maneuver

struct Technique
{

};


// Stick with struct for now, maybe change to class later.

struct Maneuver
{
	Maneuver(string _type, float _IM, float _AM, float _DM, float _PT, float _BT, float _MSM, int _AR);

	// VARS

	string type;
	float InitiativeMod;
	float AttackMod;
	float DefenseMod;
	float PrepareTime;
	float BaseTime;
	float MSMod;
	int AdvantageRequirement;
	vector<Technique> Techniques;

};

#endif // COMBAT_H
