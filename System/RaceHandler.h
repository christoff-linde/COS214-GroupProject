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


#include "Race.h"
#include <string>
#include <vector>

class RaceHandler
{
    public:
        RaceHandler();
        RaceHandler* setNext(RaceHandler* handler);
        virtual vector<Team*> race(string raceDay);
    private:
        RaceHandler* next;
    protected:
        void runRace();
        Race * event;
};

#endif // RACEHANDLER_H