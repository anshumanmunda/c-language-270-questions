// Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
  int first = -1, next = 1, temp, i=0,n;

  printf("Enter the number to check in fibonacci serise: ");
  scanf("%d",&n);
  
  while(i<=n){
    temp = first + next;
    first = next; 
    next = temp;
    i++;
    if( temp==n )
    break;
  }

  printf( (temp==n)?"Yes":"No!" );
     
  return 0;
}
