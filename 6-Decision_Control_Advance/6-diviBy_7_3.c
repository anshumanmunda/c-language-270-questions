//Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  
  printf( n%21==0?"Divisible":"Not Divisibe!" );
}  
