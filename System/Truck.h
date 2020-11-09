/**
 * @file Truck.h
 * @author Christoff Linde
 * @brief ConcreteProduct participant. Truck method of Transport
 * @version 0.2
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(TRUCK_H)
#define TRUCK_H

#include "Transport.h"

class Truck : public Transport
{
public:
    /**
     * @brief Construct a new Truck object
     */
    Truck();

    /**
     * @brief Destroy the Truck object
     */
    ~Truck();
};

#endif // TRUCK_H
