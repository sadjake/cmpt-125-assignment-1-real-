#include <stdio.h>
#include "a1_question1.h"

void checkAndPrint(unsigned int expected, unsigned int result) {
    if (expected == result) {
        printf("%d is the same as %d, PASS\n", expected, result);
    } else {
        printf("%d is not the same as %d, FAIL\n", expected, result);
    }
}

int main() {
    checkAndPrint(131, insert_digit(1, 3)); //should return 131
    checkAndPrint(2122232, insert_digit(2, 123)); //should return 2122232
    checkAndPrint(40404040, insert_digit(0, 4444)); //should return 40404040 (no leading zero)
    
    return 0;
}