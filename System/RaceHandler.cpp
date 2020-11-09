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

vector<Team*> RaceHandler::race(string raceDay){
    if(this->next){
        return this->next->race(raceDay);
    }
    else return {};
}

void RaceHandler::runRace(){
    if(event){
        vector<Team*> temp = event->getPositions();
        random_device rng;
        for(int i = 0;i< event->getTrack()->getNumLaps(); i++){
            shuffle( temp.begin(), temp.end(), rng);
        }
        event->setPositions(temp);
    }
    
}
