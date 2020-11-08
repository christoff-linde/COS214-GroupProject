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
   * @brief virtual method to be used to print the type and name of derived Equipment objects
   *
   */
  virtual void print() = 0;
};

#endif // EQUIPMENT_H
