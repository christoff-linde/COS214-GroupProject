#ifndef RACETRACKSIMULATOR_H
#define RACETRACKSIMULATOR_H

#include "Simulator.h"
#include "VirtualRaceTrack.h"

class RaceTrackSimulator : public Simulator
{

	public:

		RaceTrackSimulator();
		virtual ~RaceTrackSimulator();
		void simulate();
		void setSubject(VirtualRaceTrack* subject);
		VirtualRaceTrack* getSubject();


	private:

		VirtualRaceTrack* subject;

};

#endif