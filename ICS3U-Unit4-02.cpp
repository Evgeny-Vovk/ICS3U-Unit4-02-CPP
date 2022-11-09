// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit4-02.cpp File,
// learning do...while statements in C++.

#include <iostream>
#include <string>

int main() {
    // creating variables
    std::string inputNumber;
    int numberAsInt;
    int counter = 0;
    int answer = 1;

    // input
    std::cout << "Input a positive number: ";
    std::cin >> inputNumber;

    // process and output
    std::cout << "\n";
    try {
        numberAsInt = std::stoi(inputNumber);
        if (numberAsInt < 0) {
            std::cout << "This is not a positive number.";
        } else {
            do {
                counter += 1;
                answer = answer * counter;
            } while (counter < numberAsInt);
            std::cout << numberAsInt << "!" << " = " << answer;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input,"
                  << " please try again following the requirements";
    }

    std::cout << "\n\n\nDone.\n";
}
