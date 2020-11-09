#include "EngineeringStore.h"

EngineeringStore::EngineeringStore()
{}

EngineeringStore::~EngineeringStore()
{
   for (auto&& part : partsList)
      delete part;

   for (auto&& subscriber : subscriberList)
      delete subscriber;
}

void EngineeringStore::addToList(CarPart* carPart)
{
   this->partsList.push_back(carPart);
}

vector <CarPart*> EngineeringStore::getPartsList()
{
   return this->partsList;
}

vector <CarPart*> EngineeringStore::getStrategyList(string strategy)
{
   vector <CarPart*> strategyList;
   vector <CarPart*> ::iterator it;
   for (it = partsList.begin(); it != partsList.end(); ++it)
   {
      if ((*it)->getName().find("Engine") != string::npos && (*it)->getName().find(strategy) != string::npos)
      {
         strategyList.push_back(*it);
      }
      else if ((*it)->getName().find("Chassis") != string::npos && (*it)->getName().find(strategy) != string::npos)
      {
         strategyList.push_back(*it);
      }
      else if ((*it)->getName().find("Electronics") != string::npos && (*it)->getName().find(strategy) != string::npos)
      {
         strategyList.push_back(*it);
      }
      else if ((*it)->getName().find("Aerodynamics") != string::npos && (*it)->getName().find(strategy) != string::npos)
      {
         strategyList.push_back(*it);
      }
   }

   return strategyList;
}

EngineProduct* EngineeringStore::getEngine()
{
   vector <CarPart*> ::iterator it;
   for (it = partsList.begin(); it != partsList.end(); ++it)
   {
      if ((*it)->getName().find("Engine") != string::npos)
         return dynamic_cast<EngineProduct*>(*it);
   }
}

ChassisProduct* EngineeringStore::getChassis()
{
   vector <CarPart*> ::iterator it;
   for (it = partsList.begin(); it != partsList.end(); ++it)
   {
      if ((*it)->getName().find("Chassis") != string::npos)
         return dynamic_cast<ChassisProduct*>(*it);
   }
}

AerodynamicsProduct* EngineeringStore::getAerodynamics()
{
   vector <CarPart*> ::iterator it;
   for (it = partsList.begin(); it != partsList.end(); ++it)
   {
      if ((*it)->getName().find("Electronics") != string::npos)
         return dynamic_cast<AerodynamicsProduct*>(*it);
   }
}

ElectronicsProduct* EngineeringStore::getElectronics()
{
   vector <CarPart*> ::iterator it;
   for (it = partsList.begin(); it != partsList.end(); ++it)
   {
      if ((*it)->getName().find("Aerodynamics") != string::npos)
         return dynamic_cast<ElectronicsProduct*>(*it);
   }
}

void EngineeringStore::subscribe(Subscriber* _subscriber)
{
   this->subscriberList.push_back(_subscriber);
}

void EngineeringStore::unsubscribe(Subscriber* _subscriber)
{
   vector<Subscriber*>::iterator index;
   index = find(subscriberList.begin(), subscriberList.end(), _subscriber);

   if (index != subscriberList.end())
      subscriberList.erase(index);
}

void EngineeringStore::notifySubscribers(Race* _race)
{
   for (auto&& subscriber : subscriberList)
      subscriber->update(this->partsList, this->getStrategyList(), _race);
}