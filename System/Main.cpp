#include <iostream>
#include "EquipmentContainer.h"

#include "Monitor.h"
#include "Radio.h"
#include "FuelTanks.h"
#include "Wrench.h"
#include "Jack.h"
#include "TyreWarmer.h"
#include "Refrigerator.h"
#include "WaterTanks.h"
#include "FoodCrate.h"

int main(int argc, char const* argv[])
{
    Monitor* monitor = new Monitor();
    Radio* radio = new Radio();
    FuelTanks* fuelTanks = new FuelTanks();

    // ToolingEquipment
    Wrench* wrench = new Wrench();
    Jack* jack = new Jack();
    TyreWarmer* tyreWarmer = new TyreWarmer();

    // CateringEquipment
    Refrigerator* fridge = new Refrigerator();
    WaterTanks* tanks = new WaterTanks();
    FoodCrate* foodCrate = new FoodCrate();

    EquipmentContainer* equipC = new EquipmentContainer();

    equipC->addToInventory(monitor);
    equipC->addToInventory(radio);
    equipC->addToInventory(fuelTanks);
    equipC->addToInventory(wrench);
    equipC->addToInventory(jack);
    equipC->addToInventory(tyreWarmer);
    equipC->addToInventory(fridge);
    equipC->addToInventory(tanks);
    equipC->addToInventory(foodCrate);

    equipC->checkInventory();
    equipC->clearInventory();
    equipC->checkInventory();

    return 0;
}
