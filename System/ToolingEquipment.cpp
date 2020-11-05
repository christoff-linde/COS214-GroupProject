/**
 * @file ToolingEquipment.cpp
 * @author Christoff Linde
 * @brief Implementation of ToolingEquipment
 * @version 0.1
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ToolingEquipment.h"

ToolingEquipment::ToolingEquipment()
{
    this->type = "ToolingEquipment";
}

ToolingEquipment::~ToolingEquipment() {}

void ToolingEquipment::print()
{
    std::cout << "Type: " << this->type << "\tName: " << this->name << std::endl;
}