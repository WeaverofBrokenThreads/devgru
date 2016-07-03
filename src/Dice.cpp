// LOW PRIORITY

// Don't forget we have no roll()

#include "Dice.h"

std::random_device rd;
std::mt19937 gen(rd());

int rollD(std::uniform_int_distribution<> dX, int times, int discard)
{
    int total = 0;

    for(int i = 0; i < times; i++)
    {

        int roll = 0;
        roll = dX(gen);

        if(roll <= discard)
        {
            i--;
            roll = 0;
        }
        else
        {
            total += roll;
        }

    }
    return total;
}

int rollK(std::uniform_int_distribution<> dX, int times)
{
    int roll = 0;
    int rollnew = 0;

    for(int i = 0; i < times; i++)
    {
        rollnew = dX(gen);\
        if(rollnew > roll) roll = rollnew;

    }
    return roll;
}
