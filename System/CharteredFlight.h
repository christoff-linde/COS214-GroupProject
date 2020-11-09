/**
 * @file CharteredFlight.h
 * @author Christoff Linde
 * @brief Serves as specific method of transport for a RaceCar
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(CHARTEREDFLIGHT_H)
#define CHARTEREDFLIGHT_H

#include "RaceCar.h"

class CharteredFlight
{
public:
    /**
     * @brief Construct a new Chartered Flight object
     *
     * @param _raceCar pointer to a RaceCar that is to be transported by the CharteredFlight
     */
    CharteredFlight(RaceCar* _raceCar);

    /**
     * @brief generate a random flight number string
     * 
     * @return std::string generated flight number
     */
    std::string generateFlightNumber();

    /**
     * @brief Get the Flight Number object
     * 
     * @return std::string flight number for CharteredFlight
     */
    std::string getFlightNumber();

private:
    std::string flightNumber; /** a randomly generated flight number */
    RaceCar* raceCar; /** a pointer to the RaceCar that is to be transported */
};

#endif // CHARTEREDFLIGHT_H
