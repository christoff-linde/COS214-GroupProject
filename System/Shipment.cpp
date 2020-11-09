/**
 * @file Shipment.cpp
 * @author Christoff Linde
 * @brief Shipment for a race, contains Containers as cargo and charteredFlight for the RaceCar
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Shipment.h"
#include "TruckCreator.h"
#include "ShipCreator.h"

Shipment::Shipment()
{
    this->charteredFlight = nullptr;
}

Shipment::~Shipment()
{
    for (auto&& container : cargo)
        delete container;

    this->cargo.clear();
}

void Shipment::prepareShipment(std::vector<CarPart*> _carPartsList, RaceCar* _raceCar, Race* _race)
{
    // Create Transport
    TransportCreator* transportCreator;

    if (_race->getIsLocal())
        transportCreator = new TruckCreator();
    else
        transportCreator = new ShipCreator();

    Transport* transportMethod = transportCreator->createTransport();

    // Create EquipmentContainer
    Container* equipmentContainer = new EquipmentContainer();
    equipmentContainer->createInventory();
    equipmentContainer->setModeOfTransport(transportMethod);

    // Create CarPartContainer
    Container* carPartContainer = new CarPartContainer();
    carPartContainer->createInventory();
    dynamic_cast<CarPartContainer*>(carPartContainer)->addToInventory(_carPartsList);

    this->cargo.push_back(equipmentContainer);
    this->cargo.push_back(carPartContainer);

    this->charteredFlight = new CharteredFlight(_raceCar);

    delete transportCreator;
    transportCreator = nullptr;
}