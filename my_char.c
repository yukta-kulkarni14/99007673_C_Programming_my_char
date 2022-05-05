/**
 * @file my_char.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<string.h>
#include"stdint.h"
#define size 100
int sum_ascii(char name[]);
union my_char
{
    char ch;
    uint8_t integer;
};
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
