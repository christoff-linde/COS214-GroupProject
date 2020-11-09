#include "ChassisTeam.h"

ChassisTeam::ChassisTeam(RacingStrategy* strategy)
{
    this->setRacingStrategy(strategy);
}
ChassisTeam::~ChassisTeam()
{

}
CarPart* ChassisTeam::createCarPart()
{
    if(this->getStrategy()->getType() == "Aggressive")
    {
        CarPart* chassis = new ChassisProduct("Aggressive Chassis", 100, 700, 0.31 , 800 , 800);
        return chassis;
    }
    else if(this->getStrategy()->getType() == "Laid Back")
    {
        CarPart* chassis = new ChassisProduct("Laid back Chassis", 60, 500, 0.28 , 750 , 750);
        return chassis;
    }
    else if(this->getStrategy()->getType() == "Neutral")
    {
        CarPart* chassis = new ChassisProduct("Neutral Chassis", 80, 600, 0.30 , 775 , 775);
        return chassis;
    }
}
