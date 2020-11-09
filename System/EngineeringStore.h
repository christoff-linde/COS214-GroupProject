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
         //   EngineeringStore(vector<CarPart*> partsList);
            EngineeringStore();
            EngineProduct* getEngine();
            ChassisProduct* getChassis();
            AerodynamicsProduct* getAerodynamics();
            ElectronicsProduct* getElectronics();
            ~EngineeringStore();
            void addToList(CarPart*);
            
            vector <CarPart*> getPartsList();

        private:
        vector <CarPart*> partsList;
      

          

            
    };

    
    
#endif
