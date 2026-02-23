//Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>

int main ()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);

  printf((n>=100 && n<=999)?"3-digit no":"Not 3-digit no");
}