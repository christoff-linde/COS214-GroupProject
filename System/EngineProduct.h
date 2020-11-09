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
            EngineProduct(string name, int durability, int voltage, double compressionRatio, double airChargeRatio, int horsepower);
            ~EngineProduct();
            EngineProduct();
            int getVoltage();
            double getCompressionRatio();
            double getAirChargeRatio();
            int getHorsepower();
       
        private:
            int horsepower;
            double airChargeRatio;
            double compressionRatio;
            int voltage;
            
    };

    
    
#endif
