//Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  
  printf( n%6==0?"Divisible":"Not Divisibe!" );
}  
