// MEDIUM PRIORITY

#include "character.h"

Character::Character()
{

	/*
	
	STATS POWER LEVEL:

	1 - 2: Untrained, very unskilled, average
	3: Highest level of average human ability
	4 - 5: Beyond human power level, faster, smarter, stronger
	6 - 8: Semi-immortal levels of power
	9 - 10: Immortal
	10+: Beyond the Prime Plane AKA 'Planar'.
	
	
	*/
    Strength += rollK(d10, 3);
    Agility += rollK(d10, 3);
    Constitution += rollK(d10, 3);
    Speed += rollK(d10, 3);
    Intelligence += rollK(d10, 3);


    /*
     * SPEED MOD *
     *
     * Character needs to adjust his speed based on his ability to power through, or use his strength to maximize his speed
     * IE: Leaping gaits, powerful steps, etc-- applying sheer strength to speed, modified by his endurance and toughness.
     *
     * If Speed represents the character's general speed, then the Speed mod would be his ability to utilize it.
     */

    int SpeedMod = ((float)Agility + (float)Strength) / ((float)1 / Constitution * 10);
    cout << SpeedMod << endl;

    /*
     * MOVEMENT SPEED
     *
     * Constitution / Speed represents the character's ability to resist the drag and g-forces, and other
     * external influences to his top speed. Two characters with the same mod, and base speed, will not
     * always, or even occassionally, have the same top speed.
     */

    MovementSpeed = 2 + pow(Speed + SpeedMod, 2) / ((float)((float)Constitution / (float)Speed) * 2 / Speed * 10);

    cout << "Speed: " << Speed << endl;

    cout << "MS: " << MovementSpeed << endl;

    float CombatMS = MovementSpeed * 0.6; // Speed without getting fatigued too much

    float NormalMS = MovementSpeed * 0.25; // Speed when at rest or not in combat- causes no fatigue

    float RestMS = MovementSpeed * 0.05; // Recovers fatigue, slower than 'walking', but slight risk of mental instability caused
    // by walking so slow

    double PsycheMS = MovementSpeed * 0.01; // Characters who move at this speed or lower suffer mental damage

    cout << "Sustainable Combat Speed: " << CombatMS << endl;
    cout << "Normal MS: " << NormalMS << endl;
    cout << "Rest MS: " << RestMS << endl;
    cout << "Psyche MS: " << PsycheMS << endl;

    /*
     * FINAL THOUGHTS
     *
     * Characters who achieve a certain level of power that brings their PsycheMS above 3 to 4 meters per second
     * lose their ability to interact with mortal creatures, due to the danger of contracting an insanity
     * or lashing out at them in frustration;
     *
     * Characters who possess such a high movement speed observe the world in a very slowed-down state, and thus being forced
     * to walk at a snail's pace is downright maddening to them. There are ways to avoid this through traits
     * or temporarily relinquishing some of their power for accumulation, etc, can allow them to suffer this condition
     * without losing their minds or obliterating mortals.
     *
     * On the other hand, mortals who see characters move at this speed are far more likely to suffer dementia or insanity.
     */


    int BaseRef = 300;

    int ReflexMod = pow(Intelligence + ((1 + Strength + Agility + Speed + Intelligence) / 4), 2) * PsycheMS;
    cout << "ReflexMod: " << ReflexMod << endl;

    int ReflexSpeed = BaseRef / std::log((Intelligence * ReflexMod + 2));
    cout << "Reflex Speed: " << ReflexSpeed << " ms" << endl;

    /*
     * I VERY MUCH DON'T LIKE THIS, BUT IT'S GOOD ENOUGH FOR COMBAT DESIGN
     */

}
