#include "PracticeHandler.h"

using namespace std;

PracticeHandler::PracticeHandler(Race* race){
    event = race;
}

vector<Team*> PracticeHandler::race(string raceDay){
    if(raceDay == "practice"){
        runRace();
        return event->getPositions();
    }
    else
    {
        return RaceHandler::race(raceDay);
    }
    
}