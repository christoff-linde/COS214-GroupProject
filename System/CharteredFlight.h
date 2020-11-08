/**
 * @file CharteredFlight.h
 * @author Christoff Linde
 * @brief
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(CHARTEREDFLIGHT_H)
#define CHARTEREDFLIGHT_H

class CharteredFlight
{
public:
    /**
     * @brief Construct a new Chartered Flight object
     *
     * @param _raceCar pointer to a RaceCar that is to be transported by the CharteredFlight
     */
    CharteredFlight(RaceCar* _raceCar);

private:
    std::string flightNumber; /** a randomly generated flight number */
    RaceCar* raceCar; /** a pointer to the RaceCar that is to be transported */
};

#endif // CHARTEREDFLIGHT_H
