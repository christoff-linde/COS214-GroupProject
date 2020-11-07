#ifndef AerodynamicsProduct_H
#define AerodynamicsProduct_H
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"
//#include "CurrentYear.h"
using namespace std;
    
    class AerodynamicsProduct : public CarPart {
        
        public:
            AerodynamicsProduct(string name, double cfDrag, int frontWingWidth, int backWingWidth, int downForce );
            ~AerodynamicsProduct();
            AerodynamicsProduct();
            
        private:
            double cfDrag; //1.30
            int frontWingWidth; //in mm
            int backWingWidth;
            int downForce; //in kg (3628.739 - 4500)
    };

    
    
#endif
