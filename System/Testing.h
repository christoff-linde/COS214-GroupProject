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
#include "Components.h"
#include <iostream>
using namespace std;

class Testing
{

    private:
        

	public:
        Testing();
        ~Testing();
        virtual void doTest(RaceCar* car) = 0;
        virtual void doTest(CarPart* part) = 0;
        virtual void handleChange(Components* c) =0;
		
		 
	
};
 
#endif
