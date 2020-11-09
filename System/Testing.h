/**
 * @file Testing.h
 * @author Campbell Gardiner u1765322
 * @brief
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef TESTING_H
#define TESTING_H

#include <iostream>
#include "Components.h"
#include "RaceCar.h"
#include "CarPart.h"

using namespace std;

class Testing
{
public:
    Testing();
    virtual ~Testing();
    virtual void doTest(RaceCar* car) = 0;
    virtual void doTest(CarPart* part) = 0;
    virtual void handleChange(Components* c) = 0;
};

#endif
