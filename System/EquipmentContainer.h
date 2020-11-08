/**
 * @file EquipmentContainer.h
 * @author Christoff Linde
 * @brief Container for Equipment derived from Container
 * @version 0.1
 * @date 2020-11-06
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Container.h"
#include "Equipment.h"

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
     * @brief add Equipment to the inventory vector
     * 
     * @param _equipment pointer to the Equipment to be added
     */
    void addToInventory(Equipment* _equipment);

private:
    std::vector<Equipment*> inventory; /** vector containing the Equipment in the Container*/
};