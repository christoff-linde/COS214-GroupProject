/**
 * @file CarPartContainer.cpp
 * @author Christoff Linde
 * @brief Container for CarPart's derived from Container
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CarPartContainer.h"

CarPartContainer::CarPartContainer()
{}

CarPartContainer::~CarPartContainer()
{
    for (auto&& carPart : inventory)
        delete carPart;

    this->inventory.clear();
}