#include <stdio.h>
#include "a1_question2.h"

void checkAndPrint(int expected[], int result[]) {
    if (expected[0] == result[0] && expected[1] == result[1]) {
        printf("[%d, %d] is the same as [%d, %d], PASS\n", 
                expected[0], expected[1], result[0], result[1]);
    } else {
        printf("[%d, %d] is not the same as [%d, %d], FAIL\n", 
                expected[0], expected[1], result[0], result[1]);    }
}

int main() {
    char* arrA[] = {"ch", "a", "A", "cat", "jump", "rep", "c"};
    char* arrB[] = {"x3", "at", "ch", "ed", "!", "hat"};

    int result[] = {-1, -1};

    //both 0, 1 and 6, 5 are correct
    findElements(arrA, 7, arrB, 6, "chat", result);
    checkAndPrint((int[]){0, 1}, result);
    checkAndPrint((int[]){6, 5}, result);

    findElements(arrA, 7, arrB, 6, "A!", result); //should put the values 2, 4 in result
    checkAndPrint((int[]){2, 4}, result);

    findElements(arrA, 7, arrB, 6, "!A", result); //should put the values -1, -1 in result
    checkAndPrint((int[]){-1, -1}, result);

    findElements(arrA, 7, arrB, 6, "CMPTx3", result); //should put the values -1, 0 in result for partial match
    checkAndPrint((int[]){-1, 0}, result);

    findElements(arrA, 7, arrB, 6, "hat", result); // should put the values -1, 5 in result for partial match
    checkAndPrint((int[]){-1, 5}, result);

    findElements(arrA, 7, arrB, 6, "chach", result); //should put the values -1, -1 in result 
    // because two partial matches with should not be confused with an exact match
    checkAndPrint((int[]){-1, -1}, result);

    findElements(arrA, 7, arrB, 6, "", result); //should put the values -1, -1 in result 
    checkAndPrint((int[]){-1, -1}, result);
    
    return 0;
}