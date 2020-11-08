/**
 * @file EquipmentContainer.h
 * @author Christoff Linde
 * @brief Container for EquipmentComposite derived from Container
 * @version 0.2
 * @date 2020-11-06
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(EQUIPMENTCONTAINER_H)
#define EQUIPMENTCONTAINER_H

#include "Container.h"
#include "EquipmentComposite.h"

class EquipmentContainer : public Container
{
public:
    /**
     * @brief Construct a new Equipment Container object
     */
    EquipmentContainer();

    /**
     * @brief Destroy the Equipment Container object
     */
    ~EquipmentContainer();

    /**
      * @brief print contents of inventory vector
      */
    void checkInventory();

    /**
     * @brief clear contents of inventory vector
     */
    void clearInventory();

    /**
     * @brief add EquipmentComposite to the inventory vector
     *
     * @param _equipment pointer to the EquipmentComposite to be added
     */
    void addToInventory(EquipmentComposite* _equipment);

private:
    std::vector<EquipmentComposite*> inventory; /** vector containing the EquipmentComposite* in the Container*/
};

#endif // EQUIPMENTCONTAINER_H