// Write a program to find the Nth term of the Fibonacci series.

#include<stdio.h>

int main()
{
  int first = -1, next = 1, temp, i=0,n;

  printf("Enter the nth term of fibonacci serise: ");
  scanf("%d",&n);
  
  while(i<20){
    temp = first + next;
    if(i==n)
     printf(" %d ",temp); 
    first = next; 
    next = temp;
    i++;
  }
     
  return 0;
}
// completed