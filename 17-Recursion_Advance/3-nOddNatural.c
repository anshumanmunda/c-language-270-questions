#include<stdio.h>

int sum_odd(int);

int main()
{
  int k;
  printf("Sum of 1st (n) odd natural number\nEnter the value of n: ");
  scanf("%d",&k);
  printf("sum = %d",sum_odd(k));
  return 0;

}

int sum_odd(int n)
{
  if(n<1)
   return 0;
  return 2*n + sum_odd(n-1);
}