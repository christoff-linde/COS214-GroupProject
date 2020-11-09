/**
 * @file ElectronicsSimulationAdapter.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef ELECTRONICSSIMULATIONADAPTER_H
#define ELECTRONICSSIMULATIONADAPTER_H

#include "VirtualCarPart.h"
#include "CarPart.h"
#include "ElectronicsProduct.h"

class ElectronicsSimulationAdapter : public VirtualCarPart
{

	public:
		/**
       	 * @brief Construct a new Electronics Simulation Adapter Object
         * 
         * @param part 
         */
		ElectronicsSimulationAdapter(ElectronicsProduct* part);
		/**
       	 * @brief Destroy the Electronics Simulation Adapter Object
         * 
         * @param part 
         */
		~ElectronicsSimulationAdapter();
        /**
         * @brief Calculate the virtual level of the physical CarPart
         */
		void calculateLevel();
        /**
         * @brief Set CarPrt Object
         * 
         * @param part 
         */
		void setCarPart(ElectronicsProduct* part);
		/**
         * @brief Get the CarPart object
         * 
         * @return ElectronicsProduct* 
         */
		ElectronicsProduct* getCarPart();

	private:

		ElectronicsProduct* part;

};

#endif