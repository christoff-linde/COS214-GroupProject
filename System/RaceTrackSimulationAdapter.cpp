#include "RaceTrackSimulationAdapter.h"

RaceTrackSimulationAdapter::RaceTrackSimulationAdapter(RaceTrack* t){
	this->track = t;
}

RaceTrackSimulationAdapter::~RaceTrackSimulationAdapter(){

}

void RaceTrackSimulationAdapter::setRaceTrack(RaceTrack* t){
	this->track = t;
}

RaceTrack* RaceTrackSimulationAdapter::getRaceTrack(){
	return this->track;
}

double RaceTrackSimulationAdapter::getScore(){
	return score;
}

double RaceTrackSimulationAdapter::getTotalLength(){
	return length;
}

int RaceTrackSimulationAdapter::getTurns(){
	return turns;
}

double RaceTrackSimulationAdapter::getLongestStraight(){
	return longestStraight;
}