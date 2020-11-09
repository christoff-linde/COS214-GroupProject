/**
 * @file TruckCreator.h
 * @author Christoff Linde
 * @brief Creator Participant creating a Truck
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(TRUCKCREATOR_H)
#define TRUCKCREATOR_H

#include "TransportCreator.h"

class TruckCreator : public TransportCreator
{
public:
    /**
    * @brief Create a Transport object
    *
    * @return Transport* pointer to a Transport object
    */
    Transport* createTransport();
};

#endif // TRUCKCREATOR_H
