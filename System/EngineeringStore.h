/**
 * @file EngineeringStore.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef EngineeringStore_H
#define EngineeringStore_H
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <iterator>
#include "CarPart.h"
#include "EngineeringTeam.h"
using namespace std;
    
    class EngineeringStore {
        
        public:
         /**
          * @brief Construct a new Engineering Store object
          * 
          */
            EngineeringStore();

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
         * @brief Destroy the Engineering Store object
         * 
         */
            ~EngineeringStore();

        /**
         * @brief Add a CarPart object to the vector of CarParts
         * 
         */
            void addToList(CarPart*);
        /**
         * @brief Get the Strategy List object
         * 
         * @param strategy 
         * @return vector <CarPart*> 
         */
            vector <CarPart*> getStrategyList(string strategy);

        /**
         * @brief Get the Parts List object
         * 
         * @return vector <CarPart*> 
         */
            vector <CarPart*> getPartsList();

        private:
        /**
         * @brief A vector of CarParts
         * 
         */
        vector <CarPart*> partsList;
      

          

            
    };

    
    
#endif
