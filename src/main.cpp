// LOW PRIORITY

#include <iostream>
#include <string>

// FOR OPTIMIZATION

#include <ctime>
#include <chrono>
#include <ratio>

#include "combat.h"

using namespace std;

// Penetration ?
// Presence ?
// No HP, only crits and wound levels !

int main()
{
    Character * Jerry = new Character(Longsword);
    Character * Tom = new Character(Spear);
	
	using namespace chrono;

	steady_clock::time_point start = steady_clock::now();

	Combat NewC({ Jerry, Tom });

	steady_clock::time_point comp = steady_clock::now();

	duration<double, milli> time_span = duration_cast<duration<double>>(comp - start);

	cout << "Time taken to execute: " << time_span.count() << " milliseconds" << endl;
}
