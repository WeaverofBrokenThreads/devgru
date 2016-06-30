// LOW PRIORITY

#ifndef DICE_H
#define DICE_H

#include <random>
#include <iostream>
#include <vector>

static std::uniform_int_distribution<> d10(1, 10);
static std::uniform_int_distribution<> d20(1, 20);
static std::uniform_int_distribution<> d50(1, 50);
static std::uniform_int_distribution<> d100(1, 100);


int roll(std::uniform_int_distribution<> dX, int times);
int rollD(std::uniform_int_distribution<> dX, int times, int discard);
int rollK(std::uniform_int_distribution<> dX, int times);
int rollVS(std::uniform_int_distribution<> dX, int times, int TN);


#endif // DICE_H
