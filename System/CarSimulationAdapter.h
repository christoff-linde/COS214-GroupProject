#ifndef CARSIMULATIONADAPTER_H
#define CARSIMULATIONADAPTER_H

#include "VirtualRaceCar.h"

class CarSimulationAdapter : public VirtualRaceCar
{

	public:

		CarSimulationAdapter(RaceCar* r);
		~CarSimulationAdapter();
		void setCar(RaceCar* r);
		RaceCar* getCar();
		int getEngineLevel();
		int getAerodynamicsLevel();
		int getChassisLevel();
		int getElectronicsLevel();

	private:

		RaceCar* car;

};

#endif