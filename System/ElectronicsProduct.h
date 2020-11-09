/**
 * @file ElectronicsProduct.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
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
         * @param durability 
         * @param coreFreq 
         * @param powerOutput 
         * @param accSpeed 
         * @param gearChangeSpeed 
         */
            ElectronicsProduct(string name, int durability, int coreFreq, int powerOutput, int accSpeed, int gearChangeSpeed);

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

        /**
         * @brief Get the Core Freq object
         * 
         * @return int 
         */
            int getCoreFreq();

        /**
         * @brief Get the Power Output object
         * 
         * @return int 
         */
            int getPowerOutput();

        /**
         * @brief Get the Acc Speed object
         * 
         * @return int 
         */
            int getAccSpeed();

        /**
         * @brief Get the Gear Change Speed object
         * 
         * @return int 
         */
            int getGearChangeSpeed();
            
        private:
        /**
         * @brief holds the core frequency in MHz
         * 
         */
            int coreFreq; //around 200 MHz

        /**
         * @brief holds the powerOutput in kW
         * 
         */
            int powerOutput; //around 560 kW

        /**
         * @brief holds the acceleration speed
         * 
         */
            int accSpeed; //between 1500 - 1800rpm

        /**
         * @brief holds the gear change speed in ms
         * 
         */
            int gearChangeSpeed; //in ms 100
    };

    
    
#endif
