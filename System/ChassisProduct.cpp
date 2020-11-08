#include "ChassisProduct.h"

ChassisProduct::ChassisProduct(string name, double torque, double poissonRatio, int wheelOverhang, int rearOverhang)
{
    this->setName(name);
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