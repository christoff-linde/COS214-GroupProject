#include "EngineSimulationAdapter.h"

EngineSimulationAdapter::EngineSimulationAdapter(EngineProduct* part) : VirtualCarPart(part->getName()){
	this->part = part;
	calculateLevel();
}

EngineSimulationAdapter::~EngineSimulationAdapter(){

}

void EngineSimulationAdapter::calculateLevel(){
	double l = part->getHorsepower()/100;

	l *= part->getAirChargeRatio();

	l *= part->getCompressionRatio();

	l *= part->getHorsepower();

	setLevel(l);
}

void EngineSimulationAdapter::setCarPart(EngineProduct* part){
	this->part = part;
}

EngineProduct* EngineSimulationAdapter::getCarPart(){
	return part;
}

