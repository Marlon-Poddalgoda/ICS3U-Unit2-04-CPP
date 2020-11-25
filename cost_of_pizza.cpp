// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on November 2020
// This program calculates the cost of a pizza
//     with user input of diameter

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates the cost of the pizza
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;
    float diameter;
    float subTotal;
    float total;

    // input
    std::cout << "Enter the diameter of your preferred pizza (inch): ";
    std::cin >> diameter;

    // process
    subTotal = LABOR + RENT + (diameter * COST_PER_INCH);
    total = subTotal + (subTotal * HST);

    // output
    std::cout << "" << std::endl;
    std::cout << "The cost for a " << diameter << " inch pizza is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}
