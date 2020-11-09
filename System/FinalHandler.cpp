#include "FinalHandler.h"

using namespace std;

FinalHandler::FinalHandler(Race* race){
    event = race;
}


vector<Team*> FinalHandler::race(string raceDay){
    if(raceDay == "final"){
        event->setPositions(event->getTrack()->getGridOrder());
        runRace();
        return event->getPositions();
    }
    else
    {
        return RaceHandler::race(raceDay);
    }
    
}