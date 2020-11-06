#include "CarPartSimulator.h"

CarPartSimulator::CarPartSimulator(){

}

CarPartSimulator::~CarPartSimulator(){

}

void CarPartSimulator::simulate(){
	
}

void CarPartSimulator::setSubject(VirtualCarPart* subject){
	this->subject = subject;
}

VirtualCarPart* CarPartSimulator::getSubject(){
	return this->subject;
}