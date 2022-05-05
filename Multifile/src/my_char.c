/**
 * @file my_char.c
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
int sum_ascii(char name[])
{
   int i=0,sum=0;
   union my_char t;
   while(name[i]!='\0')
   {
      t.integer=name[i];
      printf("ASCII value:%x\n",t.integer);
      i++;
   }
   for(int j=0;j<strlen(name);j++)
   {
     sum=sum+name[j];
   }
   return sum;
    
}
