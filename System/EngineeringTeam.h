/**
 * @file EngineeringTeam.h
 * @author Werner Graaff
 * @brief 
 * @version 0.1
 * @date 2020-11-08
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
#include <list> 
#include <iterator> 
#include "RaceCar.h"
using namespace std;
    
    class EngineeringTeam {
        
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

            /**
             * @brief 
             * 
             * @param partsList 
             * @return RaceCar* 
             */
            RaceCar* assembleCar(list <CarPart*> partsList);
            
        private:
        list <CarPart*> partsList;
           RacingStrategy* strategy;
           RaceCar* raceCar;
    };

    
    
#endif
