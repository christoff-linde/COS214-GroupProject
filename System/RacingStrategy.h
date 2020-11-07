#ifndef RacingStrategy_H
#define RacingStrategy_H

#include <iostream>

using namespace std;

class RacingStrategy
{
    public:
        RacingStrategy();
        ~RacingStrategy();

        virtual string getType() = 0;
};

#endif