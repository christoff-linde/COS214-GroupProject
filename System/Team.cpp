/**
 * @file Team.cpp
 * @author Christoff Linde
 * @brief Team Facade that handles the initial scheduling of a Race
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Team.h"

Team::Team()
{}

Team::~Team()
{}

void Team::scheduleRace(Race* _race, RacingStrategy* _racingStrategy)
{}

std::string Team::getTeamName()
{
    throw "Not yet implemented";
}

RacingStrategy* Team::getRacingStrategy()
{
    throw "Not yet implemented";
}