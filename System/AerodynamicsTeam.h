#ifndef AerodynamicsTeam_H
#define AerodynamicsTeam_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
#include "EngineeringTeam.h"
#include "ChassisProduct.h"
using namespace std;
    
    class AerodynamicsTeam : public EngineeringTeam {
        
        public:
            AerodynamicsTeam();
            ~AerodynamicsTeam();
            CarPart* createCarPart();

        private:

            
    };

    
    
#endif
