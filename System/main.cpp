#include "EngineeringTeam.h"
#include "Aggressive.h"
#include "LaidBack.h"
#include "Neutral.h"
#include "EngineTeam.h"
#include "ChassisTeam.h"
#include "ElectronicsTeam.h"
#include "AerodynamicsTeam.h"
#include "EngineeringStore.h"
#include <vector>
#include <iterator>
int main()
{
    // take in a strategy pointer 
    EngineeringStore* engineerStorage = new EngineeringStore;
    RacingStrategy* aggressive = new Aggressive();
    EngineeringTeam **currentYear = new EngineeringTeam *[4]; //array of engineeringteam pointers to store the factories
    vector <CarPart*> partsList;
    //initialising all the factories
    currentYear[0] = new EngineTeam(aggressive);
    currentYear[1] = new ChassisTeam(aggressive);
    currentYear[2] = new ElectronicsTeam(aggressive);
    currentYear[3] = new AerodynamicsTeam(aggressive);

    

    for (int i = 0; i < 4; i++)
    {
        partsList.push_back(currentYear[i]->createCarPart()); //adding the parts to the partslist 
        engineerStorage->addToList(currentYear[i]->createCarPart());
    }


RaceCar* currentCar = new RaceCar(partsList);
cout<<currentCar->getEngine()->getName()<<endl;

cout<<engineerStorage->getEngine()->getName()<<endl;

    return 0;
}