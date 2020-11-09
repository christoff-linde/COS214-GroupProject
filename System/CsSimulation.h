/**
 * @file CsSimulation.h
 * @author Campbell Gardiner u17265322
 * @brief 
 * @version 0.1
 * @date 2020-11-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef CSSIMULATION_H
#define CSSIMULATION_H

#include <iostream>
#include "Testing.h"
using namespace std;

class CsSimulation
{

    private:
        

	public:
        CsSimulation();
        ~CsSimulation();
        void handleChange(Components* c);
        void doTest(RaceCar* car);
        void doTest(CarPart* part);
		
		 
	
};
 
#endif
