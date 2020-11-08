#ifndef EngineeringTeam_H
#define EngineeringTeam_H
#include <iostream>
#include <cstring>
#include <string>
//#include "Engineering.h"
#include "CarPart.h"
#include "RacingStrategy.h"
#include "EngineProduct.h"
#include "ChassisProduct.h"
#include "AerodynamicsProduct.h"
#include "ElectronicsProduct.h"
#include <list> 
#include <iterator> 
#include "RaceCar.h"
using namespace std;
    
    class EngineeringTeam {
        
        public:
            EngineeringTeam();
            EngineeringTeam(RacingStrategy* strategy);

            virtual ~EngineeringTeam();
            virtual CarPart* createCarPart() = 0;
            RacingStrategy* getStrategy();
            list <CarPart*> getPartsList();
            RaceCar* assembleCar(list <CarPart*> partsList);
            
        private:
        list <CarPart*> partsList;
           RacingStrategy* strategy;
           RaceCar* raceCar;
    };

    
    
#endif
