/**
 * @file GarageEquipment.h
 * @author Christoff Linde
 * @brief Sub-category of Equipment
 * @version 0.2
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Equipment.h"

#if !defined(GARAGEEQUIPMENT_H)
#define GARAGEEQUIPMENT_H

class GarageEquipment : public Equipment
{
public:
    /**
     * @brief Construct a new Garage Equipment object
     */
    GarageEquipment();
};

#endif // GARAGEEQUIPMENT_H
