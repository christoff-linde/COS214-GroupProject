#include "CarSimulator.h"

CarSimulator::CarSimulator(){

}

CarSimulator::~CarSimulator(){

}

void CarSimulator::simulate(){
	
}

void CarSimulator::setSubject(VirtualRaceCar* subject){
	this->subject = subject;
}

VirtualRaceCar* CarSimulator::getSubject(){
	return this->subject;
}