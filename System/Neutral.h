/**
 * @file Neutral.h
 * @author Kyle Proctor-Parker
 * @brief 
 * @version 0.1
 * @date 2020-11-07
 * 
 * @copyright Copyright (c) 2020
 * 
*/
#ifndef Neutral_H
#define Neutral_H

#include <iostream>
#include "RacingStrategy.h"

using namespace std;

class Neutral: public RacingStrategy
{
    public:
        /**
         * @brief Construct a new Neutral object
         * 
         */
        Neutral();

        /**
         * @brief Destroy the Neutral object
         * 
         */
        ~Neutral();

        /**
         * @brief Get the Type object
         * 
         * @return string 
         */
        string getType();
};

#endif