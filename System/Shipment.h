/**
 * @file Shipment.h
 * @author Christoff Linde
 * @brief Shipment for a race, contains Containers as cargo and charteredFlight for the RaceCar
 * @version 0.2
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <vector>
#include "Container.h"
#include "CarPart.h"
#include "RaceCar.h"
#include "CharteredFlight.h"

#if !defined(SHIPMENT_H)
#define SHIPMENT_H

class Shipment
{
public:
    /**
     * @brief Construct a new Shipment object
     */
    Shipment();

    /**
     * @brief Destroy the Shipment object and other allocated memory
     * 
     */
    ~Shipment();

    /**
     * @brief 
     * 
     * @param _race 
     * @param _carPartList 
     * @param _raceCar 
     */
    void prepareShipment(Race* _race, std::list<CarPart*> _carPartList, RaceCar* _raceCar);

private:
    std::vector<Container*> cargo; /** holds Container* to the Containers that is part of the Shipment cargo */
    CharteredFlight* charteredFlight; /** holds a pointer to a CharteredFlight for the RaceCar */
};

#endif // SHIPMENT_H
