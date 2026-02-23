//1. Write a program to calculate the sum of numbers stored in an array of size 10, Take array values from the user.

#include<stdio.h>

int main( ){
   int a[10];
   int sum  = 0;
   printf("Enter 10 array elemenst: ");
   
  for( int i=0; i<10; i++ )
      scanf("%d",&a[i]);

  for( int i=0; i<10; i++ )
      sum+=a[i];
  printf("Sum of array elemenst: %d",sum);


  return 0;
}

// completed