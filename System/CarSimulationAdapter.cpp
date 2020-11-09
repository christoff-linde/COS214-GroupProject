#include "CarSimulationAdapter.h"

CarSimulationAdapter::CarSimulationAdapter(RaceCar* r){
	this->car = r;
}

CarSimulationAdapter::~CarSimulationAdapter(){

}

void CarSimulationAdaptersetCar(RaceCar* r){
	this->car = r;
}

RaceCar* CarSimulationAdaptergetCar(){
	return this->car;
}


double CarSimulationAdapter::getEngineLevel(){
	double l = car->getCarEngine()->getHorsePower()/100;

	l *= car->getCarEngine()->getAirChargeRatio();

	l *= car->getCarEngine()->getCompressionRatio();

	l *= car->getCarEngine()->getHorsePower();

	return l;
}

double CarSimulationAdapter::getAerodynamicsLevel(){
	double l = 0;

	double widthCalc = 1 / (car->getCarAerodynamics()->getFrontWingWidth() - car->getCarAerodynamics()->getBackWingWidth());

	double df;

	// calculate difference from optimal
	if(car->getCarAerodynamics()->getDownForce() > 4000){
		df = car->getCarAerodynamics()->getDownForce() - 4000;
	}else{
		df = 4000 - car->getCarAerodynamics()->getDownForce();
	}

	l = widthCalc * 1/df;

	l *= 1/car->getCarAerodynamics()->getCfDrag();

	return l;
}

double CarSimulationAdapter::getChassisLevel(){
	double l = car->getCarChassis()->getTorque();

	l *= car->getCarChassis()->getPoissonRatio();

	return l;
}

double CarSimulationAdapter::getElectronicsLevel(){
	double l = car->getCarElectronics()->getPowerOutput();

	l *= car->getCarElectronics()->getAccSpeed()/1000;

	l *= 1/car->getCarElectronics()->getGearChangeSpeed();

	return l;
}