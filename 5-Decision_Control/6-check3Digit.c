//Write a program to check weather a number is 3 digit or not

#include<stdio.h>

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);              // n<111 || n>999

  if(n>=100 && n<=999)
  printf("%d is a 3-digit number",n);

  else
  printf("%d is a not 3-digit number !",n);

}