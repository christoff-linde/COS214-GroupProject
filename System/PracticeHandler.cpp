#include "PracticeHandler.h"
#include <vector>
#include<string>
using namespace std;

PracticeHandler::PracticeHandler(std::vector<Team*> pos, RaceTrack* tk){
    positions = pos;
    track = tk;
}

vector<Team*> PracticeHandler::race(std::string raceDay){
    if(raceDay == "practice"){
        runRace();
        return positions;
    }
    else
    {
        return RaceHandler::race(raceDay);
    }
    
}