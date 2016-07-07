// MEDIUM PRIORITY

#ifndef CHARACTER_H
#define CHARACTER_H

#include <vector>
#include <string>
#include "Dice.h"
#include "Equipment.h"

#include <iostream>

using namespace std;



class Character
{
public:

    // STATS

    int Strength;
    int Agility;
    int Constitution;
    int Speed;
    int Intelligence;

    // DERIVED

	int SkillMod;

    double MovementSpeed; // Meters per second
	vector<Equipment> Inventory;

	int FAttack;
	int FBlock;
	int FDodge;

    // Skills

    int AttackSkill;
    int BlockSkill;
	int DodgeSkill;

	// Keep it at AttackSkill and DefendSkill and use proficiencies, or do every weapon skill?

	// Experience

	int AttackExperience;
	int BlockExperience;
	int DodgeExperience;

    // WOUNDS

    vector<string> Wounds;

    // ZEONIC

    int Accumulation;

    int Catastropha;
    int Ruina;
    int Apocalypta;



    // METHODS

    Character(Equipment);
};

#endif // CHARACTER_H
