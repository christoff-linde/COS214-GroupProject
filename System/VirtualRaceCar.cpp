#include "VirtualRaceCar.h"

VirtualRaceCar::VirtualRaceCar(){

}

VirtualRaceCar::~VirtualRaceCar(){

}

int VirtualRaceCar::getEngineLevel(){
	return engineLevel;
}

void VirtualRaceCar::setEngineLevel(int l){
	engineLevel = l;
}

int VirtualRaceCar::getAerodynamicsLevel(){
	return aerodynamicsLevel;
}

void VirtualRaceCar::setAerodynamicsLevel(int l){
	aerodynamicsLevel = l;
}

int VirtualRaceCar::getChassisLevel(){
	return chassisLevel;
}

void VirtualRaceCar::setChassisLevel(int l){
	chassisLevel = l;
}

int VirtualRaceCar::getElectronicsLevel(){
	return electronicsLevel;
}

void VirtualRaceCar::setElectronicsLevel(int l){
	electronicsLevel = l;
}