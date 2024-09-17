// input.h
// Name: Nidhi Mistry
// Course: OOP244NDD
// Teacher: Gayan Gamage
// Date: Tuesday 17 September 2024
// Description: This file contains function declarations for
//               integer input operations, including overloading
//               to handle ranges and references.

// input.h

// Original function
int getInt();

// Overloaded functions
int getInt(int min, int max);                  // Function with min and max limits
bool getInt(int &value, int min, int max);     // Function with reference and limits
