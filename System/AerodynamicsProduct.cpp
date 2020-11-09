#include "AerodynamicsProduct.h"

AerodynamicsProduct::AerodynamicsProduct(string name, int durability, double cfDrag, int frontWingWidth, int backWingWidth, int downForce )
{
    this->setName(name);
    this->setDurability(durability);
    this->cfDrag = cfDrag;
    this->frontWingWidth = frontWingWidth;
    this->backWingWidth = backWingWidth;
    this->downForce = downForce; 
}

AerodynamicsProduct::~AerodynamicsProduct()
{

}

AerodynamicsProduct::AerodynamicsProduct()
{

}

double AerodynamicsProduct::getCFDrag()
{
    return this->cfDrag;
}

int AerodynamicsProduct::getFrontWingWidth()
{
    return this->frontWingWidth;
}

int AerodynamicsProduct::getBackWingWidth()
{
    return this->backWingWidth;
}

int AerodynamicsProduct::getDownForce()
{
    return this->downForce;
}