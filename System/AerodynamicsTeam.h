/**
 * @file AerodynamicsTeam.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
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
        /**
         * @brief Construct a new Aerodynamics Team object
         * 
         * @param strategy 
         */
            AerodynamicsTeam(RacingStrategy* strategy);

        /**
         * @brief Destroy the Aerodynamics Team object
         * 
         */
            ~AerodynamicsTeam();

        /**
         * @brief Create a Car Part object
         * 
         * @return CarPart* 
         */
            CarPart* createCarPart();

        private:

            
    };

    
    
#endif
