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

string CarPart::getName()
{
    return this->name;
}

int CarPart::getDurability()
{
    return this->durability;
}

void CarPart::setDurability(int durability)
{
    this->durability = durability;
}