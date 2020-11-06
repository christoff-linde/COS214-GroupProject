#ifndef VIRTUALRACETRACK_H
#define VIRTUALRACETRACK_H

class VirtualRaceTrack
{

	public:

		VirtualRaceTrack();
		virtual ~VirtualRaceTrack();
		virtual int getLevel();
		void setLevel(int l);

	private:

		// still working out this
		int level;

};

#endif