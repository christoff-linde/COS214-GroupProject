/**
 * @file GarageCreator.h
 * @author Christoff Linde
 * @brief ConcreteCreator participant. Creates GarageEquipment ConcreteProducts
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(GARAGECREATOR_H)
#define GARAGECREATOR_H

#include "EquipmentComposite.h"

class GarageCreator : public EquipmentComposite
{
    /**
     * @brief method to create and return Equipment
     *
     * @return Equipment* pointer to the created Equipment ConcreteProduct
     */
    Equipment* add() = 0;

    /**
     * @brief method to print out the contents of the inventory vector
     */
    void listInventory() = 0;
};


#endif // GARAGECREATOR_H