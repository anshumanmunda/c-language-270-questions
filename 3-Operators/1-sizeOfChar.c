//Write a program to calculate size of a character constant.

#include<stdio.h>

int main ()
{
  int x;
  x = sizeof('A');
  printf("Size = %d bytes",x);

  return 0;
}