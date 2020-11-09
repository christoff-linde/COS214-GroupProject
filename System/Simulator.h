#ifndef SIMULATOR_H
#define SIMULATOR_H

class Simulator
{

	public:

		Simulator();
		virtual ~Simulator();
		void runSimulator();
		virtual void simulate() = 0;
		double getResult();

	protected:
		void setResult(double result);

	private:

		double result;

};

#endif