#include "AerodynamicsProduct.h"

AerodynamicsProduct::AerodynamicsProduct(string name, double cfDrag, int frontWingWidth, int backWingWidth, int downForce )
{
    this->setName(name);
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