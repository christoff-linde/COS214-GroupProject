#include "EngineeringTeam.h"

EngineeringTeam::EngineeringTeam(RacingStrategy* strategy)
{

}

EngineeringTeam::EngineeringTeam()
{

}

EngineeringTeam::~EngineeringTeam()
{

}

RacingStrategy* EngineeringTeam::getStrategy()
{
    return this->strategy;
}

list <CarPart*> EngineeringTeam::getPartsList()
{
    return this->partsList;
}

RaceCar* EngineeringTeam::assembleCar(list <CarPart*> partsList)
{
    RaceCar *newCar = new RaceCar(partsList);
    this->raceCar = newCar;
}

