#ifndef CARPARTSIMULATIONADAPTER_H
#define CARPARTSIMULATIONADAPTER_H

#include "VirtualCarPart.h"

class CarPartSimulationAdapter : public VirtualCarPart
{

	public:

		CarPartSimulationAdapter(CarPart* p);
		~CarPartSimulationAdapter();
		void setCarPart(CarPart* p);
		CarPart* getCarPart();
		int getLevel();

	private:

		CarPart* part;

};

#endif