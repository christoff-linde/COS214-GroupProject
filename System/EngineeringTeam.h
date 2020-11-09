/**
 * @file EngineeringTeam.h
 * @author Werner Graaff and Christoff Linde
 * @brief Publisher participant in the Observer pattern
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef EngineeringTeam_H
#define EngineeringTeam_H

#include <iostream>
#include <cstring>
#include <string>
#include <list> 
#include <vector>
#include <iterator> 

 //#include "Engineering.h"
#include "CarPart.h"
#include "RacingStrategy.h"
#include "EngineProduct.h"
#include "ChassisProduct.h"
#include "AerodynamicsProduct.h"
#include "ElectronicsProduct.h"
#include "RaceCar.h"
#include "Subscriber.h"

using namespace std;

class EngineeringTeam {
public:
    /**
     * @brief Construct a new Engineering Team object
     *
     */
    EngineeringTeam();

    /**
     * @brief Construct a new Engineering Team object
     *
     * @param strategy
     */
    EngineeringTeam(RacingStrategy* strategy);

    /**
     * @brief Destroy the Engineering Team object
     *
     */
    virtual ~EngineeringTeam();

    /**
     * @brief Create a Car Part object
     *
     * @return CarPart*
     */
    virtual CarPart* createCarPart() = 0;

    /**
     * @brief Get the Strategy object
     *
     * @return RacingStrategy*
     */
    RacingStrategy* getStrategy();

    /**
     * @brief Get the Parts List object
     *
     * @return list <CarPart*>
     */
    list<CarPart*> getPartsList();

    /**
     * @brief
     *
     * @param partsList
     * @return RaceCar*
     */
    RaceCar* assembleCar(list <CarPart*> partsList);

    /**
     * @brief Get the Car object
     * 
     * @return RaceCar* pointer to a RaceCar object
     */
    RaceCar* getCar();

    /**
     * @brief adds a Subscriber participant to the subscribers vector
     *
     * @param _subscriber pointer to a Subscriber to be added
     */
    void subscribe(Subscriber* _subscriber);

    /**
     * @brief removes a Subscriber participant from the subscribers vector
     *
     * @param _subscriber pointer to a Subscriber to be removed
     */
    void unsubscribe(Subscriber* _subscriber);

    /**
     * @brief notify all subscribers of a event
     *
     */
    void notifySubscribers();

private:
    list<CarPart*> partsList;
    RacingStrategy* strategy;
    RaceCar* raceCar;
    list<Subscriber*> subscribers; /** holds pointers to Subscriber participants */
};



#endif
