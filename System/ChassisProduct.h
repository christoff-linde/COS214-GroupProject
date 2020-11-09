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
        /**
         * @brief Construct a new Chassis Product object
         * 
         * @param name 
         * @param durability 
         * @param torque 
         * @param poissonRatio 
         * @param wheelOverhang 
         * @param rearOverhang 
         */
            ChassisProduct(string name, int durability, double torque, double poissonRatio, int wheelOverhang, int rearOverhang);
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

        /**
         * @brief Get the Torque object
         * 
         * @return double 
         */
            double getTorque();

        /**
         * @brief Get the Poission Ratio object
         * 
         * @return double 
         */
            double getPoissionRatio();
        
        /**
         * @brief Get the Wheel Overhang object
         * 
         * @return int 
         */
            int getWheelOverhang();

        /**
         * @brief Get the Rear Overhang object
         * 
         * @return int 
         */
            int getRearOverhang();
            
        private:
        /**
         * @brief Holds the torque of the part
         * 
         */
            double torque;

        /**
         * @brief Holds the poisson ratio of the part
         * 
         */
            double poissonRatio; //for steel it's between 0.27-0.30
        
        /**
         * @brief Holds the wheeloverhang in mm
         * 
         */
            int wheelOverhang; //in mm

        /**
         * @brief Holds the rearoverhang
         * 
         */
            int rearOverhang; //in mm
            
    };

    
    
#endif
