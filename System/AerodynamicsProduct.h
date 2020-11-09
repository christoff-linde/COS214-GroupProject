/**
 * @file AerodynamicsProduct.h
 * @author Werner Graaff (u18050362@tuks.co.za)
 * @brief
 * @version 0.1
 * @date 2020-11-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <iostream>
#include <cstring>
#include <string>
#include "CarPart.h"

#ifndef AerodynamicsProduct_H
#define AerodynamicsProduct_H
 //#include "CurrentYear.h"
using namespace std;

class AerodynamicsProduct : public CarPart {

public:
    /**
     * @brief Construct a new Aerodynamics Product object
     *
     * @param name
     * @param durability
     * @param cfDrag
     * @param frontWingWidth
     * @param backWingWidth
     * @param downForce
     */
    AerodynamicsProduct(string name, int durability, double cfDrag, int frontWingWidth, int backWingWidth, int downForce);

    /**
     * @brief Destroy the Aerodynamics Product object
     *
     */
    ~AerodynamicsProduct();

    /**
     * @brief Construct a new Aerodynamics Product object
     *
     */
    AerodynamicsProduct();

    /**
     * @brief Get the cfDrag of the part
     *
     * @return double
     */
    double getCFDrag();

    /**
     * @brief Get the Front Wing Width object
     *
     * @return int
     */
    int getFrontWingWidth();

    /**
     * @brief Get the Back Wing Width object
     *
     * @return int
     */
    int getBackWingWidth();

    /**
     * @brief Get the Down Force object
     *
     * @return int
     */
    int getDownForce();
private:

    /**
     * @brief Variable holding the cfDrag of the part
     *
     */
    double cfDrag; //1.30

/**
 * @brief FrontWingWidth in mm
 *
 */
    int frontWingWidth; //in mm

/**
 * @brief BackwingWidth in mm
 *
 */
    int backWingWidth;

    /**
     * @brief Downforce in kg
     *
     */
    int downForce; //in kg (3628.739 - 4500)
};



#endif
