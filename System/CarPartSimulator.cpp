#include "CarPartSimulator.h"
#include <iostream>

using namespace std;

CarPartSimulator::CarPartSimulator(){

}

CarPartSimulator::~CarPartSimulator(){

}

void CarPartSimulator::simulate(){
	double score = subject->getLevel();
	cout << "\033[4;37;42mPart simulation results:\033[0m" << endl;
	cout << "\033[1;38;42mPart Type: \033[0m\033[38;42m" << subject->getName() << "\033[0m" << endl;

	cout << "\033[4;37;42mTotal: \033[0m\033[1;4;37;42m" << score << "\033[0m" << endl;
	setResult(score);
}

void CarPartSimulator::setSubject(VirtualCarPart* subject){
	this->subject = subject;
}

VirtualCarPart* CarPartSimulator::getSubject(){
	return this->subject;
}