#include "CsSimulation.h"
#include "Simulator.h"
#include "CarSimulator.h"
#include "CarPartSimulator.h"
#include "VirtualCarPart.h"
#include "CarSimulationAdapter.h"
#include "ChassisSimulationAdapter.h"
#include "AerodynamicsSimulationAdapter.h"
#include "EngineSimulationAdapter.h"
#include "ElectronicsSimulationAdapter.h"
#include "Inactive.h"
#include "typeinfo"
#include <string>

using namespace std;

CsSimulation::CsSimulation(){
    cout<<"creating object"<<endl;
}
CsSimulation::~CsSimulation(){

}
void CsSimulation::handleChange(Components* c){
    // move part to inactive after testing
    c->setState(new Inactive());
}
void CsSimulation::doTest(RaceCar* car){
    // Create simulator
    Simulator* CarSim = new CarSimulator();
    // Create adapter for given car
    VirtualRaceCar* CarAdapter = new CarSimulationAdapter(car);

    // Set adapted car as the subject of the simulator
    CarSim->setSubject(CarAdapter);

    // Run simulation
    CarSim->runSimulator();

    // Can be used to retrieve the final value for comparison
    cout << CarSim->getResult() << endl;
}
void CsSimulation::doTest(CarPart* part){
    // Create empty objects to test type
    ChassisProduct* testChassis = new ChassisProduct("temp", 0, 0.0, 0.0, 0, 0);
    AerodynamicsProduct* testAero = new AerodynamicsProduct("temp", 0,  0.0, 0, 0, 0);
    EngineProduct* testEngine = new EngineProduct("temp", 0, 0, 0.0, 0.0, 0); 
    ElectronicsProduct* testElectric = new ElectronicsProduct("temp", 0, 0, 0, 0, 0);

    Simulator* PartSim = new CarPartSimulator();

    if(typeid(part) == typeid(testChassis)){
        VirtualCarPart* ChassisAdapter = new ChassisSimulationAdapter(dynamic_cast<ChassisProduct*>(part));
        PartSim->setSubject(ChassisAdapter);
    }else if(typeid(part) == typeid(testAero)){ 
        VirtualCarPart* AerodynamicsAdapter = new AerodynamicsSimulationAdapter(dynamic_cast<AerodynamicsProduct*>(part));
        PartSim->setSubject(AerodynamicsAdapter);
    }else if(typeid(part) == typeid(testEngine)){
        VirtualCarPart* EngineAdapter = new EngineSimulationAdapter(dynamic_cast<EngineProduct*>(part));
        PartSim->setSubject(EngineAdapter);
    }else if(typeid(part) == typeid(testElectric)){
        VirtualCarPart* ElectronicsAdapter = new ElectronicsSimulationAdapter(dynamic_cast<ElectronicsProduct*>(part));
        PartSim->setSubject(ElectronicsAdapter);
    } 

    cout<<"in cs simulations"<<endl;
    PartSim->runSimulator();

    // Can be used to retrieve the final value for comparison
    cout << PartSim->getResult() << endl;

    // Delete temporary parts
    delete testChassis;
    delete testAero;
    delete testEngine;
    delete testElectric;
}
