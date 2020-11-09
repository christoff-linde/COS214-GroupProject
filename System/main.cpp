#include "Race.h"
#include <vector>
#include<iostream>
using namespace std;
int main()
{

    RaceTrack* track1 = new RaceTrack(20,4,3.0,3);
    RaceTrack* track2 = new RaceTrack(20,4,3.0,3);
    RaceTrack* track3 = new RaceTrack(20,4,3.0,3);
    RaceTrack* track4 = new RaceTrack(20,4,3.0,3);
    RaceTrack* track5 = new RaceTrack(20,4,3.0,3);


    Race* race1 = new Race("Barcelona", "18 Feb", track1);
    Race* race2 = new Race("Barcelona", "18 Feb", track1);
    Race* race3 = new Race("France", "18 Feb", track2);
    Race* race4 = new Race("Italy", "18 Feb", track3);
    Race* race5 = new Race("Spain", "18 Feb", track4);
    Race* race6 = new Race("Zimbabwe", "18 Feb", track5);


    std::vector<Race*> racelist;
    racelist.push_back(race1);
    racelist.push_back(race2);
    racelist.push_back(race3);
    racelist.push_back(race4);
    racelist.push_back(race5);
    racelist.push_back(race6);


    Team* team1 = new Team();
    Team* team2 = new Team();
    Team* team3 = new Team();
    Team* team4 = new Team();
    Team* team5 = new Team();
    Team* team6 = new Team();
    Team* team7 = new Team();
    Team* team8 = new Team();
    Team* team9 = new Team();
    Team* team10 = new Team();


    std::vector<Team*> teamlist;
    teamlist.push_back(team1);
    teamlist.push_back(team2);
    teamlist.push_back(team3);
    teamlist.push_back(team4);
    teamlist.push_back(team5);
    teamlist.push_back(team6);
    teamlist.push_back(team7);
    teamlist.push_back(team8);
    teamlist.push_back(team9);
    teamlist.push_back(team10);



    for(auto race : racelist){
        race->RegisterTeams(teamlist);
    }

    race1->runRaces();
    
    

    cout<< race1->getPoints(team5)<<endl;
    int size = race1->getPositions().size();
    cout<<race1->getPositions()<<endl;
    

    return 0;
}