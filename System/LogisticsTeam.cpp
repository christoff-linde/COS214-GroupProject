/**
 * @file LogisticsTeam.cpp
 * @author Christoff Linde
 * @brief Concrete Subscriber in the Observer pattern. LogisticsTeam is responsible for creating Shipments
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "LogisticsTeam.h"

LogisticsTeam::LogisticsTeam()
{}

LogisticsTeam::~LogisticsTeam()
{
    for (auto&& shipment : shipmentList)
        delete shipment;
    shipmentList.clear();
}

void LogisticsTeam::update(std::vector<CarPart*> _carPartsList, RaceCar* _raceCar, Race* _race)
{
    Shipment* shipment = new Shipment();
    shipment->prepareShipment(_carPartsList, _raceCar, _race);
}