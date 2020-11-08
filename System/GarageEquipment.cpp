/**
 * @file GarageEquipment.cpp
 * @author Christoff Linde
 * @brief Implementation of GarageEquipment
 * @version 0.1
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "GarageEquipment.h"

GarageEquipment::GarageEquipment()
{
    this->type = "GarageEquipment";
}

GarageEquipment::~GarageEquipment() {}

void GarageEquipment::print()
{
    std::cout << "\tType: " << this->type << "\tName: " << this->name << std::endl;
}