/**
 * @file EquipmentComposite.h
 * @author Christoff Linde
 * @brief Composite Participant. EquipmentComposite is composed of Equipment Components. EquipmentComposite also serves as an Abstract Creator that creates different types of equipment
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(EQUIPMENTCOMPOSITE_H)
#define EQUIPMENTCOMPOSITE_H

#include <vector>
#include "Equipment.h"

class EquipmentComposite
{
public:
    /**
     * @brief virtual method to create and return Equipment
     *
     * @return Equipment* pointer to the created Equipment ConcreteProduct
     */
    virtual Equipment* add() = 0;

    /**
     * @brief virtual method to print out the contents of the inventory vector
     */
    virtual void listInventory() = 0;

private:
    std::vector<Equipment*> inventory; /** vector holding Equipment* */
};

#endif // EQUIPMENTCOMPOSITE_H