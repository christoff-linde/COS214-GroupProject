/**
 * @file VirtualRaceTrack.h
 * @author Daelin Campleman
 * @brief 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef VIRTUALRACETRACK_H
#define VIRTUALRACETRACK_H

class VirtualRaceTrack
{

	public:
		/**
         * @brief Construct Virtual Race Track
         */
		VirtualRaceTrack();
		/**
         * @brief Destroy Virtual Race Track
         */
		virtual ~VirtualRaceTrack();
		/**
         * @brief Get the score
         * 
         * @return double
         */
		virtual double getScore();
		/**
         * @brief Get the total length
         * 
         * @return double
         */
		virtual double getTotalLength();
		/**
         * @brief Get the number of turns
         * 
         * @return double
         */
		virtual int getTurns();
		/**
         * @brief Get the length of the longest straight
         * 
         * @return double
         */
		virtual double getLongestStraight();


	protected:
		/**
         * @brief Set the score
         * 
         * @param s
         */
		void setScore(double s);

	private:

		double score;
		double length;
		int turns;
		double longestStraight;

};

#endif