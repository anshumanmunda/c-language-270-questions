//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>

float area(float);

int main()
{
  float r;
  printf("Enter the raius of a circle:");
  scanf("%f",&r);
  printf("Area of circle = %.2f",area(r));

  return 0;
}

float area (float x)
{
  return (3.14*x*x);
}