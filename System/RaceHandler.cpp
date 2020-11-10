#include <algorithm> 
#include <random> 
#include <string>
#include <vector>

#include "RaceHandler.h"

using namespace std;

RaceHandler* RaceHandler::setNext(RaceHandler* handler){
    this->next = handler;
    return handler;
}

std::vector<Team*> RaceHandler::race(std::string raceDay){
    if(this->next){
        return this->next->race(raceDay);
    }
    else return {};
}

void RaceHandler::runRace(){
        random_device rng;
        for(int i = 0;i< track->getNumLaps(); i++){
            shuffle( positions.begin(), positions.end(), rng);
        }
}
