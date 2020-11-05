#include <iostream>
#include "Monitor.h"
#include "Wrench.h"
#include "Refrigerator.h"


int main(int argc, char const* argv[])
{
    Monitor* mainMonitor = new Monitor();
    Wrench* mainWrench = new Wrench();
    Refrigerator* mainRefrigerator = new Refrigerator();

    mainMonitor->print();

    return 0;
}
