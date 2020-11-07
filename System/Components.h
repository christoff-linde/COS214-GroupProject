#ifndef COMPONENTS_H
#define COMPONENTS_H

#include <iostream>
#include "Testing.h"
using namespace std;

class Components 
{

private:
        Testing* state;

public:
        Components();
        ~Components();
        int change();
        void doTest();
        void setState(Testing* state);

		
		 
	
};
 
#endif
