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
#include <vector>

class RaceTrack {
public:
    RaceTrack(int laps, int turns, float length, int straight);
    int getNumLaps();
    int getNumTurns();
    float getTotalLength();
    int getLongestStraight();
    std::vector<Team*> getGridOrder();
    void setGridOrder(std::vector<Team*>);
    
private:
    int numLaps;
    int turns;
    float length;
    int longest;
    std::vector<Team*> gridOrder;
};

#endif
