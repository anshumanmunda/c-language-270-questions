// Write a program to calculate circumference of a circle.


#include<stdio.h>

int main ()
{
  int r;
  float c;

  printf("Enter the radius of a circle: ");
  scanf("%f", &r);

  c = 2*3.14*r;
  printf("Circumeference = %.2f", c);
  return 0;
}