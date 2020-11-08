/**
 * @file ElectronicsProduct.h
 * @author Werner Graaff
 * @brief 
 * @version 0.1
 * @date 2020-11-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef ElectrionicsProduct_H
#define ElectrionicsProduct_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
//#include "CurrentYear.h"
using namespace std;
    
    class ElectronicsProduct : public CarPart {
        
        public:
            /**
             * @brief Construct a new Electronics Product object
             * 
             * @param name 
             * @param coreFreq 
             * @param powerOutput 
             * @param accSpeed 
             * @param gearChangeSpeed 
             */
            ElectronicsProduct(string name, int coreFreq, int powerOutput, int accSpeed, int gearChangeSpeed);

            /**
             * @brief Destroy the Electronics Product object
             * 
             */
            ~ElectronicsProduct();

            /**
             * @brief Construct a new Electronics Product object
             * 
             */
            ElectronicsProduct();
            
        private:
            int coreFreq; //around 200 MHz
            int powerOutput; //around 560 kW
            int accSpeed; //between 1500 - 1800rpm
            int gearChangeSpeed; //in ms 100
    };

    
    
#endif
