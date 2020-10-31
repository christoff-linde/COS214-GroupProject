/**
 * @file Radio.h
 * @author Christoff Linde
 * @brief
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
     *
     */
    Radio();

private:
    std::string name;
};

#endif // RADIO_H
