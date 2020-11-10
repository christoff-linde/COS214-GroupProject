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
#include "LogisticsTeam.h"
#include "EngineeringStore.h"

class Team
{
public:
    /**
     * @brief Construct a new Team object
     *
     * @param _teamName name of the Team
     */
    Team();

    /**
     * @brief Construct a new Team object
     * 
     * @param _teamName name of the Team
     */
    Team(std::string _teamName);

    /**
     * @brief Destroy the Team object
     *
     */
    ~Team();

    /**
     * @brief Get the Team Name
     *
     * @return std::string name of the Team
     */
    std::string getTeamName();

    /**
     * @brief Entry point method used to initiate all the operations involving scheduling and preparing for a Race
     *
     * @param _race pointer to the Race that is being prepared for
     * @param _racingStrategy pointer to the RacingStrategy that is to be considered when scheduling
     */
    void scheduleRace(Race* _race, RacingStrategy* _racingStrategy);

    /**
     * @brief assign a LogisticsTeam to the engineeringTeam vector
     *
     * @param _engineeringTeam pointer to the LogisticsTeam to be added
     */
    void assignLogisticsTeam(LogisticsTeam* _logisticsTeam);

    /**
     * @brief assign a EngineeringStore to the engineeringStore variable
     *
     * @param _engineeringStore pointer to a EngineeringStore
     */
    void assignEngineeringStore(EngineeringStore* _engineeringStore);

private:
    std::string teamName; /** the name of the Team */
    LogisticsTeam* logisticsTeam; /** holds a pointer to the LogisticsTeam assigned to the Team */
    EngineeringStore* engineeringStore; /** holds a pointer to the EngineeringStore assigned to the Team */
};

#endif // TEAM_H