// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: December 2019
// This program get's number from user then turns it into a list of it's digits

#include <iostream>
#include <array>

template<size_t N>
int Calculate(std::array<int, N> arrayOfNumbers) {
    // This function finds the largest number from random list

    // Variables and arrays
    int numbers = "Please input a number: "

    // Process
    for (int repeater = 0; repeater < 10; repeater++) {
        if (arrayOfNumbers[repeater] > largestArrayNumber) {
            largestArrayNumber = arrayOfNumbers[repeater];
        }
    }

    // Output
    return largestArrayNumber;
}

int main() {
    // This function creates an array and shows the numbers

    // Random number seed
    unsigned int seed = time(NULL);

    // Variables and arrays
    int randomNumber;
    int largestNumber;
    std::array<int, 10> numberArray;

    // Adding numbers to an array
    for (int repeater = 0; repeater < 10; repeater++) {
        randomNumber = rand_r(&seed) % 100;
        std::cout << "Random Number " << repeater << " is: " << randomNumber
                  << std::endl;
        numberArray[repeater] = randomNumber;
    }

    // Process
    largestNumber = Calculate(numberArray);

    // Output
    std::cout << "The largest number is: " \
              << largestNumber << std::endl;
}
