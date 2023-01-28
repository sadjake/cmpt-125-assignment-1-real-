// Jake Choi
// 301552446
// jyc50

#include "a1_question3.h"

float calculateAreaShoelace(unsigned int rows, int points[][2], int index) {
    // initialize variables with zero
    float s1 = 0;
    float s2 = 0;
    float area = 0;
    int indexmatch = 0;

    // for loop
    for (int i=0; i<rows; i++) {
        // set conditions to multiply x and ys in shoelace way
        if (i==index) { 
            indexmatch += 1;
            }

        else {
            // row-1
            if (i==rows-1) {
                if(index == 0) {
                    // x1 times y2
                    s1 += (points[i][0]*points[1][1]);
                }

                else {
                    s1 += (points[i][0]*points[0][1]);
                }  
            }
            if (i+1 == index){
                s1 += (points[i][0]*points[i][1]);
            }
            //
            else {
                s1 += (points[i][0]*points[i+1][1]); 
            }
        }      
    }
        for (int i=0; i<rows; i++) {
        // set conditions to multiply x and ys in shoelace way
        if (i==index) { 
            indexmatch += 1;
            }
        else {
            if (i==rows-1) {
                if(index == 0){
                    s2 += (points[i][1]*points[1][0]);
                }else{
                    s2 += (points[i][1]*points[0][0]);
                }  
            }
            if (i+1 == index){
                s2 += (points[i][1]*points[i][0]);
            }
            // 
            else {
                s2 += (points[i][1]*points[i+1][0]);
            }
        }     
        }
        // calculation of the area
        area = 0.5* fabs(s1-s2);
        return area;
    }
    
    
    
