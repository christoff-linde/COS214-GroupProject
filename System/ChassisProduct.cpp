#include "ChassisProduct.h"

ChassisProduct::ChassisProduct(string name, int durability, double torque, double poissonRatio, int wheelOverhang, int rearOverhang)
{
    this->setName(name);
    this->setDurability(durability);
    this->torque = torque;
    this->poissonRatio = poissonRatio;
    this->wheelOverhang = wheelOverhang;
    this->rearOverhang  = rearOverhang;
}

ChassisProduct::~ChassisProduct()
{

}

ChassisProduct::ChassisProduct()
{

}

double ChassisProduct::getTorque()
{
    return this->torque;
}

double ChassisProduct::getPoissionRatio()
{
    return this->poissonRatio;
}

int ChassisProduct::getWheelOverhang()
{
    return this->wheelOverhang;
}

int ChassisProduct::getRearOverhang()
{
    return this->rearOverhang;
}