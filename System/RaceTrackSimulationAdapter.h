#ifndef RACETRACKSIMULATIONADAPTER_H
#define RACETRACKSIMULATIONADAPTER_H

#include "VirtualRaceTrack.h"
#include "RaceTrack.h"

class RaceTrackSimulationAdapter : public VirtualRaceTrack
{

	public:

		RaceTrackSimulationAdapter(RaceTrack* t);
		~RaceTrackSimulationAdapter();
		void setRaceTrack(RaceTrack* t);
		RaceTrack* getRaceTrack();
		double getScore();
		double getTotalLength();
		int getTurns();
		double getLongestStraight();

	private:

		RaceTrack* track;

};

#endif