/**
 * @file ChassisSimulationAdapter.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef CHASSISSIMULATIONADAPTER_H
#define CHASSISSIMULATIONADAPTER_H

#include "VirtualCarPart.h"
#include "CarPart.h"
#include "ChassisProduct.h"

class ChassisSimulationAdapter : public VirtualCarPart
{

	public:
		/**
       	 * @brief Construct a new Chassis Simulation Adapter Object
         * 
         * @param part 
         */
		ChassisSimulationAdapter(ChassisProduct* part);
		/**
       	 * @brief Destroy the Chassis Simulation Adapter Object
         * 
         * @param part 
         */
		~ChassisSimulationAdapter();
        /**
         * @brief Calculate the virtual level of the physical CarPart
         */
		void calculateLevel();
        /**
         * @brief Set CarPrt Object
         * 
         * @param part 
         */
		void setCarPart(ChassisProduct* part);
		/**
         * @brief Get the CarPart object
         * 
         * @return ChassisProduct* 
         */
		ChassisProduct* getCarPart();

	private:

		ChassisProduct* part;

};

#endif