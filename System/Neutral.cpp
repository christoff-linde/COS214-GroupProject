/**
 * @file Aggressive.h
 * @author Kyle Proctor-Parker
 * @brief 
 * @version 0.1
 * @date 2020-11-07
 * 
 * @copyright Copyright (c) 2020
 * 
*/
#include "Neutral.h"

using namespace std;

Neutral::Neutral()
{

}

Neutral::~Neutral()
{

}

string Neutral::getType()
{
    return "Neutral";
}

string Neutral::getTyreType()
{
    return "Medium";
}

int Neutral::getAmountOfTyreSets()
{
    return 4;
}