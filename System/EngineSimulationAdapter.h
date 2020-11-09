/**
 * @file EngineSimulationAdapter.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef ENGINESIMULATIONADAPTER_H
#define ENGINESIMULATIONADAPTER_H

#include "VirtualCarPart.h"
#include "CarPart.h"
#include "EngineProduct.h"

class EngineSimulationAdapter : public VirtualCarPart
{

	public:
		/**
       	 * @brief Construct a new Engine Simulation Adapter Object
         * 
         * @param part 
         */
		EngineSimulationAdapter(EngineProduct* part);
		/**
       	 * @brief Destroy the Engine Simulation Adapter Object
         * 
         * @param part 
         */
		~EngineSimulationAdapter();
        /**
         * @brief Calculate the virtual level of the physical CarPart
         */
		void calculateLevel();
        /**
         * @brief Set CarPrt Object
         * 
         * @param part 
         */
		void setCarPart(EngineProduct* part);
		/**
         * @brief Get the CarPart object
         * 
         * @return EngineProduct* 
         */
		EngineProduct* getCarPart();

	private:

		EngineProduct* part;

};

#endif