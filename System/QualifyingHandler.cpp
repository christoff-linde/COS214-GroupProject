#include "QualifyingHandler.h"

using namespace std;

QualifyingHandler::QualifyingHandler(std::vector<Team*> pos, RaceTrack* tk){
    positions = pos;
    track = tk;
}

vector<Team*> QualifyingHandler::race(string raceDay){
    if(raceDay == "qualifying"){
        runRace();
        vector<Team*> grid;
        for(int i =0;i<positions.size();i++){
            grid.push_back(positions.back());
            positions.pop_back();
        }
        track->setGridOrder(grid);
        return grid;
    }
    else
    {
        return RaceHandler::race(raceDay);
    }
    
}