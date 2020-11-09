#ifndef VIRTUALRACECAR_H
#define VIRTUALRACECAR_H

class VirtualRaceCar
{

	public:

		VirtualRaceCar();
		virtual ~VirtualRaceCar();
		virtual double getEngineLevel();
		void setEngineLevel(double l);
		virtual double getAerodynamicsLevel();
		void setAerodynamicsLevel(double l);
		virtual double getChassisLevel();
		void setChassisLevel(double l);
		virtual double getElectronicsLevel();
		void setElectronicsLevel(double l);

	private:

		double engineLevel;
		double aerodynamicsLevel;
		double chassisLevel;
		double electronicsLevel;

};

#endif