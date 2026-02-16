//Write a function to print first N natural numbers (TSRN).
#include<stdio.h>

void natural(int);

int main()
{
  int n;
  printf("First (n) Natural numbner\nEnter value of (n): ");
  scanf("%d",&n);
  natural(n);
  return 0;
}

void natural(int n)
{
  for(int i=1; i<=n; i++)
    printf("%d ",i); 
}
  