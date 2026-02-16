//WAP to print Factorial of a numbers
#include<stdio.h>
int main()
{
  int i,n, fact = 1;
  printf("Enter a Positive number: ");
  scanf("%d",&n);
  
  if(n == 1 || n == 0){
  printf("%d!= 1",n);
  return 0;
  }
  
  for(i=n; i>=1; i--)
  fact *= i;
  printf("%d! = %d",n,fact);

  return 0;
} 