/**
 * @file LogisticsTeam.h
 * @author Christoff Linde
 * @brief Concrete Subscriber in the Observer pattern. LogisticsTeam is responsible for creating Shipments
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Subscriber.h"

class LogisticsTeam : public Subscriber
{
    Shipment* shipment;
};