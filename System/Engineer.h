/**
 * @file Engineer.h
 * @author Werner Graaff
 * @brief 
 * @version 0.1
 * @date 2020-11-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef Engineer_H
#define Engineer_H
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
    
    class Engineer {
        
        public:
            /**
             * @brief Construct a new Engineer object
             * 
             */
            Engineer();

            /**
             * @brief Construct a new Engineer object
             * 
             * @param name 
             */
            Engineer(string name);

            /**
             * @brief Destroy the Engineer object
             * 
             */
            ~Engineer();

            /**
             * @brief Create a Team object
             * 
             * @param teamName 
             * @return Engineer* 
             */
            virtual Engineer* createTeam(string teamName);

            /**
             * @brief Set the Name object
             * 
             * @param name 
             */
            void setName(string name);

        private:
            string teamName;
            
    };

    
    
#endif
