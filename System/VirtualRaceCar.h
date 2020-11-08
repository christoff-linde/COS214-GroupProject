#ifndef VIRTUALRACECAR_H
#define VIRTUALRACECAR_H

class VirtualRaceCar
{

	public:

		VirtualRaceCar();
		virtual ~VirtualRaceCar();
		virtual int getEngineLevel();
		void setEngineLevel(int l);
		virtual int getAerodynamicsLevel();
		void setAerodynamicsLevel(int l);
		virtual int getChassisLevel();
		void setChassisLevel(int l);
		virtual int getElectronicsLevel();
		void setElectronicsLevel(int l);

	private:

		int engineLevel;
		int aerodynamicsLevel;
		int chassisLevel;
		int electronicsLevel;

};

#endif