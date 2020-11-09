#ifndef VIRTUALRACETRACK_H
#define VIRTUALRACETRACK_H

class VirtualRaceTrack
{

	public:

		VirtualRaceTrack();
		virtual ~VirtualRaceTrack();
		virtual double getScore();
		virtual double getTotalLength();
		virtual int getTurns();
		virtual double getLongestStraight();


	protected:

		void setScore(double s);

	private:

		double score;
		double length;
		int turns;
		double longestStraight;

};

#endif