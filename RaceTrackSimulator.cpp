#include "RaceTrackSimulator.h"

RaceTrackSimulator::RaceTrackSimulator(){

}

RaceTrackSimulator::~RaceTrackSimulator(){

}

void RaceTrackSimulator::simulate(){
	
}

void RaceTrackSimulator::setSubject(VirtualRaceTrack* subject){
	this->subject = subject;
}

VirtualRaceTrack* RaceTrackSimulator::getSubject(){
	return this->subject;
}