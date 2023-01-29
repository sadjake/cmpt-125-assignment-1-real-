// Jake Choi
// 301552446
// jyc50

#include "a1_question3.h"

float calculateAreaShoelace(unsigned int rows, int points[][2], int index) {
    // initialize s1, s2 with zero
    int s1 = 0;
    int s2 = 0;
    // initialize area to zero
    int area = 0;

    int zero1;
    int zero2;

    // set 0 to values for values in removed rows
    if (0<=index<rows) {
        zero1 = points[index][0];
        zero2 = points[index][1];
        points[index][0] = 0;
        points[index][1] = 0;
    }

    for (int i=0; i<rows-1; i++) {
        // set conditions to multiply x and y values
        s1 += (points[i][0]*points[i+1][1]);
        s2 += (points[i][1]*points[i+1][0]);
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

    area += 0.5*(fabs(s1-s2));

    points[index][0] = zero1;
    points[index][1] = zero2;

    // end result (area)
    return area;
    }
