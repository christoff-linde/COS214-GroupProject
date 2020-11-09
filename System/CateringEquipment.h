/**
 * @file CateringEquipment.h
 * @author Christoff Linde
 * @brief Sub-category of Equipment
 * @version 0.2
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
};

#endif // CATERINGEQUIPMENT_H
