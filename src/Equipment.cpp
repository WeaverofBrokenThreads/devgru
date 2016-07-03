#include "Equipment.h"

Equipment::Equipment(int _Quality, int _ATN, int _PTN, float _AM, float _DM)
{
	Quality = _Quality;
	ATN = _ATN;
	PTN = _PTN;
	AttackMod = _AM;
	DefenseMod = _DM;
}


char LONG_BLADE =			1 << 0;
char POLEARM =				1 << 1;

Equipment Longsword(0, 6, 6, 0.9, 1.1);
Equipment Spear(0, 5, 8, 1.1, 1.1);