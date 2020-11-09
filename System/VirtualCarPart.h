#ifndef VIRTUALCARPART_H
#define VIRTUALCARPART_H

#include <string>

using namespace std;

class VirtualCarPart
{

	public:

		VirtualCarPart();
		virtual ~VirtualCarPart();
		virtual int getLevel();
		void setName(string n);
		string getName();

	protected:
		void setLevel(int l);

	private:

		int level;
		string name;

};

#endif