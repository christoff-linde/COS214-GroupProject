#include "EngineeringTeam.h"

EngineeringTeam::EngineeringTeam(RacingStrategy* strategy)
{
    this->setRacingStrategy(strategy);
}

EngineeringTeam::EngineeringTeam()
{

}

EngineeringTeam::~EngineeringTeam()
{

}

void EngineeringTeam::setRacingStrategy(RacingStrategy* strategy)
{
    this->strategy = strategy;
}

RacingStrategy* EngineeringTeam::getStrategy()
{
    return this->strategy;
}



