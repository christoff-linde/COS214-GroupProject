/**
 * @file RaceTrackSimulator.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef RACETRACKSIMULATOR_H
#define RACETRACKSIMULATOR_H

#include "Simulator.h"
#include "VirtualRaceTrack.h"

class RaceTrackSimulator : public Simulator
{

	public:
		/**
         * @brief Construct Race Track Simulator
         */
		RaceTrackSimulator();
		/**
         * @brief Destroy Race Track Simulator
         */
		virtual ~RaceTrackSimulator();
		/**
         * @brief Set the subject object
         * 
         * @param subject
         */
		void setSubject(VirtualRaceTrack* subject);
		/**
         * @brief Get the subject object
         * 
         * @return VirtualRaceTrack* 
         */
		VirtualRaceTrack* getSubject();

	protected:
		/**
         * @brief Simulate the subject
         * 
         * @return void
         */
		void simulate();

	private:

		VirtualRaceTrack* subject;

};

#endif