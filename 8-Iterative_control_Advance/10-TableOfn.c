//Write a program to print a table of N.
#include<stdio.h>
int main()
{
  int i, n;
  printf("Enter a number:"); 
  scanf("%d", &n); 
  if(n<0 || n<2)
  {
    printf("INVALID NUMBER !\nPlease Enter a Positve number greater than 2");
    return 0;
  }

  for(i=1; i<=n; i++)
  printf("%dx%d = %d \n",n, i, n*i);

  return 0;
} 