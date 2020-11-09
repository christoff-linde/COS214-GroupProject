/**
 * @file EquipmentContainer.cpp
 * @author Christoff Linde
 * @brief Container holding Equipment
 * @version 0.1
 * @date 2020-11-06
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "EquipmentContainer.h"

#include "Drill.h"
#include "Jack.h"
#include "Wrench.h"

#include "FoodCrate.h"
#include "Refrigerator.h"
#include "WaterTank.h"

#include "Computer.h"
#include "FuelTank.h"
#include "Radio.h"

EquipmentContainer::EquipmentContainer()
{
    this->inventory = new EquipmentComposite();
}

EquipmentContainer::~EquipmentContainer()
{
    delete inventory;
    this->inventory = nullptr;
}

void EquipmentContainer::createInventory()
{
    // ToolEquipment
    Drill* drill = new Drill();
    inventory->add(drill);
    Jack* jack = new Jack();
    inventory->add(jack);
    Wrench* wrench = new Wrench();
    inventory->add(wrench);

    // CateringEquipment
    FoodCrate* foodCrate = new FoodCrate();
    inventory->add(foodCrate);
    Refrigerator* refrigerator = new Refrigerator();
    inventory->add(refrigerator);
    WaterTank* waterTank = new WaterTank();
    inventory->add(waterTank);

    // GarageEquipment
    Computer* computer = new Computer();
    inventory->add(computer);
    FuelTank* fuelTank = new FuelTank();
    inventory->add(fuelTank);
    Radio* radio = new Radio();
    inventory->add(radio);

}