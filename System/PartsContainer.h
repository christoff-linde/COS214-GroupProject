/**
 * @file PartsContainer.h
 * @author Christoff Linde
 * @brief Container for Parts derived from Container
 * @version 0.1
 * @date 2020-11-06
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Container.h"
#include "CarPart.h"

class PartsContainer : public Container
{
public:
    /**
     * @brief Construct a new Parts Container object
     */
    PartsContainer();

    /**
     * @brief Destroy the Parts Container object
     */
    ~PartsContainer();

    /**
     * @brief print contents of inventory vector
     */
    void checkInventory();

    /**
     * @brief clear contents of inventory vector
     */
    void clearInventory();

    /**
     * @brief add a CarPart to the inventory vector
     * @param _part pointer to the CarPart to be added
     */
    void addToInventory(CarPart* _part);

private:
    std::vector<CarPart*> inventory; /** vector containing the Equipment in the Container*/
};