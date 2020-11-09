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

class Race;

#if !defined(TEAM_H)
#define TEAM_H

#include <vector>
// #include "Race.h"
#include "EngineeringTeam.h"
#include "EngineeringStore.h"
#include "LogisticsTeam.h"
#include "RacingStrategy.h"

class EngineeringStore;

class Team
{
public:
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

    /**
     * @brief assign a EngineeringTeam to the engineeringTeam vector
     *
     * @param _engineeringTeam pointer to the EngineeringTeam to be added
     */
    void assignEngineeringTeam(EngineeringTeam* _engineeringTeam);

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
    EngineeringTeam* engineeringTeam; /** holds a pointer to the EngineeringTeam assigned to the Team */
    LogisticsTeam* logisticsTeam; /** holds a pointer to the LogisticsTeam assigned to the Team */
    EngineeringStore* engineeringStore; /** holds a pointer to the EngineeringStore assigned to the Team */
    RacingStrategy* racingStrategy; /** holds a pointer to the RacingStrategy to be used */
    std::vector<RaceCar*> teamCars; /** holds RaceCar* to the two RaceCars of the Team */
};

#endif // TEAM_H
