/**
 * @file FinalHandler.h
 * @author Christoff Botha
 * @brief
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#include "RaceHandler.h"
#if !defined(FINALHANDLER_H)
#define FINALHANDLER_H

class FinalHandler: public RaceHandler{
    public:
        FinalHandler(Race* race);
        vector<Team*> FinalHandler::race(string raceDay) override;
};

#endif
