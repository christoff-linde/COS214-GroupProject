/**
 * @file ToolCreator.h
 * @author Christoff Linde
 * @brief ConcreteCreator participant. Creates ToolingEquipment ConcreteProducts
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(TOOLCREATOR_H)
#define TOOLCREATOR_H

#include "EquipmentComposite.h"

class ToolCreator : public EquipmentComposite
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

#endif // TOOLCREATOR_H
