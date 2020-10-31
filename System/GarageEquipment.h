/**
 * @file GarageEquipment.h
 * @author Christoff Linde
 * @brief
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <string>
#include "Equipment.h"

#if !defined(GARAGEEQUIPMENT_H)
#define GARAGEEQUIPMENT_H

class GarageEquipment : public Equipment
{
public:
    /**
     * @brief Construct a new Garage Equipment object
     *
     */
    GarageEquipment();

    ~GarageEquipment();
};


#endif // GARAGEEQUIPMENT_H
