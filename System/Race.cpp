#include "Race.h"


using namespace std;

Race::Race(string loc, string dat) {
    location = loc;
    date = dat;
}

Race::~Race() {

}

string Race::getLocation() {
    return location;
}

string Race::getDate() {
    return date;
}

void Race::RegisterTeams(std::vector<Team*> teams) {
    this->teams = teams;
}

vector<Team*> Race::getPositions() {
    return positions;
}
void Race::setPositions(vector<Team*> pos) {
    positions = pos;
}

vector<Team*> Race::getTeams() {
    return teams;
}

int Race::getPoints(Team* team) {
    int i;
    for (i = 0; i < 10;i++) {
        if (positions.at(i) == team) {
            break;
        }
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
}

void Race::runRaces() {
    RaceHandler* raceWeekend = new RaceHandler;
    vector<string> weekend = { "practice", "practice", "qualifying", "final" };

    PracticeHandler* practice = new PracticeHandler(this);
    QualifyingHandler* qualifier = new QualifyingHandler(this);
    FinalHandler* final = new FinalHandler(this);

    raceWeekend->setNext(practice)->setNext(qualifier)->setNext(final);

    for (const string& day : weekend) {
        positions = raceWeekend->race(day);
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
