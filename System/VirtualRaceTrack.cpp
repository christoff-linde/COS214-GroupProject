#include "VirtualRaceTrack.h"

VirtualRaceTrack::VirtualRaceTrack(){

}

VirtualRaceTrack::~VirtualRaceTrack(){

}

double VirtualRaceTrack::getScore(){
	return score;
}

void VirtualRaceTrack::setScore(double s){
	score = s;
}

double VirtualRaceTrack::getTotalLength(){
	return length;
}

int VirtualRaceTrack::getTurns(){
	return turns;
}

double VirtualRaceTrack::getLongestStraight(){
	return longestStraight;
}