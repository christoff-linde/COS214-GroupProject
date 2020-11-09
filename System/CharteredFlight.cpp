/**
 * @file CharteredFlight.cpp
 * @author Christoff Linde
 * @brief Serves as specific method of transport for a RaceCar
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <string>
#include <random>
#include "CharteredFlight.h"

CharteredFlight::CharteredFlight(RaceCar* _raceCar)
{
    this->raceCar = _raceCar;
    flightNumber = generateFlightNumber();
}

/**
 * @author Bryan Triana
 * 
 * @copyright (c) 2019 Inverse Palindrome
 * Blog - RandomString.hpp
 * @link https://inversepalindrome.com/
 * 
 */
std::string CharteredFlight::generateFlightNumber()
{
    const int LENGTH = 6;
    const std::string CHARACTERS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);

    std::string random_string;

    for (std::size_t i = 0; i < LENGTH; ++i)
    {
        random_string += CHARACTERS[distribution(generator)];
    }

    return random_string;
}