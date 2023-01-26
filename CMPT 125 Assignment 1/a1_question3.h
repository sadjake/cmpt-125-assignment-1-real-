#ifndef A1_Q3_H
#define A1_Q3_H

#include <math.h> //needed for the absolute function
#include <stdbool.h> //needed for C to have bool (boolean) variables

//Calculates the area of a polygon formed by the points represented
// in a 2D array with the row indicated by the index removed
//Returns the area using the Shoelace Formula
//For example:
//Given the 4x2 2D array matrix1: {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}},
//calculateAreaShoelace(4, matrix1, 1) returns 2.0 (area of a triangle with the second point removed)
//calculateAreaShoelace(4, matrix1, 4) returns 4.0 (area of a square as 4 is an invalid index)
//calculateAreaShoelace(4, matrix1, 0) returns 2.0 (area of a different triangle with the first point removed)

float calculateAreaShoelace(unsigned int rows, int points[][2], int index);

#endif