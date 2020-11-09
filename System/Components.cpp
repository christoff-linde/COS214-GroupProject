#include "Components.h"
#include "Inactive.h"

Components::Components() {
    state = new Inactive();
}
Components::~Components() {

}
int Components::change() {
    state->handleChange(this);
    return 0;
}
void Components::doTest(RaceCar* car) {
    state->doTest(car);
}
void Components::doTest(CarPart* part) {
    state->doTest(part);
}

void Components::setState(Testing* state) {
    delete state;
    this->state = state;
}