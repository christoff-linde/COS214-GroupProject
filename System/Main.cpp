#include "Aggressive.h"
#include "LaidBack.h"
#include "Neutral.h"
#include <iostream>

using namespace std;

int main()
{
    RacingStrategy* strat1 = new Aggressive();
    cout<<"The first strategy type is: "<<strat1->getType()<<endl;
    cout<<"The first strategy tyre type is: "<<strat1->getTyreType()<<endl;
    cout<<"The first strategy amount of tyres: "<<strat1->getAmountOfTyreSets()<<endl;

    RacingStrategy* strat2 = new Neutral();
    cout<<"The second strategy type is: "<<strat2->getType()<<endl;
    cout<<"The second strategy tyre type is: "<<strat2->getTyreType()<<endl;
    cout<<"The second strategy amount of tyres: "<<strat2->getAmountOfTyreSets()<<endl;

    RacingStrategy* strat3 = new LaidBack();
    cout<<"The third strategy type is: "<<strat3->getType()<<endl;
    cout<<"The third strategy tyre type is: "<<strat3->getTyreType()<<endl;
    cout<<"The third strategy amount of tyres: "<<strat3->getAmountOfTyreSets()<<endl;

    delete strat1;
    strat1 = nullptr;

    delete strat2;
    strat2 = nullptr;

    delete strat3;
    strat3 = nullptr;

    return 0;
}