#include "Race.h"
#include <vector>
#include<iostream>
#include <string>
using namespace std;

Race::Race(std::string loc, std::string dat, RaceTrack* racetrack) {
    location = loc;
    date = dat;
    track = racetrack;
}

Race::~Race() {
    positions.clear();
    teams.clear();
}

std::string Race::getLocation() {
    return location;
}

std::string Race::getDate() {
    return date;
}

void Race::RegisterTeams(std::vector<Team*> teams) {
    this->teams = teams;
}

std::vector<Team*> Race::getPositions() {
    return positions;
}
void Race::setPositions(std::vector<Team*> pos) {
    positions = pos;
}

std::vector<Team*> Race::getTeams() {
    return teams;
}

int Race::getPoints(Team* team) {
    int i = 0;
    for (const Team* tem : positions) {
        if (tem == team) {
            break;
        }
        i++;
    }
    switch (i) {
    case 0:
        return 25;
        break;
    case 1:
        return 18;
        break;
    case 2:
        return 15;
        break;
    case 3:
        return 12;
        break;
    case 4:
        return 10;
        break;
    case 5:
        return 8;
        break;
    case 6:
        return 6;
        break;
    case 7:
        return 4;
        break;
    case 8:
        return 2;
        break;
    case 9:
        return 1;
        break;
    default:
        return 0;
    }

    return 69;
}

void Race::runRaces() {
    RaceHandler* raceWeekend = new RaceHandler;
    vector<string> weekend;
    weekend.push_back("practice");
    weekend.push_back("practice");
    weekend.push_back("qualifying");
    weekend.push_back("final");
    vector<Team*> pos = positions;
    RaceTrack* tk = track;
    PracticeHandler* practice = new PracticeHandler(pos, tk);
    QualifyingHandler* qualifier = new QualifyingHandler(pos, tk);
    FinalHandler* final = new FinalHandler(pos, tk);

    raceWeekend->setNext(practice)->setNext(qualifier)->setNext(final);

    for (const std::string& day : weekend) {
        setPositions(raceWeekend->race(day));
    }

    delete final;
    delete qualifier;
    delete practice;
    delete raceWeekend;
}

bool Race::getIsLocal()
{
    return isLocal;
}