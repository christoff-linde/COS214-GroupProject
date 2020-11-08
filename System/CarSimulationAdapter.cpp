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


int CarSimulationAdapter::getEngineLevel(){
	// convert RaceCars engine attributes to a value
	// representing a VirtualRaceCar's engineLevel

	return 0;
}

int CarSimulationAdapter::getAerodynamicsLevel(){
	// convert RaceCars aerodynamics attributes to a value
	// representing a VirtualRaceCar's aerodynamicsLevel

	return 0;
}

int CarSimulationAdapter::getChassisLevel(){
	// convert RaceCars chassis attributes to a value
	// representing a VirtualRaceCar's chassisLevel

	return 0;
}

int CarSimulationAdapter::getElectronicsLevel(){
	// convert RaceCars electronics attributes to a value
	// representing a VirtualRaceCar's electronicsLevel

	return 0;
}