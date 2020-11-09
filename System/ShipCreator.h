/**
 * @file ShipCreator.h
 * @author Christoff Linde
 * @brief Creator Participant creating a Ship
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(SHIPCREATOR_H)
#define SHIPCREATOR_H

#include "TransportCreator.h"

class ShipCreator : public TransportCreator
{
public:
    /**
     * @brief Create a Transport object
     *
     * @return Transport* pointer to a Transport object
     */
    Transport* createTransport();
};

#endif // SHIPCREATOR_H
