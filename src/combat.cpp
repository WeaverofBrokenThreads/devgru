// MEDIUM PRIORITY

#include "combat.h"

Combat::Combat(vector<Character *> Fighters)
{
	Combatants = Fighters;

	cout << "Executing combat!" << endl;
	Attack(Combatants[0], Combatants[1]);




}

void Combat::Attack(Character * Attacker, Character * Defender)
{
	cout << "Attacker Stats: " << endl;
	cout << "Final Attack: " << Attacker->FAttack << endl;
	cout << "Final Block: " << Attacker->FBlock << endl;
	cout << "FInal Dodge: " << Attacker->FDodge << endl;
	cout << endl;
	cout << "Defender Stats: " << endl;
	cout << "Final Attack: " << Defender->FAttack << endl;
	cout << "Final Block: " << Defender->FBlock << endl;
	cout << "FInal Dodge: " << Defender->FDodge << endl;

	int attackerRoll = TNroll(d10, Attacker->FAttack, Attacker->Inventory[0].ATN);
	int defenderRoll = TNroll(d10, Defender->FBlock, Defender->Inventory[0].BTN);

	cout << "AR: " << attackerRoll << " VS " << "DR: " << defenderRoll << endl;
}



Maneuver::Maneuver(string _type, float _IM, float _AM, float _DM, float _PT, float _BT, float _MSM, int _AR)
{

	type = _type;
	InitiativeMod = _IM;
	AttackMod = _AM;
	DefenseMod = _DM;
	PrepareTime = _PT;
	BaseTime = _BT;
	MSMod = _MSM;
	AdvantageRequirement = _AR;
}
