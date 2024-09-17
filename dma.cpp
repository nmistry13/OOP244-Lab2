// dma.cpp
// Name: Nidhi Mistry
// Course: OOP244NDD
// Teacher: Gayan Gamage
// Date: Tuesday 17 September 2024
// Description: This file contains the implementations of functions
//               declared in dma.h for managing Contact instances.

#include <iostream>
#include <cstring>
#include "dma.h"

Contact* getContact() {
    Contact* newContact = new Contact;
    std::cout << "Name: ";
    std::cin.getline(newContact->name, 50);
    std::cout << "Last name: ";
    std::cin.getline(newContact->lastName, 50);
    std::cout << "Phone number: ";
    std::cin.getline(newContact->phoneNumber, 15);
    return newContact;
}

void display(const Contact& contact) {
    std::cout << contact.name << " " << contact.lastName << ", " << contact.phoneNumber << std::endl;
}

void deallocate(Contact* contact) {
    delete contact;
}

void setEmpty(Contact& contact) {
    contact.name[0] = '\0';
    contact.lastName[0] = '\0';
    contact.phoneNumber[0] = '\0';
}