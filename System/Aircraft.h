/**
 * @file Aircraft.h
 * @author Christoff Linde
 * @brief ConcreteProduct participant. Aircraft method of Transport
 * @version 0.2
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Transport.h"

#if !defined(AIRCRAFT_H)
#define AIRCRAFT_H

class Aircraft : public Transport
{
public:
    /**
     * @brief Construct a new Aircraft object
     */
    Aircraft();

    /**
     * @brief Destroy the Aircraft object
     */
    ~Aircraft();
};

#endif // AIRCRAFT_H
