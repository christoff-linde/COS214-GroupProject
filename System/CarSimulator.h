#ifndef CARSIMULATOR_H
#define CARSIMULATOR_H

#include "Simulator.h"
#include "VirtualRaceCar.h"

class CarSimulator : public Simulator
{

	public:

		CarSimulator();
		virtual ~CarSimulator();
		void setSubject(VirtualRaceCar* subject);
		VirtualRaceCar* getSubject();

	protected:
		void simulate();


	private:

		VirtualRaceCar* subject;

};

#endif