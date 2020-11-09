/**
 * @file ToolEquipment.h
 * @author Christoff Linde
 * @brief Sub-category of Equipment
 * @version 0.2
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <string>
#include "Equipment.h"

#if !defined(TOOLEQUIPMENT_H)
#define TOOLEQUIPMENT_H

class ToolEquipment : public Equipment
{
public:
    /**
     * @brief Construct a new Tooling Equipment object
     */
    ToolEquipment();
};


#endif // TOOLEQUIPMENT_H
