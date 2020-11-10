/**
 * @file WindTunnel.h
 * @author Campbell Gardiner u1765322
 * @brief 
 * @version 0.1
 * @date 2020-11-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H

#include <iostream>
#include "Testing.h"
#include "AerodynamicsProduct.h"
using namespace std;

class WindTunnel: public Testing
{

    private:
        int uses;

	public:
        WindTunnel();
        ~WindTunnel();
        void handleChange(Components* c);
        void doTest(RaceCar* car);
        void doTest(CarPart* part);
		
	
};
 
#endif
