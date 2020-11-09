#include <vector>

#include "Team.h"
#include "EngineeringTeam.h"
#include "LogisticsTeam.h"
#include "Race.h"
#include "RaceTrack.h"
#include "RacingStrategy.h"

using namespace std;

int main(int argc, char const* argv[])
{
    vector<Race*> racesList;
    vector<Team*> teamsList;

    Team* team1 = new Team("Mercedes");
    Team* team2 = new Team("Red Bull Racing");
    Team* team3 = new Team("Renault");
    Team* team4 = new Team("McLaren");
    Team* team5 = new Team("Racing Point");
    Team* team6 = new Team("Ferrari");
    Team* team7 = new Team("AlphaTauri");
    Team* team8 = new Team("Alfa Romeo Racing");
    Team* team9 = new Team("Haas F1 Team");
    Team* team10 = new Team("Williams");

    // teamsList.push_back(team1);
    // teamsList.push_back(team2);
    // teamsList.push_back(team3);
    // teamsList.push_back(team4);
    // teamsList.push_back(team5);
    // teamsList.push_back(team6);
    // teamsList.push_back(team7);
    // teamsList.push_back(team8);
    // teamsList.push_back(team9);
    // teamsList.push_back(team10);

    EngineeringTeam* eTeam1 = new EngineeringTeam();
    LogisticsTeam* lTeam1 = new LogisticsTeam();
    team1->assignEngineeringTeam(eTeam1);
    team1->assignLogisticsTeam(lTeam1);

    // EngineeringTeam* eTeam2 = new EngineeringTeam();
    // LogisticsTeam* lTeam2 = new LogisticsTeam();
    // team2->assignEngineeringTeam(eTeam2);
    // team2->assignLogisticsTeam(lTeam2);

    // EngineeringTeam* eTeam3 = new EngineeringTeam();
    // LogisticsTeam* lTeam3 = new LogisticsTeam();
    // team3->assignEngineeringTeam(eTeam3);
    // team3->assignLogisticsTeam(lTeam3);

    // EngineeringTeam* eTeam4 = new EngineeringTeam();
    // LogisticsTeam* lTeam4 = new LogisticsTeam();
    // team4->assignEngineeringTeam(eTeam4);
    // team4->assignLogisticsTeam(lTeam4);

    // EngineeringTeam* eTeam5 = new EngineeringTeam();
    // LogisticsTeam* lTeam5 = new LogisticsTeam();
    // team5->assignEngineeringTeam(eTeam5);
    // team5->assignLogisticsTeam(lTeam5);

    // EngineeringTeam* eTeam6 = new EngineeringTeam();
    // LogisticsTeam* lTeam6 = new LogisticsTeam();
    // team6->assignEngineeringTeam(eTeam6);
    // team6->assignLogisticsTeam(lTeam6);

    // EngineeringTeam* eTeam7 = new EngineeringTeam();
    // LogisticsTeam* lTeam7 = new LogisticsTeam();
    // team7->assignEngineeringTeam(eTeam7);
    // team7->assignLogisticsTeam(lTeam7);

    // EngineeringTeam* eTeam8 = new EngineeringTeam();
    // LogisticsTeam* lTeam8 = new LogisticsTeam();
    // team8->assignEngineeringTeam(eTeam8);
    // team8->assignLogisticsTeam(lTeam8);

    // EngineeringTeam* eTeam9 = new EngineeringTeam();
    // LogisticsTeam* lTeam9 = new LogisticsTeam();
    // team9->assignEngineeringTeam(eTeam9);
    // team9->assignLogisticsTeam(lTeam9);

    // EngineeringTeam* eTeam10 = new EngineeringTeam();
    // LogisticsTeam* lTeam10 = new LogisticsTeam();
    // team10->assignEngineeringTeam(eTeam10);
    // team10->assignLogisticsTeam(lTeam10);

    Race* race1 = new Race("Barcelona", "19-02-2020");
    // Race* race2 = new Race("Barcelona", "26-02-2020");
    // RaceTrack* track1 = new RaceTrack(50, 15, 3.5, 2);
    // race1->setTrack(track1);
    // race2->setTrack(track1);

    // Race* race3 = new Race("Austria", "03-07-2020");
    // Race* race4 = new Race("Austria", "10-07-2020");
    // RaceTrack* track2 = new RaceTrack(35, 19, 2.6, 1);
    // race3->setTrack(track2);
    // race4->setTrack(track2);

    // Race* race5 = new Race("Hungary", "17-07-2020");
    // RaceTrack* track3 = new RaceTrack(42, 13, 2.6, 3);
    // race5->setTrack(track3);

    // Race* race6 = new Race("Great Britain", "31-07-2020");
    // Race* race7 = new Race("Great Britain", "07-08-2020");
    // RaceTrack* track4 = new RaceTrack(54, 18, 3.7, 2);
    // race6->setTrack(track4);
    // race7->setTrack(track4);

    // Race* race8 = new Race("Spain", "14-08-2020");
    // RaceTrack* track5 = new RaceTrack(42, 16, 3.8, 1);
    // race8->setTrack(track5);

    // Race* race9 = new Race("Belgium", "28-08-2020");
    // RaceTrack* track6 = new RaceTrack(51, 15, 3.5, 2);
    // race9->setTrack(track6);

    // Race* race10 = new Race("Italy", "04-09-2020");
    // Race* race11 = new Race("Italy", "11-09-2020");
    // RaceTrack* track7 = new RaceTrack(51, 15, 3.8, 3);
    // race10->setTrack(track7);
    // race11->setTrack(track7);

    // Race* race12 = new Race("Russia", "25-09-2020");
    // RaceTrack* track8 = new RaceTrack(68, 12, 2.5, 2);
    // race12->setTrack(track8);

    // Race* race13 = new Race("Germany", "09-10-2020");
    // RaceTrack* track9 = new RaceTrack(53, 18, 3.3, 1);
    // race13->setTrack(track9);

    // Race* race14 = new Race("Monaco", "23-05-2020");
    // RaceTrack* track10 = new RaceTrack(46, 16, 3.8, 2);
    // race14->setTrack(track10);

    // Race* race15 = new Race("Canada", "07-06-2020");
    // RaceTrack* track11 = new RaceTrack(50, 13, 2.8, 2);
    // race15->setTrack(track11);

    // Race* race16 = new Race("France", "21-06-2020");
    // RaceTrack* track12 = new RaceTrack(50, 19, 3.8, 1);
    // race16->setTrack(track12);

    // Race* race17 = new Race("Australia", "15-03-2020");
    // RaceTrack* track13 = new RaceTrack(50, 15, 3.5, 2);
    // race17->setTrack(track13);

    // Race* race18 = new Race("Bahrain", "29-03-2020");
    // RaceTrack* track14 = new RaceTrack(50, 15, 3.5, 2);
    // race18->setTrack(track14);

    // Race* race19 = new Race("China", "12-04-2020");
    // RaceTrack* track15 = new RaceTrack(50, 15, 3.5, 2);
    // race19->setTrack(track15);

    // Race* race20 = new Race("Azerbaijan", "26-04-2020");
    // RaceTrack* track16 = new RaceTrack(50, 15, 3.5, 2);
    // race20->setTrack(track16);

    // Race* race21 = new Race("Singapore", "20-10-2020");
    // RaceTrack* track17 = new RaceTrack(50, 15, 3.5, 2);
    // race21->setTrack(track17);

    // racesList.push_back(race1);
    // racesList.push_back(race2);
    // racesList.push_back(race3);
    // racesList.push_back(race4);
    // racesList.push_back(race5);
    // racesList.push_back(race6);
    // racesList.push_back(race7);
    // racesList.push_back(race8);
    // racesList.push_back(race9);
    // racesList.push_back(race10);
    // racesList.push_back(race11);
    // racesList.push_back(race12);
    // racesList.push_back(race13);
    // racesList.push_back(race14);
    // racesList.push_back(race15);
    // racesList.push_back(race16);
    // racesList.push_back(race17);
    // racesList.push_back(race18);
    // racesList.push_back(race19);
    // racesList.push_back(race20);
    // racesList.push_back(race21);

    // for (auto&& race : racesList)
    // {
    //     race->RegisterTeams(teamsList);
    // }

    team1->scheduleRace(race1);

    return 0;
}
