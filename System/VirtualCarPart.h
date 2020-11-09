/**
 * @file VirtualCarPart.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef VIRTUALCARPART_H
#define VIRTUALCARPART_H

#include <string>

using namespace std;

class VirtualCarPart
{

	public:
		/**
       	 * @brief Construct a Virtual Car Part
         * 
         * @param part 
         */
		VirtualCarPart();
		/**
       	 * @brief Destroy the Virtual Car Part
         * 
         * @param part 
         */
		virtual ~VirtualCarPart();
		/**
         * @brief Get the level
         * 
         * @return int 
         */
		virtual int getLevel();
		/**
         * @brief Set the name
         * 
         * @param n 
         */
		void setName(string n);
		/**
         * @brief Get the name
         * 
         * @return string 
         */
		string getName();

	protected:
		/**
         * @brief Set the level
         * 
         * @param l
         */
		void setLevel(int l);

	private:

		int level;
		string name;

};

#endif