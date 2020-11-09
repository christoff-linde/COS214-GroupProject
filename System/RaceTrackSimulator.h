#ifndef RACETRACKSIMULATOR_H
#define RACETRACKSIMULATOR_H

#include "Simulator.h"
#include "VirtualRaceTrack.h"

class RaceTrackSimulator : public Simulator
{

	public:

		RaceTrackSimulator();
		virtual ~RaceTrackSimulator();
		void setSubject(VirtualRaceTrack* subject);
		VirtualRaceTrack* getSubject();

	protected:
		void simulate();

	private:

		VirtualRaceTrack* subject;

};

#endif