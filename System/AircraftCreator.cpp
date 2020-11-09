/**
 * @file AircraftCreator.cpp
 * @author Christoff Linde
 * @brief Creator Participant creating a Aircraft
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "AircraftCreator.h"
#include "Aircraft.h"

Transport* AircraftCreator::createTransport()
{
    return new Aircraft();
}