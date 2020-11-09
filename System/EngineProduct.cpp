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
    this->setVoltage(voltage);
    this->setCompressionRatio(compressionRatio);
    this->setAirChargeRatio(airChargeRatio);
    this->setHorsePower(horsepower);
    
}

int EngineProduct::getVoltage()
{
    return this->voltage;
}

void EngineProduct::setVoltage(int voltage)
{
    this->voltage = voltage;
}

void EngineProduct::setCompressionRatio(double ratio)
{
    this->compressionRatio = ratio;
}

double EngineProduct::getCompressionRatio()
{
    return this->compressionRatio;
}

double EngineProduct::getAirChargeRatio()
{
    return this->airChargeRatio;
}

void EngineProduct::setAirChargeRatio(double airCharge)
{
    this->airChargeRatio = airCharge;
}

void EngineProduct::setHorsePower(int horsePower)
{
    this->horsepower = horsePower;
}

int EngineProduct::getHorsePower()
{
    return this->horsepower;
}