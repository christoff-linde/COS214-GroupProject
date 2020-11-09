#include "RaceCar.h"

 RaceCar::RaceCar(vector <CarPart*> partsList)
 {
    
     vector <CarPart*> :: iterator it;
     for(it = partsList.begin(); it != partsList.end(); ++it)
     {
         if((*it)->getName().find("Engine") != string::npos)
         {
            this->carEngine = dynamic_cast<EngineProduct*>(*it);
         }
         else if((*it)->getName().find("Chassis") != string::npos)
         {
            this->carChassis = dynamic_cast<ChassisProduct*>(*it);
         }
         else if((*it)->getName().find("Electronics") != string::npos)
         {
            this->carElectronics = dynamic_cast<ElectronicsProduct*>(*it); 
         }
         else if((*it)->getName().find("Aerodynamics") != string::npos)
         {
            this->carAerodynamics = dynamic_cast<AerodynamicsProduct*>(*it);
         }
     }
 }

EngineProduct* RaceCar::getEngine()
{
   return this->carEngine;
}

ChassisProduct* RaceCar::getChassis()
{
   return this->carChassis;
}

AerodynamicsProduct* RaceCar::getAerodynamics()
{
   return this->carAerodynamics;
}

ElectronicsProduct* RaceCar::getElectronics()
{
   return this->carElectronics;
}

 RaceCar::RaceCar()
 {

 }

 RaceCar::~RaceCar()
 {

 }