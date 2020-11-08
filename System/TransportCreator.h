/**
 * @file TransportCreator.h
 * @author Christoff Linde
 * @brief ConcreteCreator participant in the Factory Method pattern.
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(TRANSPORTCREATOR_H)
#define TRANSPORTCREATOR_H

#include "Shipment.h"

class TransportCreator : public Shipment
{
public:
    /**
     * @brief Construct a new Transport Creator object
     */
    TransportCreator();

    /**
     * @brief Create a Transport object
     * 
     * @return Transport* pointer to a Transport object
     */
    Transport* createTransport();
};

#endif // TRANSPORTCREATOR_H
