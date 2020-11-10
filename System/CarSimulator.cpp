#include "CarSimulator.h"
#include <iostream>

using namespace std;

CarSimulator::CarSimulator(){

}

CarSimulator::~CarSimulator(){

}

void CarSimulator::simulate(){
	int total = subject->getEngineLevel()+subject->getAerodynamicsLevel()+subject->getChassisLevel()+subject->getElectronicsLevel();
	double score = total/4;
	cout << "\033[4;37;42mCar simulation results:\033[0m" << endl;
	cout << "\033[1;38;42mEngine: \033[0m\033[38;42m" << subject->getEngineLevel() << "\033[0m" << endl;
	cout << "\033[1;38;42mAerodynamics: \033[0m\033[38;42m" << subject->getAerodynamicsLevel() << "\033[0m" << endl;
	cout << "\033[1;38;42mChassis: \033[0m\033[38;42m" << subject->getChassisLevel() << "\033[0m" << endl;
	cout << "\033[1;38;42mElectronics: \033[0m\033[38;42m" << subject->getElectronicsLevel() << "\033[0m" << endl << endl;

	cout << "\033[4;37;42mTotal: \033[0m\033[1;4;37;42m" << score << "\033[0m" << endl;
	setResult(score);
}

void CarSimulator::setSubject(VirtualRaceCar* subject){
	this->subject = subject;
}
void CarSimulator::setSubject(VirtualCarPart* subject){
}

VirtualRaceCar* CarSimulator::getSubject(){
	return this->subject;
}