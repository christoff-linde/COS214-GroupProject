/**
 * @file PartsContainer.cpp
 * @author Christoff Linde
 * @brief Container holding CarParts
 * @version 0.1
 * @date 2020-11-06
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "PartsContainer.h"

PartsContainer::PartsContainer()
{}

PartsContainer::~PartsContainer()
{}

void PartsContainer::checkInventory()
{
    if (this->inventory.empty())
        std::cout << "Inventory Empty" << std::endl;
    else
    {
        std::cout << "PartsContainer Inventory:" << std::endl;
        for (auto&& part : inventory)
            part->print();
    }
}

void PartsContainer::clearInventory()
{
    this->inventory.clear();
}

void PartsContainer::addToInventory(CarPart* _part)
{
    this.inventory.push_back(_part);
}