/**
 * @file TyreWarmer.h
 * @author Christoff Linde
 * @brief 
 * @version 0.1
 * @date 2020-10-31
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "ToolingEquipment.h"

#if !defined(TYREWARMER_H)
#define TYREWARMER_H

class TyreWarmer : public ToolingEquipment
{
public:
    /**
     * @brief Construct a new Tyre Warmer object
     *
     */
    TyreWarmer();

private:
    std::string name;
};

#endif // TYREWARMER_H
