//sum of first n odd natural numbers. ---> n^2
#include<stdio.h>
int main()
{
  int i,n, sum = 0;
  printf("Enter a Positive number: ");
  scanf("%d",&n);
  for(i=1; i<=2*n; i+=2)
  sum += i;
  printf("Sum = %d", sum);
  return 0;
}