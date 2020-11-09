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

#include "PracticeHandler.h"
#include "QualifyingHandler.h"
#include "FinalHandler.h"

#include <string>
#include <vector>

class Race
{
public:
    Race(std::string location, std::string date, RaceTrack* racetrack);
    ~Race();
    void runRaces();
    std::string getLocation();
    std::string getDate();
    void RegisterTeams(std::vector<Team*> teams);
    std::vector<Team*> getTeams();
    std::vector<Team*> getPositions();
    void setPositions(std::vector<Team*>);
    int getPoints(Team* team);
    RaceTrack* getTrack();
    void setTrack(RaceTrack*);
    bool getIsLocal();
private:
    std::string location;
    std::vector<Team*> teams;
    std::string date;
    RaceTrack* track;
    std::vector<Team*> positions;
    bool isLocal;
};

#endif