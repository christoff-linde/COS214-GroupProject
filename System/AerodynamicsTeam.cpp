#include "AerodynamicsTeam.h"

AerodynamicsTeam::AerodynamicsTeam(RacingStrategy* strategy)
{
    this->setRacingStrategy(strategy);
}
AerodynamicsTeam::~AerodynamicsTeam()
{

}
CarPart* AerodynamicsTeam::createCarPart()
{
   if(this->getStrategy()->getType() == "Aggressive")
    {
        CarPart* aerodynamics = new AerodynamicsProduct("Agressive Aerodynamics", 100, 1.30, 2000, 950, 4500);
        this->getPartsList().push_back(aerodynamics);
        return aerodynamics; 
    }
    else if(this->getStrategy()->getType() == "Laid Back")
    {
        CarPart* aerodynamics = new AerodynamicsProduct("Laid back Aerodynamics", 60, 1.2, 1800 , 750 , 3800);
        this->getPartsList().push_back(aerodynamics);
        return aerodynamics;
    }
    else if(this->getStrategy()->getType() == "Neutral")
    {
        CarPart* aerodynamics = new AerodynamicsProduct("Neutral Aerodynamics", 80, 1.25, 1900 , 900 , 4200);
        this->getPartsList().push_back(aerodynamics);
        return aerodynamics;
    }
}
