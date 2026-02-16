/*Write a program to swap values of two int variables
*/

#include<stdio.h>

int main ()
{
  int a,b,c;
  printf("Enter two number: ");
  scanf("%d %d",&a,&b);
  
  printf("You Entered a = %d b = %d ",a,b);
  // Swapping
  c = a;
  a = b;
  b = c;
  printf("\nAfter swapping\na = %d b = %d ",a,b);
  return 0;

}