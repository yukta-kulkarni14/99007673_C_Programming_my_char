#ifndef MY_CHAR_H_
#define MY_CHAR_H_

#include<stdio.h>
#include<string.h>
#include"stdint.h"

union my_char
{
    char ch;
    uint8_t integer;
};

int sum_ascii(char name[]);
/**
 * @brief printing the ASCII hexadecimal value of each character for a given string and computing the sum of hexadeccimal value of each character
 * 
 */
#endif