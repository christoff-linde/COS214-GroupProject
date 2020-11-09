using namespace std;
#include "WindTunnel.h"
#include <string>
WindTunnel::WindTunnel(){
uses= 400;


}

WindTunnel::~WindTunnel(){

}
void WindTunnel::handleChange(Components* c){

}
void WindTunnel::doTest(){
cout<<"Your team has "<<uses<<" uses left of the wind tunnel! "<<endl; 
    if (uses > 0)
    {
        
        //dotest
        uses--;
    }
    else{
        //cantdotest
        cout<<"Your team has used the wind tunnel 400 times and may no longer use it."<<endl; 
    }
}