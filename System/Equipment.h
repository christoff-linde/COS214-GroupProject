/**
 * @file Equipment.h
 * @author Christoff Linde
 * @brief Abstract class for Equipment
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <iostream>
#include <string>

#if !defined(EQUIPMENT_H)
#define EQUIPMENT_H

class Equipment
{
public:
  /**
   * @brief method to be used to print the type and name of derived Equipment objects
   *
   */
  void print();

protected:
  std::string type; /** holds the type of Equipment (e.g. GarageEquipment) */
  std::string name; /** holds the name of the Equipment (e.g. Monitor) */
};

#endif // EQUIPMENT_H
