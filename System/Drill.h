/**
 * @file Drill.h
 * @author Christoff Linde
 * @brief Specific type of ToolEquipment
 * @version 0.1
 * @date 2020-11-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "ToolEquipment.h"

#if !defined(DRILL_H)
#define DRILL_H

class Drill : public ToolEquipment
{
public:
    /**
     * @brief Construct a new Drill object
     */
    Drill();

};

#endif // DRILL_H
