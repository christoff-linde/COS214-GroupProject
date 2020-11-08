#ifndef ElectrionicsProduct_H
#define ElectrionicsProduct_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
//#include "CurrentYear.h"
using namespace std;
    
    class ElectronicsProduct : public CarPart {
        
        public:
            ElectronicsProduct(string name, int coreFreq, int powerOutput, int accSpeed, int gearChangeSpeed);
            ~ElectronicsProduct();
            ElectronicsProduct();
            
        private:
            int coreFreq; //around 200 MHz
            int powerOutput; //around 560 kW
            int accSpeed; //between 1500 - 1800rpm
            int gearChangeSpeed; //in ms 100
    };

    
    
#endif
