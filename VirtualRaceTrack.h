#ifndef VIRTUALRACETRACK_H
#define VIRTUALRACETRACK_H

class VirtualRaceTrack
{

	public:

		VirtualRaceTrack();
		virtual ~VirtualRaceTrack();
		virtual double getScore();

	protected:

		void setScore(double s);

	private:

		// still working out this
		double score;
		double length;
		int turns;
		double straight;

};

#endif