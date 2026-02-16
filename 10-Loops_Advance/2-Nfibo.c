// Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main()
{
  int first = -1, next = 1, temp, i=0,n;

  printf("Enter the number of terms of fibonacci serise: ");
  scanf("%d",&n);
  
  while(i<n){
    temp = first + next;
    first = next; 
    next = temp;
    printf(" %d ",temp); 
    i++;
  }
     
  return 0;
}
