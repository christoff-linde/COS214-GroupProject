/**
 * @file CateringEquipment.cpp
 * @author Christoff Linde
 * @brief Implementation for CateringEquipment
 * @version 0.1
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CateringEquipment.h"

CateringEquipment::CateringEquipment()
{
    this->type = "CateringEquipment";
}

CateringEquipment::~CateringEquipment() {}

void CateringEquipment::print()
{
    std::cout << "Type: " << this->type << "\tName: " << this->name << std::endl;
}