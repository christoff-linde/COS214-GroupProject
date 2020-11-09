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

double VirtualRaceTrack::getLength(){
	return length;
}

int VirtualRaceTrack::getTurns(){
	return turns;
}

double VirtualRaceTrack::getlongestStraight(){
	return longestStraight;
}