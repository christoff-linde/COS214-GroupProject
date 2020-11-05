/**
 * @file Aircraft.h
 * @author Christoff Linde
 * @brief Aircraft method of Transport
 * @version 0.1
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
    Aircraft();
    ~Aircraft();
};

#endif // AIRCRAFT_H
