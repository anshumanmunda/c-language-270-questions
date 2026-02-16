// 1. Write a program to calculate the length of the string. (without using builtin method)
#include<stdio.h>

int main(){
   char str[20];
   int i;
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
   
   for( i=0; str[i]; i++ );
   printf("Size = %d",i-1); 

   
   return 0;   // a n s h u \n \0  -->
  }