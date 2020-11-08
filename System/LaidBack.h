/**
 * @file LaidBack.h
 * @author Kyle Proctor-Parker
 * @brief 
 * @version 0.1
 * @date 2020-11-07
 * 
 * @copyright Copyright (c) 2020
 * 
*/
#ifndef LaidBack_H
#define LaidBack_H

#include <iostream>
#include "RacingStrategy.h"

using namespace std;

class LaidBack: public RacingStrategy
{
    public:
        /**
         * @brief Construct a new Laid Back object
         * 
         */
        LaidBack();

        /**
         * @brief Destroy the Laid Back object
         * 
         */
        ~LaidBack();

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
};

#endif