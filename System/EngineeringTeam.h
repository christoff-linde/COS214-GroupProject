/**
 * @file EngineeringTeam.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
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
#include "RaceCar.h"
#include <list> 
#include <iterator> 

using namespace std;
    
    class EngineeringTeam {
         private:
        list <CarPart*> partsList;
           RacingStrategy* strategy;
        //   RaceCar* raceCar;

        public:
            EngineeringTeam();
            EngineeringTeam(RacingStrategy* strategy);

            virtual ~EngineeringTeam();
            virtual CarPart* createCarPart() = 0;
            void setRacingStrategy(RacingStrategy* strategy);
            RacingStrategy* getStrategy();
            list <CarPart*> getPartsList();
        //    RaceCar* assembleCar(list <CarPart*> partsList);
        //    void setRaceCar(RaceCar* car);
        //    RaceCar* getRaceCar();
       
    };

    
    
#endif
