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

    double MovementSpeed; // Meters per second
	vector<Equipment> Inventory;

    // Skills

    int AttackSkill;
    int BlockSkill;

    // WOUNDS

    vector<string> Wounds;

    // ZEONIC

    int Accumulation;

    int Catastropha;
    int Ruina;
    int Apocalypta;

    // EQUIPMENT

    //vector<Equipment> Inventory;

    // METHODS

    Character();
};

#endif // CHARACTER_H
