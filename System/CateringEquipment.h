/**
 * @file CateringEquipment.h
 * @author Christoff Linde
 * @brief
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Equipment.h"

#if !defined(CATERINGEQUIPMENT_H)
#define CATERINGEQUIPMENT_H

class CateringEquipment : public Equipment
{
public:
    /**
     * @brief Construct a new Catering Equipment object
     */
    CateringEquipment();

    /**
     * @brief Destroy the Catering Equipment object
     */
    ~CateringEquipment();

    /**
    * @brief method to print the type and name attributes
    */
    void print();

protected:
    std::string type; /** holds the type of Equipment (e.g. GarageEquipment) */
    std::string name; /** holds the name of the Equipment (e.g. Monitor) */
};

#endif // CATERINGEQUIPMENT_H
