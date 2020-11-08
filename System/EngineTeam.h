/**
 * @file EngineTeam.h
 * @author Werner Graaff
 * @brief 
 * @version 0.1
 * @date 2020-11-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */
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
            /**
             * @brief Construct a new Engine Team object
             * 
             */
            EngineTeam();

            /**
             * @brief Destroy the Engine Team object
             * 
             */
            ~EngineTeam();

            /**
             * @brief Create a Car Part object
             * 
             * @return CarPart* 
             */
            CarPart* createCarPart();
            // void setStrategy(Strategy*)
        private:
            //pointer to strategy
            
    };

    
    
#endif
