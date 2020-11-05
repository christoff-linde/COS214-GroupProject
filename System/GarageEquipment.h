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

    /**
     * @brief Destroy the Garage Equipment object
     */
    ~GarageEquipment();

    /**
     * @brief method to print the type and name attributes
     */
    void print();

protected:
    std::string type; /** holds the type of Equipment (e.g. GarageEquipment) */
    std::string name; /** holds the name of the Equipment (e.g. Monitor) */
};

#endif // GARAGEEQUIPMENT_H
