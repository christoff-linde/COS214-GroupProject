/**
 * @file Ship.h
 * @author Christoff Linde
 * @brief ConcreteProduct participant. Ship method of Transport
 * @version 0.2
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(SHIP_H)
#define SHIP_H

#include "Transport.h"

class Ship : public Transport
{
public:
    /**
     * @brief Construct a new Ship object
     */
    Ship();

    /**
     * @brief Destroy the Ship object
     */
    ~Ship();
};

#endif // SHIP_H