/**
 * @file Computer.h
 * @author Christoff Linde
 * @brief Specific type of GarageEquipment
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "GarageEquipment.h"

#if !defined(COMPUTER_H)
#define COMPUTER_H

class Computer : public GarageEquipment
{
public:
    /**
     * @brief Construct a new Computer object
     */
    Computer();
};

#endif // COMPUTER_H