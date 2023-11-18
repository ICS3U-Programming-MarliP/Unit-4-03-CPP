// Copyright 2023 Marli Peters
// Created by: Marli Peters
// Date: Nov. 18, 2023
// This program asks the user to enter a positive number
// and then uses a loop to calculate and display
// all numbers from 0 to that number to the power of two.
#include <iostream>

int main() {
    std::string userNumStr;
    int userNumInt;
    int loopCounter;
    int powerOfTwo;

    std::cout << "Please enter a positive number: ";
    std::cin >> userNumStr;

    try {
        userNumInt = std::stoi(userNumStr);
        if (userNumInt < 0) {
            std::cout << "\nPlease enter a positive number.";
        } else {
            std::cout << "" << std::endl;
            for (loopCounter = 0; loopCounter < userNumInt + 1; loopCounter++) {
                powerOfTwo = (loopCounter)*(loopCounter);
                std::cout << loopCounter << "^2 = " << powerOfTwo << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "\nPlease enter a valid integer." << std::endl;
    }
}
