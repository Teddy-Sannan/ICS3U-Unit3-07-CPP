// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This lets the user input their age

#include <iostream>

int main() {
    // variable declaration
    int age;

    // input
    std::cout << "Please enter your age: ";
    std::cin >> age;

    // process & output
    try {
        if (age >= 25 && age <= 40) {
            std::cout << "" << std::endl;
            std::cout << "You can date my grandchild" << std::endl;
        } else if (age < 25 || age > 40) {
            std::cout << "" << std::endl;
            std::cout << "You cannot date my grandchild" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "";
        std::cout << "Invalid Input";
    }
}
