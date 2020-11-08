#include "RaceCar.h"

 RaceCar::RaceCar(list <CarPart*> partsList)
 {
     //iterate through parts and assign them to parts variables
     list <CarPart*> :: iterator it;
     for(it = partsList.begin(); it != partsList.end(); ++it)
     {
         if((*it)->getName().find("Engine") != string::npos)//meaning part name contains engine
         {
            EngineProduct carEngine = (*it);//problem is that it is of type carPart
         }
         else if((*it)->getName().find("Chassis") != string::npos)//meaning part name contains chassis
         {
            this->carChassis = (ChassisProduct)*it;//problem is that it is of type carPart
         }
         else if((*it)->getName().find("Electronics") != string::npos)
         {
             //assing pointers to these objects
         }
         else if((*it)->getName().find("Aerodynamics") != string::npos)
         {
             //assing pointers to these objects
         }
     }
 }

 RaceCar::RaceCar()
 {

 }

 RaceCar::~RaceCar()
 {

 }