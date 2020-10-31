/**
 * @file Refrigerator.h
 * @author Christoff Linde
 * @brief
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CateringEquipment.h"

#if !defined(REFRIGERATOR_H)
#define REFRIGERATOR_H

class Refrigerator : public CateringEquipment
{
public:
    /**
     * @brief Construct a new Refrigerator object
     *
     */
    Refrigerator();

private:
    std::string name;
};

#endif // REFRIGERATOR_H
