/**
 * @file Container.h
 * @author Christoff Linde
 * @brief Abstract Interface for a Container
 * @version 0.2
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(CONTAINER_H)
#define CONTAINER_H

#include <vector>
#include "Transport.h"

class Container
{
public:
    /**
     * @brief Set the Mode Of Transport object
     *
     * @param _modeOfTransport pointer to a Transport
     */
    virtual void setModeOfTransport(Transport* _modeOfTransport) = 0;

    /**
     * @brief virtual method to populate the inventory of the derived containers
     *
     * @example EquipmentContainer
     *
     */
    virtual void createInventory() = 0;

protected:
    Transport* ModeOfTransport; /** pointer to a Transport object serving as the mode of transport for the Container */
};

#endif // CONTAINER_H
