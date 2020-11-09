#include "ElectronicsSimulationAdapter.h"

ElectronicsSimulationAdapter::ElectronicsSimulationAdapter(ElectronicsProduct* part){
	this->part = part;
	calculateLevel();
}

ElectronicsSimulationAdapter::~ElectronicsSimulationAdapter(){

}

void ElectronicsSimulationAdapter::calculateLevel(){
	int l = part->getPowerOutput();

	l *= part->getAccSpeed()/1000;

	l *= 1/part->getGearChangeSpeed();

	setLevel(l);
}

void ElectronicsSimulationAdapter::setCarPart(ElectronicsProduct* part){
	this->part = part;
}

ElectronicsProduct* ElectronicsSimulationAdapter::getCarPart(){
	return part;
}