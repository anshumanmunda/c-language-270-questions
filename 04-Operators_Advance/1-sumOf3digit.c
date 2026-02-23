/*Write a program to input a three digit number and display the sum of the digits.*/

#include<stdio.h>

int main()
{
  int n, s;
  printf("Enter a number 3 digit: ");
  scanf("%d",&n); // 245
  s = n/100%10 + n/10%10 + n%10;
  printf("Sum = %d",s);
  return 0;
}

// completed