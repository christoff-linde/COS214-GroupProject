/**
 * @file Wrench.h
 * @author Christoff Linde
 * @brief Specific type of ToolEquipment
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ToolingEquipment.h"

#if !defined(WRENCH_H)
#define WRENCH_H

class Wrench : public ToolingEquipment
{
public:
    /**
     * @brief Construct a new Wrench object
     */
    Wrench();
};

#endif // WRENCH_H
