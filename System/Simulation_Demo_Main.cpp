#include "EngineProduct.h"
#include "Simulator.h"
#include "VirtualRaceCar.h"
#include "EngineSimulationAdapter.h"
#include "CarPartSimulator.h"
#include "VirtualCarPart.h"
#include "AerodynamicsProduct.h"
#include "AerodynamicsSimulationAdapter.h"
#include "ChassisProduct.h"
#include "ChassisSimulationAdapter.h"
#include "ElectronicsProduct.h"
#include "ElectronicsSimulationAdapter.h"

int main()
{

	EngineProduct* eg = new EngineProduct("Engine", 10, 120, 2.5, 1.7, 540);

	cout << "Testing Engine Part Simulator:"<< endl;
	Simulator* testSim1 = new CarPartSimulator();
	VirtualCarPart* vEngine = new EngineSimulationAdapter(eg);
	testSim1->setSubject(vEngine);
	testSim1->runSimulator();
	cout << "The result was: " << testSim1->getResult() << endl;
	delete vEngine;
	delete testSim1;
	delete eg;
	cout << "End of Engine Part Simulator Testing" << endl;
	cout << endl;

	AerodynamicsProduct* air = new AerodynamicsProduct("Aerodynamics", 10, 1.0, 12, 13, 2300);

	cout << "Testing Aerodynamics Part Simulator:"<< endl;
	Simulator* testSim2 = new CarPartSimulator();
	VirtualCarPart* vAero = new AerodynamicsSimulationAdapter(air);
	testSim2->setSubject(vAero);
	testSim2->runSimulator();
	cout << "The result was: " << testSim2->getResult() << endl;
	delete vAero;
	delete testSim2;
	delete air;
	cout << "End of Aerodynamics Part Simulator Testing" << endl;
	cout << endl;

	ChassisProduct* chas = new ChassisProduct("Chassis", 10, 420, 12, 12, 21);

	cout << "Testing Chassis Part Simulator:"<< endl;
	Simulator* testSim3 = new CarPartSimulator();
	VirtualCarPart* vChas = new ChassisSimulationAdapter(chas);
	testSim3->setSubject(vChas);
	testSim3->runSimulator();
	cout << "The result was: " << testSim3->getResult() << endl;
	delete vChas;
	delete testSim3;
	delete chas;
	cout << "End of Chassis Part Simulator Testing" << endl;
	cout << endl;

	ElectronicsProduct* ele = new ElectronicsProduct("Electronics", 10, 360, 480, 3500, 100);

	cout << "Testing Electronics Part Simulator:"<< endl;
	Simulator* testSim4 = new CarPartSimulator();
	VirtualCarPart* vElec = new ElectronicsSimulationAdapter(ele);
	testSim4->setSubject(vElec);
	testSim4->runSimulator();
	cout << "The result was: " << testSim4->getResult() << endl;
	delete vElec;
	delete testSim4;
	delete ele;
	cout << "End of Electronics Part Simulator Testing" << endl;
	cout << endl; 

    return 0;
}