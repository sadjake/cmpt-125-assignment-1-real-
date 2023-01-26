#ifndef A1_Q2_H
#define A1_Q2_H

#include <string.h>

//Find the index of a cstring from the first char* array 
// and the index of another cstring from the second char* array,
// where those two cstrings will form the target cstring, 
// and put those indexes into the int array. 
// If there are multiple answers, any answer will do. 
//If no answer exists, put the values -1, -1 in the int array.
//For example:
//Given the arrA: {"ch", "a", "A", "cat", "jump", "rep", "c"}
// and the arrB: {"x3", "at", "ch", "ed", "!", "hat"}
//findElements(arrA, 7, arrB, 6, "chat", result) should put the values 0, 1 in result
// (6, 5 will also work, but not 0, 5)
//findElements(arrA, 7, arrB, 6, "A!"", result) should put the values 2, 4 in result
//findElements(arrA, 7, arrB, 6, "!A", result) should put the values -1, -1 in result
//findElements(arrA, 7, arrB, 6, "CMPTx3", result) should put the values -1, 0 in result for partial match
//findElements(arrA, 7, arrB, 6, "hat", result) should put the values -1, 5 in result for partial match
//findElements(arrA, 7, arrB, 6, "chach", result) should put the values -1, -1 in result
// because two partial matches with should not be confused with an exact match
//findElements(arrA, 7, arrB, 6, "", result) should put the values -1, -1 in result
void findElements(char* arrA[], unsigned int sizeA, char* arrB[], 
                    unsigned int sizeB, char* target, int* result);

#endif