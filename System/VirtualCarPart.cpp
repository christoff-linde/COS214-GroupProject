#include "VirtualCarPart.h"

VirtualCarPart::VirtualCarPart(){

}

VirtualCarPart::~VirtualCarPart(){

}

int VirtualCarPart::getLevel(){
	return level;
}

void VirtualCarPart::setLevel(int l){
	level = l;
}

void VirtualCarPart::setName(string n){
	this->name = n;
}

string VirtualCarPart::getName(){
	return name;
}