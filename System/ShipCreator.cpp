/**
 * @file ShipCreator.cpp
 * @author Christoff Linde
 * @brief Creator Participant creating a Ship
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ShipCreator.h"
#include "Ship.h"

Transport* ShipCreator::createTransport()
{
    return new Ship();
}