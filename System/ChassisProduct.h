/**
 * @file ChassisProduct.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef ChassisProduct_H
#define ChassisProduct_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
//#include "CurrentYear.h"
using namespace std;
    
    class ChassisProduct : public CarPart {
        
        public:
            ChassisProduct(string name, int durability, double torque, double poissonRatio, int wheelOverhang, int rearOverhang);
            ~ChassisProduct();
            ChassisProduct();
            double getTorque();
            double getPoissionRatio();
            int getWheelOverhang();
            int getRearOverhang();
            
        private:
            double torque;
            double poissonRatio; //for steel it's between 0.27-0.30
            int wheelOverhang; //in mm
            int rearOverhang; //in mm
            
    };

    
    
#endif
