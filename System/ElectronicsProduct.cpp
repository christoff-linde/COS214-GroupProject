#include "ElectronicsProduct.h"

ElectronicsProduct::ElectronicsProduct(string name, int coreFreq, int powerOutput, int accSpeed, int gearChangeSpeed)
{
   this->setName(name);
   this->coreFreq = coreFreq;
   this->powerOutput = powerOutput;
   this->accSpeed = accSpeed;
   this->gearChangeSpeed = gearChangeSpeed;
    
}

ElectronicsProduct::~ElectronicsProduct()
{

}

ElectronicsProduct::ElectronicsProduct()
{

}