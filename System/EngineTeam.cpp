#include "EngineTeam.h"

EngineTeam::EngineTeam()
{

}

EngineTeam::~EngineTeam()
{

}
CarPart* EngineTeam::createCarPart()
{
    if(this->getStrategy()->getType() == "Aggressive")
    {
        CarPart* engine = new EngineProduct("Agressive Engine", 100, 1200, 18.0, 2.5,  800);//maybe set base material
        this->getPartsList().push_back(engine);
        return engine; //hopefully works
    }
    else if(this->getStrategy()->getType() == "Laid Back")
    {
        CarPart* engine = new EngineProduct("Laid back Engine", 70, 900, 12.0, 0.85,  500);
        this->getPartsList().push_back(engine);

        return engine;
    }
    else if(this->getStrategy()->getType() == "Neutral")
    {
        CarPart* engine = new EngineProduct("Neutral Engine", 85, 1050, 15.0, 1.5,  500);
        this->getPartsList().push_back(engine);
        return engine;
    }
}

