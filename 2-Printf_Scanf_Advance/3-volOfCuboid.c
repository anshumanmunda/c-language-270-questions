//Write a program to calculate volume of a cuboid.
// volume = l*b*h;

#include<stdio.h>

int main ()
{
  int l, b, h;
  printf("Enter length, bredth, height of cuboid: ");
  scanf("%d %d %d", &l, &b, &h);

  printf("Volume of Cuboid = %d", l*b*h);
  return 0;
}