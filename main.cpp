// main.cpp
// Name: Nidhi Mistry
// Course: OOP244NDD
// Teacher: Gayan Gamage
// Date: Tuesday 17 September 2024
// Description: This file contains the main function to test the functionality
//               of the input and dma modules, including testing getInt() overloads,
//               and Contact structure functions.

#include <iostream>
#include "input.h"
#include "dma.h"

void test_getInts() {
    int value;
    std::cout << "Enter a value between 5 and 10: ";
    int result = getInt(5, 10);
    std::cout << "You entered: " << result << std::endl;

    std::cout << "Enter a value between 1 and 10 (reference test): ";
    if (getInt(value, 1, 10)) {
        std::cout << "You entered: " << value << std::endl;
    } else {
        std::cout << "Invalid value entered" << std::endl;
    }
}

void test_Contact() {
    Contact* contact = getContact();
    std::cout << "Contact Information:" << std::endl;
    display(*contact);
    setEmpty(*contact);
    std::cout << "After setting empty:" << std::endl;
    display(*contact);
    deallocate(contact);
}

int main() {
    test_getInts();
    test_Contact();
    return 0;
}