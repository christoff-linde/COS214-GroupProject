#ifndef CARSIMULATIONADAPTER_H
#define CARSIMULATIONADAPTER_H

#include "VirtualRaceCar.h"
#include "RaceCar.h"

class CarSimulationAdapter : public VirtualRaceCar
{

	public:

		CarSimulationAdapter(RaceCar* r);
		~CarSimulationAdapter();
		void setCar(RaceCar* r);
		RaceCar* getCar();
		double getEngineLevel();
		double getAerodynamicsLevel();
		double getChassisLevel();
		double getElectronicsLevel();

	private:

		RaceCar* car;

};

#endif