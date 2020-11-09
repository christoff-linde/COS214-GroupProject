/**
 * @file ElectronicsTeam.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef ElectronicsTeam_H
#define ElectronicsTeam_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
#include "EngineeringTeam.h"

using namespace std;
    
    class ElectronicsTeam : public EngineeringTeam {
        
        public:
            ElectronicsTeam(RacingStrategy* strategy);
            ~ElectronicsTeam();
            CarPart* createCarPart();

        private:

            
    };

    
    
#endif
