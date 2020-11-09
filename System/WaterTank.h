/**
 * @file WaterTank.h
 * @author Christoff Linde
 * @brief Specific type of CateringEquipment
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CateringEquipment.h"

#if !defined(WATERTANK_H)
#define WATERTANK_H

class WaterTank : public CateringEquipment
{
public:
    /**
     * @brief Construct a new Water Tank object
     */
    WaterTank();

};

#endif // WATERTANK_H
