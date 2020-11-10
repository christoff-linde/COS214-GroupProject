#include "Race.h"
#include "EngineeringTeam.h"
#include "Aggressive.h"
#include "LaidBack.h"
#include "Neutral.h"
#include "EngineTeam.h"
#include "ChassisTeam.h"
#include "ElectronicsTeam.h"
#include "AerodynamicsTeam.h"
#include "EngineeringStore.h"
#include "Components.h"
#include "CsSimulation.h"
#include "CarPartSimulator.h"
#include "EngineSimulationAdapter.h"

#include <iterator>
#include <vector>
#include <iostream>
using namespace std;
int main()
{

  EngineeringStore* engineerStorage = new EngineeringStore();
  RacingStrategy* aggressive = new Aggressive();
  EngineeringTeam** currentYear = new EngineeringTeam * [4]; //array of engineeringteam pointers to store the factories
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


  RaceCar* currentCar = new RaceCar(engineerStorage->getStrategyList("Aggressive"));
  cout << currentCar->getEngine()->getName() << endl;

  cout << engineerStorage->getEngine()->getName() << endl;

  //TESTING

     // Components* component = new Components();
     // component->setState(new CsSimulation());
      //cout<<"haha yes"<<endl;
     //component->doTest(engineerStorage->getEngine());
      //component->doTest(currentCar);
   //   component->doTest(chas);
    //  component->doTest(ele);


  //end testing


  //SIMULATOR

  Simulator* testSim1 = new CarPartSimulator();
  VirtualCarPart* vEngine = new EngineSimulationAdapter(engineerStorage->getEngine());

  testSim1->setSubject(vEngine);

  testSim1->runSimulator();
  cout << "The result was: " << testSim1->getResult() << endl;
  //end simulator







  RaceTrack* track1 = new RaceTrack(20, 4, 3.0, 3);
  RaceTrack* track2 = new RaceTrack(20, 4, 3.0, 3);
  RaceTrack* track3 = new RaceTrack(20, 4, 3.0, 3);
  RaceTrack* track4 = new RaceTrack(20, 4, 3.0, 3);
  RaceTrack* track5 = new RaceTrack(20, 4, 3.0, 3);


  Race* race1 = new Race("Barcelona", "18 Feb", track1);
  Race* race2 = new Race("Barcelona", "18 Feb", track1);
  Race* race3 = new Race("France", "18 Feb", track2);
  Race* race4 = new Race("Italy", "18 Feb", track3);
  Race* race5 = new Race("Spain", "18 Feb", track4);
  Race* race6 = new Race("Zimbabwe", "18 Feb", track5);

  std::vector<Race*> racelist;
  racelist.push_back(race1);
  racelist.push_back(race2);
  racelist.push_back(race3);
  racelist.push_back(race4);
  racelist.push_back(race5);
  racelist.push_back(race6);

  Team* team1 = new Team();
  Team* team2 = new Team();
  Team* team3 = new Team();
  Team* team4 = new Team();
  Team* team5 = new Team();
  Team* team6 = new Team();
  Team* team7 = new Team();
  Team* team8 = new Team();
  Team* team9 = new Team();
  Team* team10 = new Team();


  std::vector<Team*> teamlist;
  teamlist.push_back(team1);
  teamlist.push_back(team2);
  teamlist.push_back(team3);
  teamlist.push_back(team4);
  teamlist.push_back(team5);
  teamlist.push_back(team6);
  teamlist.push_back(team7);
  teamlist.push_back(team8);
  teamlist.push_back(team9);
  teamlist.push_back(team10);



  for (auto race : racelist) {
    race->RegisterTeams(teamlist);
  }

  race1->runRaces();

  cout << race1->getPoints(team5) << endl;
  int size = race1->getPositions().size();
  cout << "lol" << endl;

  return 0;
}