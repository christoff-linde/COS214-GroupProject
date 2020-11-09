/**
 * @file RaceTrackSimulationAdapter.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef RACETRACKSIMULATIONADAPTER_H
#define RACETRACKSIMULATIONADAPTER_H

#include "VirtualRaceTrack.h"
#include "RaceTrack.h"

class RaceTrackSimulationAdapter : public VirtualRaceTrack
{

	public:
		/**
         * @brief Construct Race Track Simulation Adapter Object
         * 
         * @param t
         */
		RaceTrackSimulationAdapter(RaceTrack* t);
		/**
       	 * @brief Destroy the Race Track Simulation Adapter Object
         */
		~RaceTrackSimulationAdapter();
		/**
         * @brief Set the race track
         * 
         * @param t
         */
		void setRaceTrack(RaceTrack* t);
		/**
         * @brief Get the race track
         * 
         * @return RaceTrack* 
         */
		RaceTrack* getRaceTrack();
		/**
         * @brief Get the score
         * 
         * @return double
         */
		double getScore();
		/**
         * @brief Get the total length
         * 
         * @return double
         */
		double getTotalLength();
		/**
         * @brief Get the number of turns
         * 
         * @return int
         */
		int getTurns();
		/**
         * @brief Get the length of the longest straight
         * 
         * @return double
         */
		double getLongestStraight();

	private:

		RaceTrack* track;

};

#endif