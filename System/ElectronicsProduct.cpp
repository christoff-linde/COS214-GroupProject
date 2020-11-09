#include "ElectronicsProduct.h"

ElectronicsProduct::ElectronicsProduct(string name, int durability, int coreFreq, int powerOutput, int accSpeed, int gearChangeSpeed)
{
   this->setName(name);
   this->setDurability(durability);
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

int ElectronicsProduct::getCoreFreq()
{
   return this->coreFreq;
}

int ElectronicsProduct::getPowerOutput()
{
   return this->powerOutput;
}

int ElectronicsProduct::getAccSpeed()
{
   return this->accSpeed;
}

int ElectronicsProduct::getGearChangeSpeed()
{
   return this->gearChangeSpeed;
}