//Write a program to print the first 10 odd natural numbers.
#include<stdio.h>
int main()
{
  int i=1;
  printf("First 10 Odd Natural numbers :\n");  
  while(i<=10)
  {
    printf("%d ",2*i-1);
    i++;
  }
  return 0;
} 

/*
M-2: i<=20, i%2, i++ In-efficient code
M-3: i=1, i<=20, i+=2;   Incrementing by 2  
*/