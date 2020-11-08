/**
 * @file Container.h
 * @author Christoff Linde
 * @brief Abstract Interface for a Container
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <vector>

#if !defined(CONTAINER_H)
#define CONTAINER_H

class Container
{
public:
    /**
     * @brief pure virtual method to print contents of inventory
     */
    virtual void checkInventory() = 0;

    /**
     * @brief pure virtual method to clear contents of inventory
     */
    virtual void clearInventory() = 0;
};


#endif // CONTAINER_H
