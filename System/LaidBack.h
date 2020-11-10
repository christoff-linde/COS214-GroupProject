#ifndef LaidBack_H
#define LaidBack_H

#include <iostream>
#include "RacingStrategy.h"

using namespace std;

class LaidBack: public RacingStrategy
{
    public:
        LaidBack();
        ~LaidBack();
        string getType();
};

#endif