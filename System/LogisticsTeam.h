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

#if !defined(LOGISTICSTEAM_H)
#define LOGISTICSTEAM_H

#include "Subscriber.h"
#include "Shipment.h"
#include <vector>

class LogisticsTeam : public Subscriber
{
public:
    /**
     * @brief Construct a new Logistics Team object
     */
    LogisticsTeam();

    /**
     * @brief Destroy the Logistics Team object
     */
    ~LogisticsTeam();

    /**
     * @brief update method from the Subscriber. 
     * 
     * @param _carPartsList a list of CarPart* that should be added to the Shipment
     * @param _raceCar a RaceCar* to the RaceCar that should 
     */
    void update(list<CarPart*> _carPartsList, RaceCar* _raceCar);

private:
    std::vector<Shipment*> shipmentList; /** holds Shipment* to shipments that the LogisticsTeam has already scheduled/prepared */
};

#endif // LOGISTICSTEAM_H