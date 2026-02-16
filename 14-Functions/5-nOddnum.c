//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>

void odd(int);

int main()
{
  int n;
  printf("First (n) Natural numbner\nEnter the value of (n): ");
  scanf("%d",&n);
  odd(n);
  return 0;
}

void odd(int n)
{
  for(int i=1; i<=2*n; i+=2)
      printf("%d ",i);

}



