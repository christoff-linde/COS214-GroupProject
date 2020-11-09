/**
 * @file ChassisTeam.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
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
        /**
         * @brief Construct a new Chassis Team object
         * 
         * @param strategy 
         */
            ChassisTeam(RacingStrategy* strategy);
        
        /**
         * @brief Destroy the Chassis Team object
         * 
         */
            ~ChassisTeam();

        /**
         * @brief Create a Car Part object
         * 
         * @return CarPart* 
         */
            CarPart* createCarPart();

        private:

            
    };

    
    
#endif
