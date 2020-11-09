/**
 * @file QualifyingHandler.h
 * @author Christoff Botha
 * @brief
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */
 

#if !defined(QUALIFYINGHANDLER_H)
#define QUALIFYINGHANDLER_H
#include "RaceHandler.h"

class QualifyingHandler: public RaceHandler{
    public:
        QualifyingHandler(Race* race);
        vector<Team*> QualifyingHandler::race(string raceDay) override;
};

#endif
