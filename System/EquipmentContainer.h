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
   *
   */
  EquipmentContainer();

  /**
   * @brief Destroy the Equipment Container object
   *
   */
  ~EquipmentContainer();

  /**
   * @brief virtual method to populate the inventory of the derived containers
   *
   * @example EquipmentContainer
   *
   */
  void createInventory();

private:
  EquipmentComposite* inventory;
};

#endif // EQUIPMENTCONTAINER_H