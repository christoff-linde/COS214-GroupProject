using namespace std;
#include "Components.h"

Components::Components(){

}
Components::~Components(){

}
int Components::change(){
    state->handleChange(this);
}
void Components::doTest(RaceCar* car){
    state->doTest(car);
}
void Components::doTest(CarPart* part){
    state->doTest(part);
}

void Components::setState(Testing* state){
    delete state;
    this->state = state;
}