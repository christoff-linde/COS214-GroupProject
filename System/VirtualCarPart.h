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
         */
		VirtualCarPart(string name);
		/**
       	 * @brief Destroy the Virtual Car Part
         */
		virtual ~VirtualCarPart();
		/**
         * @brief Get the level
         * 
         * @return double 
         */
		double getLevel();
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
		void setLevel(double l);

	private:

		double level;
		string name;

};

#endif