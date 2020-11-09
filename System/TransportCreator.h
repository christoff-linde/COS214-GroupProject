/**
 * @file TransportCreator.h
 * @author Christoff Linde
 * @brief ConcreteCreator participant in the Factory Method pattern.
 * @version 0.2
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(TRANSPORTCREATOR_H)
#define TRANSPORTCREATOR_H

#include "Transport.h"

class TransportCreator
{
public:
    /**
     * @brief Create a Transport object
     *
     * @return Transport* pointer to a Transport object
     */
    virtual Transport* createTransport() = 0;
};

#endif // TRANSPORTCREATOR_H
