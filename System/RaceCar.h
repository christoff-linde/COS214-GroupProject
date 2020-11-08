#ifndef RaceCar_H
#define RaceCar_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
#include "EngineeringTeam.h"
using namespace std;
    
    class RaceCar {
        
        public:
            RaceCar(list <CarPart*> partsList);
            RaceCar();

            ~RaceCar();
            

        private:
            EngineProduct* carEngine;
            ChassisProduct* carChassis;
            AerodynamicsProduct* carAerodynamics;
            ElectronicsProduct* carElectronics;

            
    };

    
    
#endif
