#include "EngineProduct.h"

 EngineProduct::EngineProduct()
 {

 }

EngineProduct::~EngineProduct()
{

}

EngineProduct::EngineProduct(string name, int durability, int voltage, double compressionRatio, double airChargeRatio, int horsepower)
{
    this->setName(name);
    this->setDurability(durability);
    this->voltage = voltage;
    this->compressionRatio = compressionRatio;
    this->airChargeRatio = airChargeRatio;
    this->horsepower = horsepower;
    
}

int EngineProduct::getVoltage()
{
    return this->voltage;
}

double EngineProduct::getCompressionRatio()
{
    return this->compressionRatio;
}

double EngineProduct::getAirChargeRatio()
{
    return this->airChargeRatio;
}

int EngineProduct::getHorsepower()
{
    return this->horsepower;
}