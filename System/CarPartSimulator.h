/**
 * @file CarPartSimulator.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef CARPARTSIMULATOR_H
#define CARPARTSIMULATOR_H

#include "Simulator.h"
#include "VirtualCarPart.h"

class CarPartSimulator : public Simulator
{

	public:
		/**
       	 * @brief Construct a Car Part Simulator Object
         */
		CarPartSimulator();
		/**
       	 * @brief Destroy the Car Part Simulator Object
         */
		virtual ~CarPartSimulator();
		/**
         * @brief Set the subject of the simulator
         * 
         * @param subject
         */
		void setSubject(VirtualCarPart* subject);
		/**
         * @brief Get the subject of the simulator
         * 
         * @return VirtualCarPart* 
         */
		VirtualCarPart* getSubject();

	protected:
		/**
         * @brief Run simulation
         * 
         * @return void 
         */
		void simulate();


	private:

		VirtualCarPart* subject;

};

#endif