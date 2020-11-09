#include "ElectronicsTeam.h"

ElectronicsTeam::ElectronicsTeam(RacingStrategy* strategy)
{
    this->setRacingStrategy(strategy);
}
ElectronicsTeam::~ElectronicsTeam()
{

}
CarPart* ElectronicsTeam::createCarPart()
{
    //call pointer to strategy to get Electronics specs
    if(this->getStrategy()->getType() == "Aggressive")
    {
        CarPart* electronics = new ElectronicsProduct("Agressive Electronics", 100,200, 560, 1800, 100);
        this->getPartsList().push_back(electronics);
        return electronics; 
    }
    else if(this->getStrategy()->getType() == "Laid Back")
    {
        CarPart* electronics = new ElectronicsProduct("Laid back Electronics", 60, 170, 500 , 1600 , 130);
        this->getPartsList().push_back(electronics);
        return electronics;
    }
    else if(this->getStrategy()->getType() == "Neutral")
    {
        CarPart* electronics = new ElectronicsProduct("Neutral Electronics", 80, 190, 530 , 1700 , 115);
        this->getPartsList().push_back(electronics);
        return electronics;
    }
}