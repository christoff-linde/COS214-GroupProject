/**
 * @file FuelTank.h
 * @author Christoff Linde
 * @brief Specific type of GarageEquipment
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "GarageEquipment.h"

#if !defined(FUELTANK_H)
#define FUELTANK_H

class FuelTank : public GarageEquipment
{
public:
    /**
     * @brief Construct a new FuelTank object
     */
    FuelTank();
};

#endif // FUELTANK_H
