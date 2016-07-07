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
    int rollnew;

    for(int i = 0; i < times; i++)
    {
        rollnew = dX(gen);
        if(rollnew > roll) roll = rollnew;

    }
    return roll;
}


int roll(std::uniform_int_distribution<> dX, int times)
{
	int roll = dX(gen);
	return roll;
}

int TNroll(std::uniform_int_distribution<> dX, int times, int TN)
{
	std::cout << "Rolling against TN: " << TN << std::endl;
	std::stringstream rolled;
	rolled << "Dice Rolled are: ";
	int successes = 0;
	for (int i = 0; i < times; i++)
	{
		int roll = dX(gen);
		if (roll >= TN) successes++;
		if (roll == 10) successes++;
		rolled << roll;
		if (i+1 < times) rolled << ", ";
	}
	rolled << std::endl << "Total successes: " << successes << " successes!" << std::endl;
	std::cout << rolled.str(); // Not efficient
	
	return successes;
}