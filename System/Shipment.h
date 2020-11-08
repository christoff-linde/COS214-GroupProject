/**
 * @file Shipment.h
 * @author Christoff Linde
 * @brief Abstract class for Shipments
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Race.h"
#include "Transport.h"

#if !defined(SHIPMENT_H)
#define SHIPMENT_H

class Shipment
{
public:
    /**
     * @brief Set the Method Of Transport object
     * @param _method pointer to a Transport object
     */
    virtual void setMethodOfTransport(Transport* _method) = 0;

    /**
     * @brief Get the Method Of Transport object
     *
     * @return Transport* pointer to the private methodOfTransport attribute
     */
    virtual Transport* getMethodOfTransport() = 0;

    /**
     * @brief Set the Destination object
     *
     * @param _race pointer to a Race object
     */
    virtual void setDestination(Race* _race) = 0;

    /**
     * @brief Get the Destination object
     *
     * @return Race* pointer to the protected destination attribute
     */
    virtual Race* getDestination() = 0;

protected:
    Race* destination; /** a pointer to a Race serving as the destination of the Shipment */
    Transport* methodOfTransport; /** a pointer to a Transport serving as the method of transport of the Shipment */
};

#endif // SHIPMENT_H
