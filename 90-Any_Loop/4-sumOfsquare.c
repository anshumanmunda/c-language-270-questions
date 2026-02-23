//sum of Square of first n nartural numbers
#include<stdio.h>
int main()
{
  int i,n, sum = 0;
  printf("Enter a Positive number: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  sum += i*i;
  printf("Sum = %d", sum);

  return 0;
}