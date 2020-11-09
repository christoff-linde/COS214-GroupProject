/**
 * @file CarPart.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef CarPart_H
#define CarPart_H
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
    
    class CarPart {
        
        public:
            CarPart();
            CarPart(string name);
            virtual ~CarPart();
            void setName(string name);
            string getName();
            void setBaseMaterial(string baseMaterial);
            string getBaseMaterial();
            int getDurability();
            void setDurability(int durability);
            double getSpeedIncrease();
            void setSpeedIncrease(double speedIncrease);
            

        private:
            double speedIncrease;
            string baseMaterial; 
            string name;
            int durability;
            
    };

    
    
#endif
