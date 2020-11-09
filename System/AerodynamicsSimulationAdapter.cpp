#include "AerodynamicsSimulationAdapter.h"

AerodynamicsSimulationAdapter::AerodynamicsSimulationAdapter(AerodynamicsProduct* part) : VirtualCarPart(part->getName()){
	this->part = part;
	calculateLevel();
}

AerodynamicsSimulationAdapter::~AerodynamicsSimulationAdapter(){

}

void AerodynamicsSimulationAdapter::calculateLevel(){
	double l = 0;

	double widthCalc;
	if(part->getFrontWingWidth() - part->getBackWingWidth() == 0){
		widthCalc = 1;
	}else{
		if(part->getFrontWingWidth() > part->getBackWingWidth()){
			widthCalc = 1 / (part->getFrontWingWidth() - part->getBackWingWidth());
		}else{
			widthCalc = 1 / (part->getBackWingWidth() - part->getFrontWingWidth());
		}
		
	}

	double df;

	// calculate difference from optimal
	if(part->getDownForce() > 4000){
		df = part->getDownForce() - 4000;
	}else{
		df = 4000 - part->getDownForce();
	}

	l = widthCalc * 1/df;

	l *= 1/part->getCFDrag();

	setLevel(1/l);
}

void AerodynamicsSimulationAdapter::setCarPart(AerodynamicsProduct* part){
	this->part = part;
}

AerodynamicsProduct* AerodynamicsSimulationAdapter::getCarPart(){
	return part;
}