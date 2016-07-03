// LOW PRIORITY

#include <iostream>
#include <string>

#include "combat.h"

using namespace std;

// Penetration
// Attack + 1d100 - Defense + 1d100 = Percentage And/Or Counterattacks
// Presence
// No HP, only crits and wound levels

int main()
{
    Character * Jerry = new Character;
    Character * Tom = new Character;
    Combat NewC({Jerry, Tom});
}
