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

void Shipment::prepareShipment(Race* _race, std::list<CarPart*> _carPartList, RaceCar* _raceCar)
{

}