/**
 * @file EquipmentComposite.h
 * @author Christoff Linde
 * @brief Composite Participant. EquipmentComposite is composed of Equipment Components.
 * @version 0.2
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
     * @brief Construct a new Equipment Composite object
     *
     */
    EquipmentComposite();

    /**
     * @brief Destroy the Equipment Composite object
     *
     */
    ~EquipmentComposite();

    /**
     * @brief adds Equipment to the inventory vector
     *
     * @param _equipment pointer to the Equipment to be added
     */
    void add(Equipment* _equipment);

    /**
     * @brief call the print() method for all Equipmet in the inventory
     *
     */
    void listInventory();

private:
    std::vector<Equipment*> inventory;
};

#endif // EQUIPMENTCOMPOSITE_H