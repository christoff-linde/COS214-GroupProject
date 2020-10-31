/**
 * @file Container.h
 * @author Christoff Linde
 * @brief
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <vector>
#include "Equipment.h"

#if !defined(CONTAINER_H)
#define CONTAINER_H

class Container
{
public:
    Container(/* args */);
    ~Container();
    /**
     * @brief adds Equipment to the inventory vector
     *
     * @param _equipment is the Equipment to be added
     */
    void addToInventory(Equipment* _equipment);

    /**
     * @brief clears all Equipment from the inventory vector
     *
     */
    void clearInventory();

    /**
     * @brief checks if all needed Equipment is present in inventory
     * 
     * @return true if all needed Equipment is present
     * @return false if Equipmet is missing
     */
    bool checkInventory();

private:
    std::vector<Equipment*> inventory; /*!< vector containing Equipment needed for the Shipment */
};


#endif // CONTAINER_H
