// dma.h
// Name: Nidhi Mistry
// Course: OOP244NDD
// Teacher: Gayan Gamage
// Date: Tuesday 17 September 2024
// Description: This file contains the definition of the Contact structure
//               and function declarations for managing Contact instances.

#ifndef DMA_H
#define DMA_H

// Define the Contact structure
struct Contact {
    char name[50];
    char lastName[50];
    char phoneNumber[15];
};

// Function declarations
Contact* getContact();
void display(const Contact& contact);
void deallocate(Contact* contact);
void setEmpty(Contact& contact);

#endif // DMA_H