#include "VirtualRaceCar.h"

VirtualRaceCar::VirtualRaceCar(){

}

VirtualRaceCar::~VirtualRaceCar(){

}

double VirtualRaceCar::getEngineLevel(){
	return engineLevel;
}

void VirtualRaceCar::setEngineLevel(double l){
	engineLevel = l;
}

double VirtualRaceCar::getAerodynamicsLevel(){
	return aerodynamicsLevel;
}

void VirtualRaceCar::setAerodynamicsLevel(double l){
	aerodynamicsLevel = l;
}

double VirtualRaceCar::getChassisLevel(){
	return chassisLevel;
}

void VirtualRaceCar::setChassisLevel(double l){
	chassisLevel = l;
}

double VirtualRaceCar::getElectronicsLevel(){
	return electronicsLevel;
}

void VirtualRaceCar::setElectronicsLevel(double l){
	electronicsLevel = l;
}