/**
 * @file Simulator.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "VirtualRaceCar.h"
#include "VirtualCarPart.h"

class Simulator
{

	public:
		/**
       	 * @brief Construct a Simulator Object
         */
		Simulator();
		/**
       	 * @brief Destroy the Simulator Object
         */
		virtual ~Simulator();
		/**
         * @brief Run simulation
         * 
         * @return void 
         */
		void runSimulator();
		/**
         * @brief Run simulation (virtual)
         * 
         * @return void 
         */
		virtual void simulate() = 0;
		/**
         * @brief Get the result of the simulation
         * 
         * @return double 
         */
		double getResult();
      /**
         * @brief Set the subject
         * 
         * @param subject
         */
      virtual void setSubject(VirtualRaceCar* subject)=0;
      virtual void setSubject(VirtualCarPart* subject)=0;

	protected:
		/**
         * @brief Set the result of the simulation
         * 
         * @param n 
         */
		void setResult(double result);

	private:

		double result;

};

#endif