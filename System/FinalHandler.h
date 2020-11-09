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
#include <vector>
#include <string>
class FinalHandler : public RaceHandler {
public:
    FinalHandler(std::vector<Team*> pos, RaceTrack* tk);
    std::vector<Team*> race(std::string raceDay) override;
};

#endif