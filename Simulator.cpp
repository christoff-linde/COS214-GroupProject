#include "Simulator.h"

Simulator::Simulator(){
	result = 0;
}

Simulator::~Simulator(){
	
}

void Simulator::runSimulator(){
	result = 0;
	simulate();
}

void Simulator::setResult(double result){
	this->result = result;
}

double Simulator::getResult(){
	return this->result;
}