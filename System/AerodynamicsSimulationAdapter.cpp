#include "AerodynamicsSimulationAdapter.h"

AerodynamicsSimulationAdapter::AerodynamicsSimulationAdapter(AerodynamicsProduct* part) : VirtualCarPart(part->getName()){
	this->part = part;
	calculateLevel();
}

AerodynamicsSimulationAdapter::~AerodynamicsSimulationAdapter(){

}

void AerodynamicsSimulationAdapter::calculateLevel(){
	double l = 0;

	double widthCalc = 1 / (part->getFrontWingWidth() - part->getBackWingWidth());

	double df;

	// calculate difference from optimal
	if(part->getDownForce() > 4000){
		df = part->getDownForce() - 4000;
	}else{
		df = 4000 - part->getDownForce();
	}

	l = widthCalc * 1/df;

	l *= 1/part->getCFDrag();

	setLevel(l);
}

void AerodynamicsSimulationAdapter::setCarPart(AerodynamicsProduct* part){
	this->part = part;
}

AerodynamicsProduct* AerodynamicsSimulationAdapter::getCarPart(){
	return part;
}