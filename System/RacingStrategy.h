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
#ifndef RacingStrategy_H
#define RacingStrategy_H

#include <iostream>

using namespace std;

class RacingStrategy
{
    public:
        /**
         * @brief Construct a new Racing Strategy object
         * 
         */
        RacingStrategy();

        /**
         * @brief Destroy the Racing Strategy object
         * 
         */
        ~RacingStrategy();

        /**
         * @brief Get the Type object
         * 
         * @return string 
         */
        virtual string getType() = 0;
};

#endif