/**
 * @file Components.h
 * @author Campbell Gardiner u17265322
 * @brief
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef COMPONENTS_H
#define COMPONENTS_H

#include <iostream>
#include "Testing.h"
#include "RaceCar.h"
using namespace std;

class Components
{

private:
        Testing* state;

public:
        Components();
        ~Components();
        int change();
        void doTest(RaceCar* car); // do car test
        void doTest(CarPart* part); // do part test
        void setState(Testing* state);
};

#endif
