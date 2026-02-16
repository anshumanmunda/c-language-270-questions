//Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>

int main ()
{
  int a,b;   // 10  20 
  printf("Enter two number: ");
  scanf("%d %d",&a,&b);
  
  printf("You Entered a = %d b = %d ",a,b);
  // Swapping
  a = a+b;  // 30
  b = a-b; // 30-20
  a = a-b;

  printf("\nAfter swapping\na = %d b = %d ",a,b);
  return 0;

}