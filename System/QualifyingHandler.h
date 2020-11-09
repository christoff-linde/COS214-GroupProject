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
#include <vector>
#include <string>
class QualifyingHandler: public RaceHandler{
    public:
        QualifyingHandler(std::vector<Team*> pos, RaceTrack* tk);
        std::vector<Team*> race(std::string raceDay) override;
};

#endif
