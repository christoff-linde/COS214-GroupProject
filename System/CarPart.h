#ifndef CarPart_H
#define CarPart_H
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
    
    class CarPart {
        
        public:
            CarPart();
            CarPart(string name);
            ~CarPart();
        //    virtual CarPart* createTeam(string teamName);
            void setName(string name);
            string getName();
            void setBaseMaterial(string baseMaterial);
            string getBaseMaterial();
            int getDurability();
            void setDurability(int durability);
            double getSpeedIncrease();
            void setSpeedIncrease(double speedIncrease);
            

        private:
            double speedIncrease;
            string baseMaterial; 
            string name;
            int durability;
            
    };

    
    
#endif
