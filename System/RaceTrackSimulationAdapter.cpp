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
	return track;
}

int RaceTrackSimulationAdapter::getLevel(){
	// convert RaceTrack attributes to a something
	// representing a VirtualRaceTrack

	return 0;
}