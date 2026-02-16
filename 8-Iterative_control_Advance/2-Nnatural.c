//Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
  int i, n;
  printf("Enter a number:"); 
  scanf("%d", &n); 
  for(i=1; i<=n; i++)
  printf("%d\n",i);
  return 0;
} 
 // You can also check for -ve numbers.