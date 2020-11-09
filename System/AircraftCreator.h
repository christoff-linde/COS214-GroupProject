/**
 * @file AircraftCreator.h
 * @author Christoff Linde
 * @brief Creator Participant creating a Aircraft
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(AIRCRAFTCREATOR_H)
#define AIRCRAFTCREATOR_H

#include "TransportCreator.h"

class AircraftCreator : public TransportCreator
{
public:
    /**
     * @brief Create a Transport object
     *
     * @return Transport* pointer to a Transport object
     */
    Transport* createTransport();
};

#endif // AIRCRAFTCREATOR_H