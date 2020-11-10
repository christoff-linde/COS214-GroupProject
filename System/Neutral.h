#ifndef Neutral_H
#define Neutral_H

#include <iostream>
#include "RacingStrategy.h"

using namespace std;

class Neutral: public RacingStrategy
{
    public:
        Neutral();
        ~Neutral();
        string getType();
};

#endif