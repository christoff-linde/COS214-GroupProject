/**
 * @file EngineProduct.h
 * @author Werner Graaff
 * @brief 
 * @version 0.1
 * @date 2020-11-08
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
             * @brief Set the Voltage object
             * 
             * @param voltage 
             */
            void setVoltage(int voltage);

            /**
             * @brief Set the Compression Ratio object
             * 
             * @param ratio 
             */
            void setCompressionRatio(double ratio);
            
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
             * @brief Set the Air Charge Ratio object
             * 
             * @param airCharge 
             */
            void setAirChargeRatio(double airCharge);

            /**
             * @brief Set the Horse Power object
             * 
             * @param horsePower 
             */
            void setHorsePower(int horsePower);

            /**
             * @brief Get the Horse Power object
             * 
             * @return int 
             */
            int getHorsePower();
        private:
            int horsepower;
            double airChargeRatio;
            double compressionRatio;
            int voltage;
            
    };

    
    
#endif
