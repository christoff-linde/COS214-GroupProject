/**
 * @file inactive.h
 * @author Campbell Gardiner u17265322
 * @brief 
 * @version 0.1
 * @date 2020-11-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef INACTIVE_H
#define INACTIVE_H

#include <iostream>
#include "Testing.h"
using namespace std;

class Inactive
{

    private:
        

	public:
        Inactive();
        ~Inactive();
        void handleChange(Components* c);
        void doTest(RaceCar* car);
        void doTest(CarPart* part);
		
		 
	
};
 
#endif
