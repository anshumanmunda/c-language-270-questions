//Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
  int i, n;
  printf("Enter a number:"); 
  scanf("%d", &n); 
  for(i=1; i<=n; i++)
  printf("%d ",i*i);

  return 0;
} 
  