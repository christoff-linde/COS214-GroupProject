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
       
        //   RaceCar* raceCar;

        public:
        /**
         * @brief Construct a new Engineering Team object
         * 
         */
            EngineeringTeam();

        /**
         * @brief Construct a new Engineering Team object
         * 
         * @param strategy 
         */
            EngineeringTeam(RacingStrategy* strategy);

        /**
         * @brief Destroy the Engineering Team object
         * 
         */
            virtual ~EngineeringTeam();

        /**
         * @brief Create a Car Part object
         * 
         * @return CarPart* 
         */
            virtual CarPart* createCarPart() = 0;

        /**
         * @brief Set the Racing Strategy object
         * 
         * @param strategy 
         */
            void setRacingStrategy(RacingStrategy* strategy);
        
        /**
         * @brief Get the Strategy object
         * 
         * @return RacingStrategy* 
         */
            RacingStrategy* getStrategy();

        /**
         * @brief Get the Parts List object
         * 
         * @return list <CarPart*> 
         */
            list <CarPart*> getPartsList();
  
         private:
         /**
          * @brief The strategy that's used to construct different parts
          * 
          */
           RacingStrategy* strategy;
    };

    
    
#endif
