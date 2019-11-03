// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This program adds only positive numbers

#include <iostream>
#include <string>

main() {
    // This is adds only positive numbers

    // variables
    int repeater;
    std::string stringNumber;
    int number;
    std::string stringAddNumber;
    int addNumber;
    int answer = 0;
    bool exception = false;

    // Welcome statement
    std::cout << "Welcome, I will add all positive integers you enter."
    << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    try {
        // input
        std::cout << "How many numbers to add: " << std::endl;
        std::cin >> stringNumber;
        number = std::stoi(stringNumber);
        // process
        for (repeater = 0; repeater < number; repeater++) {
            // input
            std::cout << "\nEnter a number: " << std::endl;
            std::cin >> stringAddNumber;
            addNumber = std::stoi(stringAddNumber);
            if (addNumber < 0) {
                continue;
            } else {
                answer = answer + addNumber;
            }
        }
    } catch (std::invalid_argument) {
        exception = true;
        std::cout << "Invalid input.";
    }
    if (exception == false) {
        std::cout << "The answer is " << answer << ".";
    }
}
