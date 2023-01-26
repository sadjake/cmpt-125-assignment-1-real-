#include <stdio.h>
#include "a1_question1.h"

unsigned int insert_digit(unsigned int digit, unsigned int number) {
    // initialize values for the end result and the multiplyer
    int endRes = 0;
    int multiplyer = 1;

    // while loop
    while (number>0) {
        // multiply the digit by the multiplyer value
        int digit = digit * multiplyer;
        // add the digit to the result
        int endRes = endRes + digit;
        // multiplyer is multiplied by 10 each time
        int multiplyer = multiplyer*10;
        // end result is an addition
        int endRes = endRes + ((number%10)*multiplyer);
        // update the number
        number = number/10;
        // update the multiplyer
        multiplyer = multiplyer*10;
    }
    return endRes;
}

// // find the length of number
// int numLen = 0;
// for (int i = 0; i<number; i++) {
//     numLen = numLen + 1;
// }

// // find the total length of the result
// // int resLen = ((numLen*2)+1);

// // "result" is an array with "resLen" as the length
// // int result[resLen];

// // find remainder
// number = number % 10;

// // update new number
// number = number / 10;

// // input digit into each space thats in the position of the greatest even number position in to least even number (ex. 4 to 0)
// for (int i=0; i<numLen; i++) {
//     if (i%2==0){
//         result[i] = digit;
//     }

//     else {
//         result[i] = 
//     }
// }

// }



// unsigned int insert_digit(unsigned int digit, unsigned int number) {
//     // find the length of number
//     int numLen = 0;
//     for (int i=0; i<number; i++){
//         numLen = numLen + 1;
//     }

//     // end result return 0
//     int endRes = 0;
    

//     // total length of the resulting number
//     int resLen = ((numLen*2)+1);


//     //put inside a for loop
//     //for (int i=0; i<number; i++) {

//         int remainder = number % 10;

//         int numUpdate= number / 10;

//         for (int i=0; i<resLen; i++){
//             if (i % 2 == 0) {
//                 resLen[i] = digit;
//             }

//             else {
//                 resLen[i] = remainder;
//             }

//             resLen[]
//         }

//  //   }



//     return endRes;

// }

// get the digit and put each integer into a list (array)
// get the number and put each integer into a list (array)
// insert each digit's integer into first, third, fifth places
// insert each number's integer into second, fourth, sixth places

//char* digit = ;
//char* number = ;

//int strcmp (const char* digit, const char* number);

