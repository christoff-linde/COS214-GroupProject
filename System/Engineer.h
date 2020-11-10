#ifndef Engineer_H
#define Engineer_H
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
    
    class Engineer {
        
        public:
            Engineer();
            Engineer(string name);
            ~Engineer();
            virtual Engineer* createTeam(string teamName);
            void setName(string name);

        private:
            string teamName;
            
    };

    
    
#endif
