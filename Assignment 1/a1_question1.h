#ifndef A1_Q1_H
#define A1_Q1_H

//Inserts a provided digit into a positive int up to 4 digits long
//Returns the result as a positive int with this rule: insert as first, third, fifth, …etc.
//For example:
// insert_digit(1, 3) should return 131
// insert_digit(2, 123) should return 2122232
// insert_digit(0, 4444) should return 40404040 (no leading zero)
unsigned int insert_digit(unsigned int digit, unsigned int number);

#endif