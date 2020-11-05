/**
 * @file CarShipment.h
 * @author Christoff Linde
 * @brief CarShipment class derived from Shipment. A CarShipment consists of a RaceCar*
 * @version 0.1
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Shipment.h"
#include "RaceCar.h"

#if !defined(CARSHIPMENT_H)
#define CARSHIPMENT_H

class CarShipment : public Shipment
{
public:
    /**
     * @brief Construct a new Car Shipment object
     *
     */
    CarShipment();

    /**
     * @brief Destroy the Car Shipment object
     *
     */
    ~CarShipment();

    /**
     * @brief Set the Cargo object to a RaceCar
     *
     * @param _raceCar pointer to a RaceCar object
     */
    void setCargo(RaceCar* _raceCar);

    /**
     * @brief Get the Cargo object
     *
     * @return RaceCar* pointer to a RaceCar object
     */
    RaceCar* getCargo();

    /**
     * @brief Set the Method Of Transport object
     *
     * @param _method pointer to a method of Transport
     */
    void setMethodOfTransport(Transport* _method);

    /**
     * @brief Get the Method Of Transport object
     *
     * @return Transport* pointer to the private methodOfTransport attribute
     */
    Transport* getMethodOfTransport();


    /**
     * @brief Set the Destination object
     *
     * @param _race pointer to a Race object
     */
    void setDestination(Race* _race);

    /**
     * @brief Get the Destination object
     *
     * @return Race* pointer to the protected destination attribute
     */
    Race* getDestination();

private:
    RaceCar* cargo; /** a pointer to a RaceCar serving as the cargo for the CarShipment */
};

#endif // CARSHIPMENT_H
