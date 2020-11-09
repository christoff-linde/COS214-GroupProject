/**
 * @file CarSimulator.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef CARSIMULATOR_H
#define CARSIMULATOR_H

#include "Simulator.h"
#include "VirtualRaceCar.h"

class CarSimulator : public Simulator
{

	public:
		/**
       	 * @brief Construct a Car Simiulator Object
         */
		CarSimulator();
		/**
       	 * @brief Destroy the Car Simulator Object
         */
		virtual ~CarSimulator();
		/**
         * @brief Set the subject
         * 
         * @param subject
         */
		void setSubject(VirtualRaceCar* subject);
		/**
         * @brief Get the subject
         * 
         * @return VirtualRaceCar* 
         */
		VirtualRaceCar* getSubject();

	protected:
		/**
         * @brief Run simulation
         * 
         * @return void 
         */
		void simulate();


	private:

		VirtualRaceCar* subject;

};

#endif