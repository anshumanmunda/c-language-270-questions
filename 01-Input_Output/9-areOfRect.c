/*Write a program to calculate area of a rectangle. Input appropriate data from the user.*/

#include<stdio.h>

int main ()
{
  int l, b, a;
  printf("Enter length of rectangel: ");
  scanf("%d",&l);

  printf("Enter bredth of rectangel: ");
  scanf("%d",&b);

  a = l*b;

  printf("Area = %d", a);
  return 0;
}