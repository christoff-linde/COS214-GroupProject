/**
 * @file ChassisProduct.h
 * @author Werner Graaff
 * @brief 
 * @version 0.1
 * @date 2020-11-08
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
            /**
             * @brief Construct a new Chassis Product object
             * 
             * @param name 
             * @param torque 
             * @param poissonRatio 
             * @param wheelOverhang 
             * @param rearOverhang 
             */
            ChassisProduct(string name, double torque, double poissonRatio, int wheelOverhang, int rearOverhang);

            /**
             * @brief Destroy the Chassis Product object
             * 
             */
            ~ChassisProduct();

            /**
             * @brief Construct a new Chassis Product object
             * 
             */
            ChassisProduct();
            
        private:
            double torque;
            double poissonRatio; //for steel it's between 0.27-0.30
            int wheelOverhang; //in mm
            int rearOverhang; //in mm
            
    };

    
    
#endif
