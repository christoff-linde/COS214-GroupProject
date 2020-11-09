/**
 * @file Subscriber.h
 * @author Christoff Linde
 * @brief Subscriber participant in the Observer pattern
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(SUBSCRIBER)
#define SUBSCRIBER

#include <vector>
#include "RaceCar.h"

class Subscriber
{
public:
    /**
     * @brief pure virtual update method from the Subscriber.
     *
     * @param _carPartsList a list of CarPart* that should be added to the Shipment
     * @param _raceCar a RaceCar* to the RaceCar that should
     * @param _race the Race that needs to be prepared for
     */
    virtual void update(std::vector<CarPart*> _carPartsList, RaceCar* _raceCar, Race* _race) = 0;
};

#endif // SUBSCRIBER