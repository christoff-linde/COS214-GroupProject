/**
 * @file ToolingEquipment.h
 * @author Christoff Linde
 * @brief
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <string>
#include "Equipment.h"

#if !defined(TOOLINGEQUIPMENT_H)
#define TOOLINGEQUIPMENT_H

class ToolingEquipment : public Equipment
{
public:
    /**
     * @brief Construct a new Tooling Equipment object
     */
    ToolingEquipment();

    /**
     * @brief Destroy the Tooling Equipment object
     */
    ~ToolingEquipment();

    /**
    * @brief virtual method to be used to print the type and name of derived Equipment objects
    */
    void print();

protected:
    std::string type; /** holds the type of Equipment (e.g. GarageEquipment) */
    std::string name; /** holds the name of the Equipment (e.g. Monitor) */
};


#endif // TOOLINGEQUIPMENT_H
