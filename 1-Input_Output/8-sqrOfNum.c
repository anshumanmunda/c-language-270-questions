/*Write a program to calculate square of a given number. Number is entered by the user.*/

#include<stdio.h>

int main ()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Square of %d = %d ", n, n*n);
  return 0;
}