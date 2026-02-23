//Write a program to calculate size of a real constant.

#include<stdio.h>

int main ()
{
  int x;
  x = sizeof(34.89);
  printf("Size = %d bytes",x);

  return 0;
}