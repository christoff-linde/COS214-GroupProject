#include"RaceTrack.h"
#include<vector>

RaceTrack::RaceTrack(int laps, int turns, float length, int straight){
    this->numLaps = laps;
    this->turns = turns;
    this->length = length;
    this->longest = straight;
}
int RaceTrack::getNumLaps(){
    return numLaps;
}

int RaceTrack::getNumTurns(){
    return turns;
}

float RaceTrack::getTotalLength(){
    return length;
}

int RaceTrack::getLongestStraight(){
    return longest;
}

std::vector<Team*> RaceTrack::getGridOrder(){
    return gridOrder;
}

void RaceTrack::setGridOrder(std::vector<Team*> grid){
    gridOrder = grid;
}