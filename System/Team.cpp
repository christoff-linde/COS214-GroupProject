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
{
    this->logisticsTeam = nullptr;
    this->engineeringStore = nullptr;
}

Team::Team(std::string _teamName)
{
    this->teamName = _teamName;
    this->logisticsTeam = nullptr;
    this->engineeringStore = nullptr;
}

Team::~Team()
{
    delete logisticsTeam;
    logisticsTeam = nullptr;
    delete engineeringStore;
    engineeringStore = nullptr;
}

void Team::scheduleRace(Race* _race, RacingStrategy* _racingStrategy)
{
    this->engineeringStore->notifySubscribers(_race);
}

std::string Team::getTeamName()
{
    return teamName;
}

void Team::assignLogisticsTeam(LogisticsTeam* _logisticsTeam)
{
    this->logisticsTeam = _logisticsTeam;
}

void Team::assignEngineeringStore(EngineeringStore* _engineeringStore)
{
    this->engineeringStore = _engineeringStore;
}