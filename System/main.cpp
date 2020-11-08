#include "Aggressive.h"
#include "LaidBack.h"
#include "Neutral.h"
#include <iostream>

using namespace std;

int main()
{
    RacingStrategy* strat1 = new Aggressive();
    cout<<"The first strategy type is: "<<strat1->getType()<<endl;

    RacingStrategy* strat2 = new Neutral();
    cout<<"The second strategy type is: "<<strat2->getType()<<endl;

    RacingStrategy* strat3 = new LaidBack();
    cout<<"The third strategy type is: "<<strat3->getType()<<endl;

    delete strat1;
    strat1 = nullptr;

    delete strat2;
    strat2 = nullptr;

    delete strat3;
    strat3 = nullptr;

    return 0;
}