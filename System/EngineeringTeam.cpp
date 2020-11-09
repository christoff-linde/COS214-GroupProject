/**
 * @file EngineeringTeam.cpp
 * @author Werner Graaff and Christoff Linde
 * @brief Publisher participant in the Observer pattern
 * @version 0.2
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "EngineeringTeam.h"

EngineeringTeam::EngineeringTeam(RacingStrategy* strategy)
{

}

EngineeringTeam::EngineeringTeam()
{

}

EngineeringTeam::~EngineeringTeam()
{

}

RacingStrategy* EngineeringTeam::getStrategy()
{
    return this->strategy;
}

list <CarPart*> EngineeringTeam::getPartsList()
{
    return this->partsList;
}

RaceCar* EngineeringTeam::assembleCar(list <CarPart*> partsList)
{
    RaceCar* newCar = new RaceCar(partsList);
    this->raceCar = newCar;
}

RaceCar* EngineeringTeam::getCar()
{
    return this->raceCar;
}

void EngineeringTeam::subscribe(Subscriber* _subscriber)
{
    this->subscribers.push_back(_subscriber);
}

void EngineeringTeam::unsubscribe(Subscriber* _subscriber)
{
    this->subscribers.remove(_subscriber);
}

void EngineeringTeam::notifySubscribers()
{
    list<Subscriber*>::iterator iterator = subscribers.begin();
    while (iterator != subscribers.end())
    {
        (*iterator)->update();
        ++iterator;
    }
}
