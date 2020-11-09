#include "QualifyingHandler.h"

using namespace std;

QualifyingHandler::QualifyingHandler(Race* race){
    event = race;
}

vector<Team*> QualifyingHandler::race(string raceDay){
    if(raceDay == "qualifying"){
        runRace();
        vector<Team*> grid;
        for(int i =0;i<event->getPositions().size();i++){
            grid.push_back(event->getPositions().back());
            event->getPositions().pop_back();
        }
        event->getTrack()->setGridOrder(grid);
        return grid;
    }
    else
    {
        return RaceHandler::race(raceDay);
    }
    
}