/**
 * @file RaceTrack.h
 * @author Christoff Botha
 * @brief
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */
 
#if !defined(RACETRACK_H)
#define RACETRACK_H
#include "RaceTrack.h"

class RaceTrack{
    public:
        RaceTrack(int laps, int turns, float length, int straight);
        int getNumLaps();
        int getNumTurns();
        float getTotalLength();
        int getLongestStraight();
        vector<Team*> getGridOrder();
        void setGridOrder(vector<Team*>);
    private:
        int numLaps;
        int turns;
        float length;
        int longest;
        vector<Team*> gridOrder;
};

#endif
