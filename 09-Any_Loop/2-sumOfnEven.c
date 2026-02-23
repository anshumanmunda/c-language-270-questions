//sum of first n even numbers
#include<stdio.h>
int main()
{
  int i,n, sum = 0;
  printf("Enter a Positive number: ");
  scanf("%d",&n);
  for(i=2; i<=2*n; i+=2)
  sum += i;
  printf("Sum = %d", sum);

  return 0;
}