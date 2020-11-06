#ifndef VIRTUALCARPART_H
#define VIRTUALCARPART_H

class VirtualCarPart
{

	public:

		VirtualCarPart();
		virtual ~VirtualCarPart();
		virtual int getLevel();
		void setLevel(int l);

	private:

		int level;

};

#endif