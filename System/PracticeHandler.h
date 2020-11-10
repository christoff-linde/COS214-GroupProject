/**
 * @file PracticeHandler.h
 * @author Christoff Botha
 * @brief
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(PRACTICEHANDLER_H)
#define PRACTICEHANDLER_H
#include "RaceHandler.h"
#include <vector>
#include <string>
class PracticeHandler : public RaceHandler {
public:
    PracticeHandler(std::vector<Team*> pos, RaceTrack* tk);
    std::vector<Team*> race(std::string raceDay) override;
};

#endif
