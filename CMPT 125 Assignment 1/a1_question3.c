// Jake Choi
// 301552446
// jyc50

#include "a1_question3.h"

float calculateAreaShoelace(unsigned int rows, int points[][2], int index) {
    // initialize s1, s2 with zero
    float s1 = 0;
    float s2 = 0;
    // initialize final answer variable (area) to zero
    float area = 0;

    // create variables for values in removed rows
    float zero1;
    float zero2;

    if (index<rows) { 
        zero1 = points[index][0];
        zero2 = points[index][1];
        
        // set the values to 0
        points[index][0] = 0;
        points[index][1] = 0;
    }

    // variables to multiply the x and y values
    int mult1;
    int mult2;

    for (int i=0; i<rows-1; i++) {
        // set conditions to multiply x and y values

        // multiplying x with a y that is 1 greater
        // than x's position in the columns
        mult1 = (points[i][0]*points[i+1][1]);

        // multiplying x with a y that is 1 lesser
        // than x's position in the columns
        mult2 = (points[i][1]*points[i+1][0]);

        // add them to s1 and s2
        s1 += mult1;
        s2 += mult2;
    }
        
    // multiply the last and first points
    // of s1 and s2
    int lastm1;
    int lastm2; 

    lastm1 = points[rows-1][0]*points[0][1];
    lastm2 = points[0][0]*points[rows-1][1];

    // add them to s1 and s2
    s1 += lastm1;
    s2 += lastm2;

    // calculation for area
    area += 0.5*(fabs(s1-s2));

    points[index][0] = zero1;
    points[index][1] = zero2;

    // end result (area)
    return area;
    }


    
