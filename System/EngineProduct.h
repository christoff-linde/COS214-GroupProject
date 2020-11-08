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
            void setVoltage(int voltage);
            void setCompressionRatio(double ratio);
            double getCompressionRatio();
            double getAirChargeRatio();
            void setAirChargeRatio(double airCharge);
            void setHorsePower(int horsePower);
            int getHorsePower();
        private:
            int horsepower;
            double airChargeRatio;
            double compressionRatio;
            int voltage;
            
    };

    
    
#endif
