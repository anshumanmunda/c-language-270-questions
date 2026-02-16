// Write a program to check whether a given
#include<stdio.h>
int main()
{
  int i, n;
  printf("Enter a number: ");
  scanf("%d",&n);

  for(i=2 ;i<n; i++)
  {
    if( n%i== 0 )
    break;
  }
  printf(( i==n )?"Prime Number": "Not a Prime Number"); 
  return 0;
}