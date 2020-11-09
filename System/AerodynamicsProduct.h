/**
 * @file AerodynamicsProduct.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
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
    
    class AerodynamicsProduct : public CarPart {
        
        public:
            AerodynamicsProduct(string name, int durability,  double cfDrag, int frontWingWidth, int backWingWidth, int downForce );
            ~AerodynamicsProduct();
            AerodynamicsProduct();
            double getCFDrag();
            int getFrontWingWidth();
            int getBackWingWidth();
            int getDownForce();
        private:
            double cfDrag; //1.30
            int frontWingWidth; //in mm
            int backWingWidth;
            int downForce; //in kg (3628.739 - 4500)
    };

    
    
#endif
