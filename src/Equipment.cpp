// MEDIUM PRIORITY

#include "Equipment.h"

Equipment::Equipment(int _Quality, int _ATN, int _BTN, float _AM, float _DM)
{
	Quality = _Quality;
	ATN = _ATN;
	BTN = _BTN;
	AttackMod = _AM;
	DefenseMod = _DM;
}

namespace EQ
{
	char LONG_BLADE = 1 << 0;
	char POLEARM = 1 << 1;

}

// Should move those away from globals

Equipment Longsword(0, 6, 6, 0.9, 1.1);
Equipment Spear(0, 5, 7, 1.2, 1.2);