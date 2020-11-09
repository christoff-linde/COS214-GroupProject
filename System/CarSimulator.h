#ifndef CARSIMULATOR_H
#define CARSIMULATOR_H

#include "Simulator.h"
#include "VirtualRaceCar.h"

class CarSimulator : public Simulator
{

	public:

		CarSimulator();
		virtual ~CarSimulator();
		void simulate();
		void setSubject(VirtualRaceCar* subject);
		VirtualRaceCar* getSubject();


	private:

		VirtualRaceCar* subject;

};

#endif