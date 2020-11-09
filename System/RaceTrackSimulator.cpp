#include "RaceTrackSimulator.h"
#include <iostream>

using namespace std;

RaceTrackSimulator::RaceTrackSimulator(){

}

RaceTrackSimulator::~RaceTrackSimulator(){

}

void RaceTrackSimulator::simulate(){
	double length = subject->getTotalLength();
	int turns = subject->getTurns();
	double straight = subject->getLongestStraight();
	double difficulty = length*turns/straight;
	
	cout << "\033[4;37;Track simulation results:\033[0m" << endl;
	cout << "\033[1;38;42mTotal Length: \033[0m\033[38;42m" << length << "\033[0m" << endl;
	cout << "\033[1;38;42mTurns: \033[0m\033[38;42m" << turns << "\033[0m" << endl;
	cout << "\033[1;38;42mLongest straight: \033[0m\033[38;42m" << straight << "\033[0m" << endl;

	cout << "\033[4;37;42mDifficulty: \033[0m\033[1;4;37;42m" << difficulty << "\033[0m" << endl;
	setResult(difficulty);
}

void RaceTrackSimulator::setSubject(VirtualRaceTrack* subject){
	this->subject = subject;
}

VirtualRaceTrack* RaceTrackSimulator::getSubject(){
	return this->subject;
}