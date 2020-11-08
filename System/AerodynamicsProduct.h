/**
 * @file AerodynamicsProduct.h
 * @author Werner Graaff
 * @brief 
 * @version 0.1
 * @date 2020-11-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef AerodynamicsProduct_H
#define AerodynamicsProduct_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
//#include "CurrentYear.h"

using namespace std;
    
    class AerodynamicsProduct : public CarPart 
    {
        
        public:
            /**
             * @brief Construct a new Aerodynamics Product object
             * 
             * @param name 
             * @param cfDrag 
             * @param frontWingWidth 
             * @param backWingWidth 
             * @param downForce 
             */
            AerodynamicsProduct(string name, double cfDrag, int frontWingWidth, int backWingWidth, int downForce );

            /**
             * @brief Destroy the Aerodynamics Product object
             * 
             */
            ~AerodynamicsProduct();

            /**
             * @brief Construct a new Aerodynamics Product object
             * 
             */
            AerodynamicsProduct();
            
        private:
            double cfDrag; //1.30
            int frontWingWidth; //in mm
            int backWingWidth;
            int downForce; //in kg (3628.739 - 4500)
    };

    
    
#endif
