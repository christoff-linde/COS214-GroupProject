#ifndef CARPARTSIMULATOR_H
#define CARPARTSIMULATOR_H

#include "Simulator.h"
#include "VirtualCarPart.h"

class CarPartSimulator : public Simulator
{

	public:

		CarPartSimulator();
		virtual ~CarPartSimulator();
		void setSubject(VirtualCarPart* subject);
		VirtualCarPart* getSubject();

	protected:
		void simulate();


	private:

		VirtualCarPart* subject;

};

#endif