/**
 * @file Transport.h
 * @author Christoff Linde
 * @brief Abstract Interface for the Factory Method for Transport used by a Shipment
 * @version 0.2
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(TRANSPORT_H)
#define TRANSPORT_H

#include <string>

class Transport
{
protected:
    std::string name; /** Specifies the name of Transport */
};

#endif // TRANSPORT_H
