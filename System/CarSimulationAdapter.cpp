#include "CarSimulationAdapter.h"

CarSimulationAdapter::CarSimulationAdapter(RaceCar* r){
	this->car = r;
}

CarSimulationAdapter::~CarSimulationAdapter(){

}

void CarSimulationAdapter::setCar(RaceCar* r){
	this->car = r;
}

RaceCar* CarSimulationAdapter::getCar(){
	return this->car;
}


double CarSimulationAdapter::getEngineLevel(){
	double l = car->getEngine()->getHorsepower()/100;

	l *= car->getEngine()->getAirChargeRatio();

	l *= car->getEngine()->getCompressionRatio();

	l *= car->getEngine()->getHorsepower();

	return l;
}

double CarSimulationAdapter::getAerodynamicsLevel(){
	double l = 0;

	double widthCalc = 1 / (car->getAerodynamics()->getFrontWingWidth() - car->getAerodynamics()->getBackWingWidth());

	double df;

	// calculate difference from optimal
	if(car->getAerodynamics()->getDownForce() > 4000){
		df = car->getAerodynamics()->getDownForce() - 4000;
	}else{
		df = 4000 - car->getAerodynamics()->getDownForce();
	}

	l = widthCalc * 1/df;

	l *= 1/car->getAerodynamics()->getCFDrag();

	return l;
}

double CarSimulationAdapter::getChassisLevel(){
	double l = car->getChassis()->getTorque();

	l *= car->getChassis()->getPoissionRatio();

	return l;
}

double CarSimulationAdapter::getElectronicsLevel(){
	double l = car->getElectronics()->getPowerOutput();

	l *= car->getElectronics()->getAccSpeed()/1000;

	l *= 1/car->getElectronics()->getGearChangeSpeed();

	return l;
}