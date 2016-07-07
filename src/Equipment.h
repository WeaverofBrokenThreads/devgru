// MEDIUM PRIORITY

#pragma once
#ifndef EQUIPMENT_H
#define EQUIPMENT_H

extern char LONG_BLADE;
extern char POLEARM;

class Equipment
{
public:
	Equipment(int, int, int, float, float);

	int Quality;
	int ATN; // Attack Target Number
	int BTN; // Block Target Number
	float AttackMod;
	float DefenseMod;
};


extern Equipment Longsword;
extern Equipment Spear;





#endif // EQUIPMENT_H