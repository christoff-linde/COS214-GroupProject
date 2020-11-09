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
        /**
         * @brief Construct a new Race Car object
         * 
         * @param partsList 
         */
            RaceCar(vector<CarPart*> partsList);
        
        /**
         * @brief Construct a new Race Car object
         * 
         */
            RaceCar();

        /**
         * @brief Get the Engine object
         * 
         * @return EngineProduct* 
         */
            EngineProduct* getEngine();
        
        /**
         * @brief Get the Chassis object
         * 
         * @return ChassisProduct* 
         */
            ChassisProduct* getChassis();

        /**
         * @brief Get the Aerodynamics object
         * 
         * @return AerodynamicsProduct* 
         */
            AerodynamicsProduct* getAerodynamics();

        /**
         * @brief Get the Electronics object
         * 
         * @return ElectronicsProduct* 
         */
            ElectronicsProduct* getElectronics();

        /**
         * @brief Destroy the Race Car object
         * 
         */
            ~RaceCar();
            

        private:
        /**
         * @brief A pointer to a engine object
         * 
         */
            EngineProduct* carEngine;
        
        /**
         * @brief A pointer to a chassis object
         * 
         */
            ChassisProduct* carChassis;
        
        /**
         * @brief A pointer to an aerodynamics product
         * 
         */
            AerodynamicsProduct* carAerodynamics;

        /**
         * @brief A pointer to an electronics product
         * 
         */
            ElectronicsProduct* carElectronics;

            
    };

    
    
#endif
