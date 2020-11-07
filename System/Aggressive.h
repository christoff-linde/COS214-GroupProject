#ifndef Aggressive_H
#define Aggressive_H

#include <iostream>
#include "RacingStrategy.h"

using namespace std;

class Aggressive: public RacingStrategy
{
    public:
        Aggressive();
        ~Aggressive();
        string getType();
};

#endif