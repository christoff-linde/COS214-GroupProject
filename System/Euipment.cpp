#include <iostream>
#include "Equipment.h"

void Equipment::print()
{
    std::cout << "\tName: " << this->name << "\tType:" << this->type << std::endl;
}