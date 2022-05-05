/**
 * @file main.c
 * @author yukta k (yuktakulkarnirk.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"my_char.h"
#define size 100
int main()
{
   char name[size];
   int sum=0;
   printf("Enter the name:");
   scanf("%s",name);
   sum=sum_ascii(name);
   printf("sum:%x",sum);
   return 0;
}