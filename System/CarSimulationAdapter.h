/**
 * @file CarSimulationAdapter.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef CARSIMULATIONADAPTER_H
#define CARSIMULATIONADAPTER_H

#include "VirtualRaceCar.h"
#include "RaceCar.h"

class CarSimulationAdapter : public VirtualRaceCar
{

	public:
		/**
       	 * @brief Construct a Car Simulation Adapter Object
         * 
         * @param r 
         */
		CarSimulationAdapter(RaceCar* r);
		/**
       	 * @brief Destroy the Car Simulation Adapter Object
         */
		~CarSimulationAdapter();
		/**
         * @brief Set the Race Car
         * 
         * @param r
         */
		void setCar(RaceCar* r);
		/**
         * @brief Get the Race Car
         * 
         * @return RaceCar* 
         */
		RaceCar* getCar();
		/**
         * @brief Get the engine level
         * 
         * @return double 
         */
		double getEngineLevel();
		/**
         * @brief Get the aerodynamics level
         * 
         * @return double 
         */
		double getAerodynamicsLevel();
		/**
         * @brief Get the chassis level
         * 
         * @return double 
         */
		double getChassisLevel();
		/**
         * @brief Get the electronics level
         * 
         * @return double 
         */
		double getElectronicsLevel();

	private:

		RaceCar* car;

};

#endif