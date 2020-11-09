/**
 * @file RaceCar.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */


#ifndef RaceCar_H
#define RaceCar_H
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include "CarPart.h"
#include "EngineeringTeam.h"
using namespace std;
    
    class RaceCar {
        
        public:
            RaceCar(vector<CarPart*> partsList);
            RaceCar();
            EngineProduct* getEngine();
            ChassisProduct* getChassis();
            AerodynamicsProduct* getAerodynamics();
            ElectronicsProduct* getElectronics();
            ~RaceCar();
            

        private:
            EngineProduct* carEngine;
            ChassisProduct* carChassis;
            AerodynamicsProduct* carAerodynamics;
            ElectronicsProduct* carElectronics;

            
    };

    
    
#endif
