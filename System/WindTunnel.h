#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H

#include <iostream>
#include "Testing.h"
using namespace std;

class WindTunnel
{

    private:
        int uses;

	public:
        WindTunnel();
        ~WindTunnel();
        void handleChange(Components* c);
        void doTest();
		
		 
	
};
 
#endif
