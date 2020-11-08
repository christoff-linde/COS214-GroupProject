#ifndef EngineTeam_H
#define EngineTeam_H
#include <iostream>
#include <cstring>
#include <string>
#include "EngineeringTeam.h"
//#include "CarPart.h"
using namespace std;
    
    class EngineTeam : EngineeringTeam {
        
        public:
            EngineTeam();
            ~EngineTeam();
            CarPart* createCarPart();
            // void setStrategy(Strategy*)
        private:
            //pointer to strategy
            
    };

    
    
#endif
