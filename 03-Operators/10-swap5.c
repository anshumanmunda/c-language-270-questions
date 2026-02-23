/*Write a program to swap values of two int variables in single line arithmetic expression.
*/

#include<stdio.h>

int main ()
{
  int a,b;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);           // 10    20
  printf("You entered a = %d  b = %d",a,b);

  // a+b-=10
  
  printf("\nAfter swapping\n%d",a);
  
  return 0;
}