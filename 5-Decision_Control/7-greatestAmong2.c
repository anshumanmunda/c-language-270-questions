//Write a program to print greater between two numbers. Print one number if both are the same.

#include<stdio.h>

int main ()
{
  int a,b;
  printf("Enter two number: ");
  scanf("%d %d",&a, &b);

  if( a == b )
  printf("%d",a);
  else
 //(a>b) ? printf("%d is greater ",a): printf("%d is greater",b);
 printf("%d", a>b ? a:b);
}