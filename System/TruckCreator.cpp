/**
 * @file TruckCreator.cpp
 * @author Christoff Linde
 * @brief Creator Participant creating a Truck
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "TruckCreator.h"
#include "Truck.h"

Transport* TruckCreator::createTransport()
{
    return new Truck();
}