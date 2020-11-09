/**
 * @file EngineProduct.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef EngineProduct_H
#define EngineProduct_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
//#include "CurrentYear.h"
using namespace std;
    
    class EngineProduct : public CarPart {
        
        public:
        /**
         * @brief Construct a new Engine Product object
         * 
         * @param name 
         * @param durability 
         * @param voltage 
         * @param compressionRatio 
         * @param airChargeRatio 
         * @param horsepower 
         */
            EngineProduct(string name, int durability, int voltage, double compressionRatio, double airChargeRatio, int horsepower);

        /**
         * @brief Destroy the Engine Product object
         * 
         */
            ~EngineProduct();

        /**
         * @brief Construct a new Engine Product object
         * 
         */
            EngineProduct();

        /**
         * @brief Get the Voltage object
         * 
         * @return int 
         */
            int getVoltage();

        /**
         * @brief Get the Compression Ratio object
         * 
         * @return double 
         */
            double getCompressionRatio();
        
        /**
         * @brief Get the Air Charge Ratio object
         * 
         * @return double 
         */
            double getAirChargeRatio();
        
        /**
         * @brief Get the Horsepower object
         * 
         * @return int 
         */
            int getHorsepower();
       
        private:
        /**
         * @brief Holds the horsepower of the engine
         * 
         */
            int horsepower;
        
        /**
         * @brief Holds the airChargeRatio of the engine
         * 
         */
            double airChargeRatio;

        /**
         * @brief Holds the compressionRatio of the engine
         * 
         */
            double compressionRatio;

        /**
         * @brief Holds the voltage of the engine
         * 
         */
            int voltage;
            
    };

    
    
#endif
