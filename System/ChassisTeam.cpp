#include "ChassisTeam.h"

ChassisTeam::ChassisTeam()
{

}
ChassisTeam::~ChassisTeam()
{

}
CarPart* ChassisTeam::createCarPart()
{
    if(this->getStrategy()->getType() == "Aggressive")
    {
        CarPart* chassis = new ChassisProduct("Agressive Chassis", 700, 0.31 , 800 , 800);
        this->getPartsList().push_back(chassis);
        return chassis;
    }
    else if(this->getStrategy()->getType() == "Laid Back")
    {
        CarPart* chassis = new ChassisProduct("Laid back Chassis", 500, 0.28 , 750 , 750);
        this->getPartsList().push_back(chassis);
        return chassis;
    }
    else if(this->getStrategy()->getType() == "Neutral")
    {
        CarPart* chassis = new ChassisProduct("Neutral Chassis", 600, 0.30 , 775 , 775);
        this->getPartsList().push_back(chassis);
        return chassis;
    }
}
