#ifndef CARPARTSIMULATIONADAPTER_H
#define CARPARTSIMULATIONADAPTER_H

#include "VirtualCarPart.h"
#include "CarPart.h"

class CarPartSimulationAdapter : public VirtualCarPart
{

	public:

		CarPartSimulationAdapter(CarPart* p);
		~CarPartSimulationAdapter();
		void setCarPart(CarPart* p);
		CarPart* getCarPart();
		double getLevel();

	private:

		CarPart* part;

};

#endif