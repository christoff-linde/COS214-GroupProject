/**
 * @file RaceHandler.h
 * @author Christoff Botha
 * @brief
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(RACEHANDLER_H)
#define RACEHANDLER_H

class Race;
#include <string>
#include <vector>
#include"RaceTrack.h"

class RaceHandler
{
public:
    RaceHandler* setNext(RaceHandler* handler);
    virtual std::vector<Team*> race(std::string raceDay);
private:
    RaceHandler* next;
protected:
    void runRace();
    std::vector<Team*> positions;
    RaceTrack* track;
};

#endif // RACEHANDLER_H