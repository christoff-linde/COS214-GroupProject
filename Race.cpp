#include "Race.h"
#include <string>
#include <vector>
using namespace std;

Race::Race(string loc, string dat){
    location = loc;
    date = dat;
}

Race::~Race(){

}

string Race::getLocation(){
    return location;
}

string Race::getDate(){
    return date;
}

void Race::RegisterTeam(Team* team){
    teams.push_back(team);
}

vector<Team*> Race::getPositions(){
    return state.getPositions();
}

vector<Team*> Race::getTeams(){
    return teams;
}

void Race::nextRace(){
    state = state.switchRaceState();
    state.runRace();
}

void Race::runRace(){
    state = new practiceState(teams);
    state.setDay("Friday");
    //Practice Race 1 
    state.runRace();

    //Practice Race 2
    nextRace();

    //Qualifying Race 
    nextRace();

    //Final Race 
    nextRace();
}
