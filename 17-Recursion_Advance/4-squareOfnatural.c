#include<stdio.h>

int square(int);

int main()
{
  int k;
  printf("Sum of square of 1st (n) odd natural number\nEnter the value of n: ");
  scanf("%d",&k);
  printf("sum = %d",square(k));
  return 0;

}

int square(int n)
{
  if(n<1)
   return 0;
  return n*n + square(n-1);
}