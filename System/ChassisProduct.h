#ifndef ChassisProduct_H
#define ChassisProduct_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
//#include "CurrentYear.h"
using namespace std;
    
    class ChassisProduct : public CarPart {
        
        public:
            ChassisProduct(string name, double torque, double poissonRatio, int wheelOverhang, int rearOverhang);
            ~ChassisProduct();
            ChassisProduct();
            
        private:
            double torque;
            double poissonRatio; //for steel it's between 0.27-0.30
            int wheelOverhang; //in mm
            int rearOverhang; //in mm
            
    };

    
    
#endif
