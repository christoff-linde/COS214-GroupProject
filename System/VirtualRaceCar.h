/**
 * @file VirtualRaceCar.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef VIRTUALRACECAR_H
#define VIRTUALRACECAR_H

class VirtualRaceCar
{

	public:
		/**
       	 * @brief Construct a Virtual Race Car
         */
		VirtualRaceCar();
		/**
       	 * @brief Destroy the Virtual Race Car
         */
		virtual ~VirtualRaceCar();
		/**
         * @brief Get the engine level
         * 
         * @return double 
         */
		virtual double getEngineLevel();
		/**
         * @brief Set the engine level
         * 
         * @param l
         */
		void setEngineLevel(double l);
		/**
         * @brief Get the aerodynamics level
         * 
         * @return double 
         */
		virtual double getAerodynamicsLevel();
		/**
         * @brief Set the aerodynamics level
         * 
         * @param l
         */
		void setAerodynamicsLevel(double l);
		/**
         * @brief Get the chassis level
         * 
         * @return double 
         */
		virtual double getChassisLevel();
		/**
         * @brief Set the chassis level
         * 
         * @param l
         */
		void setChassisLevel(double l);
		/**
         * @brief Get the electronics level
         * 
         * @return double 
         */
		virtual double getElectronicsLevel();
		/**
         * @brief Set the electronics level
         * 
         * @param l
         */
		void setElectronicsLevel(double l);

	private:

		double engineLevel;
		double aerodynamicsLevel;
		double chassisLevel;
		double electronicsLevel;

};

#endif