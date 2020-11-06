/**
 * @file EquipmentContainer.cpp
 * @author Christoff Linde
 * @brief Container holding Equipment
 * @version 0.1
 * @date 2020-11-06
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "EquipmentContainer.h"

EquipmentContainer::EquipmentContainer()
{}

EquipmentContainer::~EquipmentContainer()
{}

void EquipmentContainer::checkInventory()
{
    if (this->inventory.empty())
        std::cout << "Inventory Empty" << std::endl;
    else
    {
        std::cout << "EquipmentContainer Inventory:" << std::endl;
        for (auto&& equipment : inventory)
            equipment->print();
    }
}

void EquipmentContainer::clearInventory()
{
    this->inventory.clear();
}

void EquipmentContainer::addToInventory(Equipment* _equipment)
{
    this->inventory.push_back(_equipment);
}