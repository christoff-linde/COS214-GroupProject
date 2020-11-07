#ifndef ElectronicsTeam_H
#define ElectronicsTeam_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
#include "EngineeringTeam.h"

using namespace std;
    
    class ElectronicsTeam : public EngineeringTeam {
        
        public:
            ElectronicsTeam();
            ~ElectronicsTeam();
            CarPart* createCarPart();

        private:

            
    };

    
    
#endif
