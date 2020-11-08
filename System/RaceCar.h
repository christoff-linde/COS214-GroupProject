/**
 * @file RaceCar.h
 * @author Werner Graaff
 * @brief 
 * @version 0.1
 * @date 2020-11-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */
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
            /**
             * @brief Construct a new Race Car object
             * 
             * @param partsList 
             */
            RaceCar(list <CarPart*> partsList);

            /**
             * @brief Construct a new Race Car object
             * 
             */
            RaceCar();

            /**
             * @brief Destroy the Race Car object
             * 
             */
            ~RaceCar();
            

        private:
            EngineProduct* carEngine;
            ChassisProduct* carChassis;
            AerodynamicsProduct* carAerodynamics;
            ElectronicsProduct* carElectronics;

            
    };

    
    
#endif
