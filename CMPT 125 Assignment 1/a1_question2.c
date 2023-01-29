// Jake Choi
// 301552446
// jyc50

#include "a1_question2.h"

void findElements(char* arrA[], unsigned int sizeA, char* arrB[], 
                    unsigned int sizeB, char* target, int* result){
                        return;
                    }


// for loop to see if the size is greater than i 
for (int i=0; i<sizeA; i++) {
    // for loop to see if the size is greater than j
    for (int j = 0; j<sizeB; i++) {
        //compare the target cstrings with strcmp
        if (strcmp(arrA[i],target)==0){
            result[0] = i;
            result[1] = j;
        }

        //compare using strcmp to see if 
        //value of the second array is equal to the target

        if (strcmp(arrB[j],target)==0) {
            result[0] = i;
            result[1] = j;
        }

        

    }
}
