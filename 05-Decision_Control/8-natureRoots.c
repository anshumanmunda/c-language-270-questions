/*Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots*/

#include<stdio.h>

int main ()
{
  int a,b,c,D;
  printf("Enter  the coefficient of x^, x & constant term:  ");
  scanf("%d %d %d",&a, &b, &c);

  D = b*b - ( 4*a*c );
  if( D>0 )
  printf("Real & distinc roots ");

  else if( D == 0 )
  printf("Real & Equal roots ");

  else
  printf("Imaginary Roots");


}