/**
 * @file Race.h
 * @author Christoff Botha & Christoff Linde
 * @brief
 * @version 0.1
 * @date 2020-11-05
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(RACE_H)
#define RACE_H

#include "Team.h"
#include "RaceState.h"
#include <string>
#include <vector>

class Race
{
public:
    Race(string location, string date);
    ~Race();
    void runRace();
    string getLocation();
    string getDate();
    void RegisterTeam(Team* team);
    vector<Team*> getTeams();
    vector<Team*> getPositions();
private:
    void nextRace();
    RaceState* state;
    string location;
    vector<Team*> teams;
    string date;
};

#endif // RACE_H