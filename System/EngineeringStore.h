/**
 * @file EngineeringStore.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef EngineeringStore_H
#define EngineeringStore_H

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <iterator>
#include "CarPart.h"
#include "EngineeringTeam.h"
#include "Subscriber.h"

using namespace std;

class EngineeringStore {

public:
  /**
* @brief Construct a new Engineering Store object
*
*/
  EngineeringStore();

  /**
   * @brief Destroy the Engineering Store object
   *
   */
  ~EngineeringStore();

  /**
    * @brief Add a CarPart object to the vector of CarParts
    *
    */
  void addToList(CarPart*);

  /**
   * @brief Get the Strategy List object
   *
   * @param strategy
   * @return vector <CarPart*>
   */
  vector<CarPart*> getStrategyList(string strategy);

  /**
   * @brief Get the Parts List object
   *
   * @return vector <CarPart*>
   */
  vector<CarPart*> getPartsList();

  /**
   * @brief Get the Engine object
   *
   * @return EngineProduct* pointer to EngineProduct
   */
  EngineProduct* getEngine();

  /**
   * @brief Get the Chassis object
   *
   * @return ChassisProduct* pointer to ChassisProduct
   */
  ChassisProduct* getChassis();

  /**
   * @brief Get the Aerodynamics object
   *
   * @return AerodynamicsProduct* pointer to AerodynamicsProduct
   */
  AerodynamicsProduct* getAerodynamics();

  /**
   * @brief Get the Electronics object
   *
   * @return ElectronicsProduct* pointer to ElectronicsProduct
   */
  ElectronicsProduct* getElectronics();

  /**
   * @brief subscribes a subscriber participant to the subscriberList of the Publisher
   *
   * @param _subscriber pointer to the Subscriber to be added
   */
  void subscribe(Subscriber* _subscriber);

  /**
   * @brief call each the update() method for each Subscriber
   *
   * @param _race pointer to the Race that a Shipment needs to be prepared for
   */
  void notifySubscribers(Race* _race);

private:
  std::vector<CarPart*> partsList; /** holds CarPart* for the partsList (i.e. the CarParts stored in the EngineerStore) */
  vector<Subscriber*> subscriberList; /** holds Subscriber* to Subscriber participants */
};

#endif
