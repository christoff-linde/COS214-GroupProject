/**
 * @file Team.h
 * @author Christoff Linde
 * @brief Team Facade that handles the initial scheduling of a Race
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(TEAM_H)
#define TEAM_H

#include <vector>
#include "EngineeringTeam.h"
#include "LogisticsTeam.h"
#include "RacingStrategy.h"
#include "Race.h"

class Team
{
public:
    /**
     * @brief Construct a new Team object
     *
     */
    Team();

    /**
     * @brief Destroy the Team object
     *
     */
    ~Team();

    /**
     * @brief Entry point method used to initiate all the operations involving scheduling and preparing for a Race
     *
     * @param _race pointer to the Race that is being prepared for
     * @param _racingStrategy pointer to the RacingStrategy that is to be considered when scheduling
     */
    void scheduleRace(Race* _race, RacingStrategy* _racingStrategy);

    /**
     * @brief Get the Team Name 
     * 
     * @return std::string name of the Team
     */
    std::string getTeamName();

    /**
     * @brief Get the RacingStrategy of the Team
     * 
     * @return RacingStrategy* pointer to the RacingStrategy
     */
    RacingStrategy* getRacingStrategy();

private:
    std::vector<RaceCar*> teamCars; /** holds RaceCar* to the two RaceCars of the Team */
    EngineeringTeam* engineeringTeam; /** holds a pointer to the EngineeringTeam assigned to the Team */
    LogisticsTeam* logisticsTeam; /** holds a pointer to the LogisticsTeam assigned to the Team */
    std::string teamName; /** the name of the Team */
};

#endif // TEAM_H
