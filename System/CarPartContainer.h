/**
 * @file CarPartContainer.h
 * @author Christoff Linde
 * @brief Container for CarPart's derived from Container
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(CARPARTCONTAINER_H)
#define CARPARTCONTAINER_H

#include "Container.h"
#include "CarPart.h"

class CarPartContainer : public Container
{
public:
    /**
     * @brief Construct a new Car Part Container object
     *
     */
    CarPartContainer();

    /**
     * @brief Destroy the Car Part Container object
     *
     */
    ~CarPartContainer();

    /**
     * @brief method to populate the inventory of the derived containers
     *
     */
    void createInventory();

    /**
     * @brief method to add CarParts retrieved from EngineerStore to the inventory
     *
     * @param _carPartList vector holding CarPart* to CarPart s
     */
    void addToInventory(std::vector<CarPart*> _carPartList);

private:
    std::vector<CarPart*> inventory; /** holds CarPart* as inventor of the CarPartContainer */
};

#endif // CARPARTCONTAINER_H