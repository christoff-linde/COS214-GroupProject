#ifndef ChassisTeam_H
#define ChassisTeam_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
#include "EngineeringTeam.h"
using namespace std;
    
    class ChassisTeam : public EngineeringTeam {
        
        public:
            ChassisTeam();
            ~ChassisTeam();
            CarPart* createCarPart();

        private:

            
    };

    
    
#endif
