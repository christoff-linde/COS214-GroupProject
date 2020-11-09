using namespace std;
#include "WindTunnel.h"
#include "inactive.h"

#include <string>
WindTunnel::WindTunnel(){
uses= 400;


}

WindTunnel::~WindTunnel(){

}
void WindTunnel::handleChange(Components* c){
    // move part to inactive after testing
    c->setState(new Inactive());
}
void WindTunnel::doTest(RaceCar* car){
cout<<"Your team has "<<uses<<" uses left of the wind tunnel! "<<endl; 
    if (uses > 0)
    {
        
        //dotest
        if (car->getAerodynamics()->getDownForce() >=4000)
        {
            cout<<"the high downforce of the car slows it down, but increases the cars ability to cope with corners!"<<endl;
            if (car->getAerodynamics()->getCFDrag() >=2000)
            {
            cout<<"the high drag of the car slows it down, but increases the control."<<endl;
            cout<<"This is a slower car with great control and stability."<<endl;
            }
            else{
                cout<<"the low drag of the car speeds it up, but decreases the control."<<endl;
                cout<<"This is a good all round car."<<endl;
            }
        }
        else{
            cout<<"the low downforce of the car speeds it up, but decreases the cars ability to cope with corners!"<<endl;
            if (car->getAerodynamics()->getCFDrag() >=2000)
            {
            cout<<"the high drag of the car slows it down, but increases the control."<<endl;
            cout<<"This is a good all round car."<<endl;
            }
            else{
                cout<<"the low drag of the car speeds it up, but decreases the control."<<endl;
                cout<<"This is a fast car with little control and stability."<<endl;
            }
        }

        
        uses--;
    }
    else{
        //cantdotest
        cout<<"Your team has used the wind tunnel 400 times and may no longer use it."<<endl; 
    }
}

void WindTunnel::doTest(CarPart* part){
    cout << "Some error about not being able to do it with parts..." << endl;
}