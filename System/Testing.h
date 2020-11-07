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
        virtual void doTest() = 0;
        virtual void handleChange(Components* c) =0;
		
		 
	
};
 
#endif
