/**
 * @file Race.h
 * @author Christoff Botha
 * @brief
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */



#if !defined(RACE_H)
#define RACE_H

#include "Team.h"
#include "RaceTrack.h"
#include "RaceHandler.h"
#include "PracticeHandler.h"
#include "QualifyingHandler.h"
#include "FinalHandler.h"

#include <string>
#include <vector>

class Race
{
    public:
        Race(string location, string date);
        ~Race();
        void runRaces();
        string getLocation();
        string getDate();
        void RegisterTeam(Team* team);
        vector<Team*> getTeams();
        vector<Team*> getPositions();
        void setPositions(vector<Team*>);
        int getPoints(Team* team);
        RaceTrack* getTrack();
        void setTrack(RaceTrack*);
    private:
        string location;
        vector<Team*> teams;
        string date;
        RaceTrack* track;
        vector<Team*> positions;
};

#endif 