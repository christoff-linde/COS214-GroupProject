/**
 * @file AerodynamicsSimulationAdapter.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef AERODYNAMICSSIMULATIONADAPTER_H
#define AERODYNAMICSSIMULATIONADAPTER_H

#include "VirtualCarPart.h"
#include "CarPart.h"
#include "AerodynamicsProduct.h"

class AerodynamicsSimulationAdapter : public VirtualCarPart
{

	public:
		/**
       	 * @brief Construct a new Aerodynamics Simulation Adapter Object
         * 
         * @param part 
         */
		AerodynamicsSimulationAdapter(AerodynamicsProduct* part);
		/**
       	 * @brief Destroy the Aerodynamics Simulation Adapter Object
         * 
         * @param part 
         */
		~AerodynamicsSimulationAdapter();
        /**
         * @brief Calculate the virtual level of the physical CarPart
         */
		void calculateLevel();
        /**
         * @brief Set CarPrt Object
         * 
         * @param part 
         */
		void setCarPart(AerodynamicsProduct* part);
		/**
         * @brief Get the CarPart object
         * 
         * @return AerodynamicsProduct* 
         */
		AerodynamicsProduct* getCarPart();

	private:

		AerodynamicsProduct* part;

};

#endif