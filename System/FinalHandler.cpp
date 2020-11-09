#include "FinalHandler.h"
#include <vector>
#include<string>
using namespace std;

FinalHandler::FinalHandler(std::vector<Team*> pos, RaceTrack* tk) {
    positions = pos;
    track = tk;
}


std::vector<Team*> FinalHandler::race(std::string raceDay) {
    if (raceDay == "final") {
        positions = track->getGridOrder();
        runRace();

        return positions;
    }
    else
    {
        return RaceHandler::race(raceDay);
    }

}