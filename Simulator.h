#ifndef SIMULATOR_H
#define SIMULATOR_H

class Simulator
{

	public:

		Simulator();
		virtual ~Simulator();
		void runSimulator();
		virtual void simulate() = 0;
		void setResult(double result);
		double getResult();


	private:

		double result;

};

#endif