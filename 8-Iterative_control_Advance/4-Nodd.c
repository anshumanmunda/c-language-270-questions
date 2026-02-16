//Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
  int i=1, n;
  printf("Enter a number:"); 
  scanf("%d", &n); 
  while(i<=n)
  {
    printf("%d ",2*i-1);
    i++;

  }
  return 0;
} 
  
  // for(i=1; i<=2*n; i+=2)
  // printf("%d\n",i);