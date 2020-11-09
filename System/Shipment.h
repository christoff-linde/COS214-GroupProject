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
#include "Race.h"
#include "EquipmentContainer.h"
#include "CarPartContainer.h"

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
     * @brief starts preparing the Shipment, which includes creating the correct methodOfTransport as well as the Containers
     * 
     * @param _carPartsList vector of CarPart* to be added to the CarPartContainer
     * @param _raceCar pointer to the RaceCar that needs to be shipped
     * @param _race pointer to the Race that should receive the Shipment
     */
    void prepareShipment(std::vector<CarPart*> _carPartsList, RaceCar* _raceCar, Race* _race);

private:
    std::vector<Container*> cargo; /** holds Container* to the Containers that is part of the Shipment cargo */
    CharteredFlight* charteredFlight; /** holds a pointer to a CharteredFlight for the RaceCar */
};

#endif // SHIPMENT_H
