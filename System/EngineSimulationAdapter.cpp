#include "EngineSimulationAdapter.h"

EngineSimulationAdapter::EngineSimulationAdapter(EngineProduct* part){
	this->part = part;
	calculateLevel();
}

EngineSimulationAdapter::~EngineSimulationAdapter(){

}

void EngineSimulationAdapter::calculateLevel(){
	int l = part->getHorsePower()/100;

	l *= part->getAirChargeRatio();

	l *= part->getCompressionRatio();

	l *= part->getHorsePower();

	setLevel(l);
}

void EngineSimulationAdapter::setCarPart(EngineProduct* part){
	this->part = part;
}

EngineProduct* EngineSimulationAdapter::getCarPart(){
	return part;
}