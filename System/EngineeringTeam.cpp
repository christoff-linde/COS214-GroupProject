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

list <CarPart*> EngineeringTeam::getPartsList()
{
    return this->partsList;
}

/*RaceCar* EngineeringTeam::assembleCar(list <CarPart*> partsList)
{
    RaceCar *newCar = new RaceCar(partsList);
    this->raceCar = newCar;
}

void EngineeringTeam::setRaceCar(RaceCar* car)
{
    this->raceCar  = car;
}

RaceCar* EngineeringTeam::getRaceCar()
{
    return this->raceCar;
}*/

