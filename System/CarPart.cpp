#include "CarPart.h"

CarPart::CarPart()
{

}

CarPart::CarPart(string name)
{
    this->setName(name);
}
CarPart::~CarPart()
{

}

void CarPart::setName(string name)
{
    this->name = name;
}