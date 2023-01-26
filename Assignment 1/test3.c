#include <stdio.h>
#include <math.h>
#include "a1_question3.h"

void checkAndPrint(float expected, float result) {
    if (fabs(expected-result) < 0.00001) {
        printf("%f is essentially the same as %f, PASS\n", expected, result);
    } else {
        printf("%f is essentially not the same as %f, FAIL\n", expected, result);
    }
}

int main() {
    int matrix1[4][2] = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}};
    
    checkAndPrint(2.0, calculateAreaShoelace(4, matrix1, 1)); //should return 2.0 (area of a triangle with the second point removed)
    checkAndPrint(4.0, calculateAreaShoelace(4, matrix1, 4)); //should return 4.0 (area of a square as 4 is an invalid index)
    checkAndPrint(2.0, calculateAreaShoelace(4, matrix1, 0)); //should return 2.0 (area of a different triangle with the first point removed)
    
    return 0;
}