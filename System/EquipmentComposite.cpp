/**
 * @file EquipmentComposite.cpp
 * @author Christoff Linde
 * @brief Composite Participant. EquipmentComposite is composed of Equipment Components.
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "EquipmentComposite.h"

EquipmentComposite::EquipmentComposite()
{}

EquipmentComposite::~EquipmentComposite()
{
    for (auto&& equipment : inventory)
        delete equipment;

    this->inventory.clear();
}

void EquipmentComposite::add(Equipment* _equipment)
{
    this->inventory.push_back(_equipment);
}

void EquipmentComposite::listInventory()
{
    for (auto&& equipment : inventory)
        equipment->print();
}