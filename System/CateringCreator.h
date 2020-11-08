/**
 * @file CateringCreator.h
 * @author Christoff Linde
 * @brief ConcreteCreator participant. Creates CateringEquipment ConcreteProducts
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(CATERING_CREATOR_H)
#define CATERING_CREATOR_H

#include "EquipmentComposite.h"

class CateringCreator : public EquipmentComposite
{
public:
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

#endif // CATERING_CREATOR_H