/**
 * @file EngineTeam.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
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
    
    class EngineTeam : public EngineeringTeam {
        
        public:
            EngineTeam(RacingStrategy* strategy);
            ~EngineTeam();
            CarPart* createCarPart();
           
        private:
            

            
    };

    
    
#endif
