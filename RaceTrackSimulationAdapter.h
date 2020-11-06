#ifndef RACETRACKSIMULATIONADAPTER_H
#define RACETRACKSIMULATIONADAPTER_H

#include "VirtualRaceTrack.h"

class RaceTrackSimulationAdapter : public VirtualRaceTrack
{

	public:

		RaceTrackSimulationAdapter(RaceTrack* t);
		~RaceTrackSimulationAdapter();
		void setRaceTrack(RaceTrack* t);
		RaceTrack* getRaceTrack();
		int getLevel();

	private:

		RaceTrack* track;

};

#endif