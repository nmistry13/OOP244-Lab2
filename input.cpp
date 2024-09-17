// input.cpp
// Name: Nidhi Mistry
// Course: OOP244NDD
// Teacher: Gayan Gamage
// Date: Tuesday 17 September 2024
// Description: This file contains the implementations of functions
//               declared in input.h, including overloaded functions
//               for integer input with range and reference checking.


#include "input.h"
#include <iostream>

// Original function
int getInt() {
    int value;
    std::cin >> value;
    return value;
}

// Overloaded function: Prompts for integer within min and max
int getInt(int min, int max) {
    int value;
    do {
        value = getInt(); // Reuse the original getInt function
        if (value < min || value > max) {
            std::cout << "Invalid value, [" << min << "<ENTRY<" << max << "]" << std::endl;
        }
    } while (value < min || value > max);
    return value;
}

// Overloaded function: Prompts for integer within min and max and uses reference
bool getInt(int &value, int min, int max) {
    do {
        value = getInt(); // Reuse the original getInt function
        if (value < min || value > max) {
            std::cout << "Invalid value, [" << min << "<ENTRY<" << max << "]" << std::endl;
            return false;
        }
    } while (value < min || value > max);
    return true;
}
