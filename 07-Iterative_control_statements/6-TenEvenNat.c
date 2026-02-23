//Write a program to print the first 10 even natural numbers.
#include<stdio.h>
int main ()
{
  int i=1;
  printf("First 10 Even Natural Numbers:\n");
  while(i<=10)
  {
    printf("%d ", i);
    i+=2;
  }
  return 0;

}

/*
M2: 1%2
M3: i=2, i+=2; 
*/