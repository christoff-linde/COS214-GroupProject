#include "EngineeringStore.h"

EngineeringStore::EngineeringStore()
{

}

EngineeringStore::~EngineeringStore()
{

}

void EngineeringStore::addToList(CarPart* carPart)
{
    this->partsList.push_back(carPart); 
}

vector <CarPart*> EngineeringStore::getPartsList()
{
    return this->partsList;
}

EngineProduct* EngineeringStore::getEngine()
{
     vector <CarPart*> :: iterator it;
     for(it = partsList.begin(); it != partsList.end(); ++it)
     {
         if((*it)->getName().find("Engine") != string::npos)
         {
            return dynamic_cast<EngineProduct*>(*it);
         }
    
     }
}

vector <CarPart*> EngineeringStore::getStrategyList(string strategy)
{
    vector <CarPart*> strategyList;
   vector <CarPart*> :: iterator it;
     for(it = partsList.begin(); it != partsList.end(); ++it)
     {
       if((*it)->getName().find("Engine") != string::npos && (*it)->getName().find(strategy) != string::npos)
         {
            strategyList.push_back(*it);
         }
         else if((*it)->getName().find("Chassis") != string::npos && (*it)->getName().find(strategy) != string::npos)
         {
            strategyList.push_back(*it);
         }
         else if((*it)->getName().find("Electronics") != string::npos && (*it)->getName().find(strategy) != string::npos)
         {
            strategyList.push_back(*it);
         }
         else if((*it)->getName().find("Aerodynamics") != string::npos && (*it)->getName().find(strategy) != string::npos)
         {
            strategyList.push_back(*it);
         }
        
     } 
     return strategyList;
}

ChassisProduct* EngineeringStore::getChassis()
{
      vector <CarPart*> :: iterator it;
     for(it = partsList.begin(); it != partsList.end(); ++it)
     {
       if((*it)->getName().find("Chassis") != string::npos)
         {
            return dynamic_cast<ChassisProduct*>(*it);
         }
        
     }
}

AerodynamicsProduct* EngineeringStore::getAerodynamics()
{
      vector <CarPart*> :: iterator it;
     for(it = partsList.begin(); it != partsList.end(); ++it)
     {
      
         if((*it)->getName().find("Electronics") != string::npos)
         {
            return dynamic_cast<AerodynamicsProduct*>(*it); 
         }
    
     }
}

ElectronicsProduct* EngineeringStore::getElectronics()
{
      vector <CarPart*> :: iterator it;
     for(it = partsList.begin(); it != partsList.end(); ++it)
     {
         if((*it)->getName().find("Aerodynamics") != string::npos)
         {
            return dynamic_cast<ElectronicsProduct*>(*it);
         }
     }
}