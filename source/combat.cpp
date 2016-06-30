// MEDIUM PRIORITY

#include "header/combat.h"

Combat::Combat(vector<Character *> Fighter)
{

}


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

// Same as Maneuver
struct Technique
{

};
