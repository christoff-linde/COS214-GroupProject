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
     * @brief Destroy the Team object
     *
     */
    ~Team();
};

#endif // TEAM_H