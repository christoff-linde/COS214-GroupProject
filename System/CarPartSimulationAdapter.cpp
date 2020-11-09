#include "CarPartSimulationAdapter.h"

CarPartSimulationAdapter::CarPartSimulationAdapter(CarPart* p){
	this->part = p;
}

CarPartSimulationAdapter::~CarPartSimulationAdapter(){

}

void CarPartSimulationAdapter::setCarPart(CarPart* p){
	this->part = p;
}

CarPart* CarPartSimulationAdapter::getCarPart(){
	return part;
}

double CarPartSimulationAdapter::getLevel(){
	// convert CarPart electronics attributes to a value
	// representing a VirtualRaceCar's electronicsLevel

	return 0;
}