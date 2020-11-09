#include "ChassisSimulationAdapter.h"

ChassisSimulationAdapter::ChassisSimulationAdapter(ChassisProduct* part){
	this->part = part;
	calculateLevel();
}

ChassisSimulationAdapter::~ChassisSimulationAdapter(){

}

void ChassisSimulationAdapter::calculateLevel(){
	double l = part->getTorque();

	l *= part->getPoissonRatio();

	setLevel(l);
}

void ChassisSimulationAdapter::setCarPart(ChassisProduct* part){
	this->part = part;
}

ChassisProduct* ChassisSimulationAdapter::getCarPart(){
	return part;
}