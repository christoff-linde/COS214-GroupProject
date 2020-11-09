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
        /**
         * @brief Construct a new Car Part object
         * 
         */
            CarPart();
        
        /**
         * @brief Construct a new Car Part object
         * 
         * @param name 
         */
            CarPart(string name);

        /**
         * @brief Destroy the Car Part object
         * 
         */
            virtual ~CarPart();

        /**
         * @brief Set the Name object
         * 
         * @param name 
         */
            void setName(string name);

        /**
         * @brief Get the Name object
         * 
         * @return string 
         */
         
            string getName();

        /**
         * @brief Set the Base Material object
         * 
         * @param baseMaterial 
         */
            void setBaseMaterial(string baseMaterial);

        /**
         * @brief Get the Base Material object
         * 
         * @return string 
         */
            string getBaseMaterial();

        /**
         * @brief Get the Durability object
         * 
         * @return int 
         */
            int getDurability();

        /**
         * @brief Set the Durability object
         * 
         * @param durability 
         */
            void setDurability(int durability);
        
        /**
         * @brief Get the Speed Increase object
         * 
         * @return double 
         */
            double getSpeedIncrease();

        /**
         * @brief Set the Speed Increase object
         * 
         * @param speedIncrease 
         */
            void setSpeedIncrease(double speedIncrease);
            

        private:

        /**
         * @brief Holds the speed increase of the part
         * 
         */
            double speedIncrease;

        /**
         * @brief Holds the basematerial
         * 
         */
            string baseMaterial; 
        
        /**
         * @brief Holds the name of the part
         * 
         */
            string name;

        /**
         * @brief Holds the durability of the part
         * 
         */
            int durability;
            
    };

    
    
#endif
