#include<stdio.h>

int sum(int);

int main()
{
  int k;
  printf("Sum of 1st (n) natural number\nEnter the value of n: ");
  scanf("%d",&k);
  printf("sum = %d",sum(k));
  return 0;

}

int sum(int n)
{
  if(n<1)
   return 0;
  return n + sum(n-1);
}

// Incomplete