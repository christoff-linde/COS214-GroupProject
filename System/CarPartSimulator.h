#ifndef CARPARTSIMULATOR_H
#define CARPARTSIMULATOR_H

#include "Simulator.h"
#include "VirtualCarPart.h"

class CarPartSimulator : public Simulator
{

	public:

		CarPartSimulator();
		virtual ~CarPartSimulator();
		void simulate();
		void setSubject(VirtualCarPart* subject);
		VirtualCarPart* getSubject();


	private:

		VirtualCarPart* subject;

};

#endif