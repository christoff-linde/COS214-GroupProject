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
    this->engineeringTeam = nullptr;
    this->logisticsTeam = nullptr;
}

Team::~Team()
{
    for (auto&& car : teamCars)
        delete car;

    delete engineeringTeam;
    engineeringTeam = nullptr;
    delete logisticsTeam;
    logisticsTeam = nullptr;
}

void Team::scheduleRace(Race* _race, RacingStrategy* _racingStrategy)
{
    this->engineeringTeam->notifySubscribers();
}

std::string Team::getTeamName()
{
    return teamName;
}

RacingStrategy* Team::getRacingStrategy()
{
    return this->racingStrategy;
}

void Team::assignEngineeringTeam(EngineeringTeam* _engineeringTeam)
{
    this->engineeringTeam = _engineeringTeam;
}

void Team::assignLogisticsTeam(LogisticsTeam* _logisticsTeam)
{
    this->logisticsTeam = _logisticsTeam;
}