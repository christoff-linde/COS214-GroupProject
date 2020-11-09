#include "Simulator.h"
#include <iostream>

using namespace std;

Simulator::Simulator(){
	result = 0;
	cout << "New simulator created" << endl;
}

Simulator::~Simulator(){
	
}

void Simulator::runSimulator(){
	cout << "Running simulation..." << endl;
	simulate();
	cout << "Simulation complete. " << endl;
}

void Simulator::setResult(double result){
	this->result = result;
}

double Simulator::getResult(){
	return this->result;
}

void Simulator::setSubject(VirtualRaceCar* subject){

}

void Simulator::setSubject(VirtualCarPart* subject){
	
}