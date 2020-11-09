#include "VirtualCarPart.h"

VirtualCarPart::VirtualCarPart(string name){
	this->name = name;
}

VirtualCarPart::~VirtualCarPart(){

}

double VirtualCarPart::getLevel(){
	return level;
}

void VirtualCarPart::setLevel(double l){
	level = l;
}

void VirtualCarPart::setName(string n){
	this->name = n;
}

string VirtualCarPart::getName(){
	return name;
}