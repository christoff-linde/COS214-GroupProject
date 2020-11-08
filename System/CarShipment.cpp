/**
 * @file CarShipment.cpp
 * @author Christoff Linde
 * @brief CarShipment derived from Shipment class containing only a RaceCar as cargo
 * @version 0.1
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CarShipment.h"

CarShipment::CarShipment()
{
    this->cargo = nullptr;
    this->destination = nullptr;
}

CarShipment::~CarShipment()
{}

void CarShipment::setCargo(RaceCar* _raceCar)
{
    if (_raceCar != nullptr)
        this->cargo = _raceCar;
}

RaceCar* CarShipment::getCargo()
{
    return this->cargo;
}

void CarShipment::setMethodOfTransport(Transport* _method)
{
    if (_method != nullptr)
        this->methodOfTransport = _method;
}

Transport* CarShipment::getMethodOfTransport()
{
    return this->methodOfTransport;
}

void CarShipment::setDestination(Race* _race)
{
    if (_race != nullptr)
        this->destination = _race;
}

Race* CarShipment::getDestination()
{
    return this->destination;
}