// MEDIUM PRIORITY

#include "combat.h"

Combat::Combat(vector<Character *> Fighter)
{

}

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


