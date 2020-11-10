/**
 * @file Aggressive.h
 * @author Kyle Proctor-Parker
 * @brief 
 * @version 0.1
 * @date 2020-11-07
 * 
 * @copyright Copyright (c) 2020
 * 
*/

#ifndef Aggressive_H
#define Aggressive_H

#include <iostream>
#include "RacingStrategy.h"

using namespace std;

class Aggressive: public RacingStrategy
{
    public:
        /**
         * @brief Construct a new Aggressive object
         * 
         */
        Aggressive();
        
        /**
         * @brief Destroy the Aggressive object
         * 
         */
        ~Aggressive();

        /**
         * @brief Get the Type object
         * 
         * @return string 
         */
        string getType();
        
        /**
         * @brief Get the Tyre Type object
         * 
         * @return string 
         */
        string getTyreType();

        /**
         * @brief Get the Tyre Type object\
         * 
         * @return string 
         */
        int getAmountOfTyreSets();
};

#endif