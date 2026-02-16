//Write a function to calculate the factorial of a number.(TSRS)
#include<stdio.h>

int factorial(int,int);

int main()
{
  int n,fact=1;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("%d!= %d",n, factorial(n,fact));
  return 0;
}

int factorial(int n,int fact)
{
  for(int i=1; i<=n; i++)
    fact*=i;
  return fact;
}
