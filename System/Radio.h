/**
 * @file Radio.h
 * @author Christoff Linde
 * @brief Specific type of GarageEquipment
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "GarageEquipment.h"

#if !defined(RADIO_H)
#define RADIO_H

class Radio : public GarageEquipment
{
public:
    /**
     * @brief Construct a new Radio object
     */
    Radio();
};

#endif // RADIO_H
