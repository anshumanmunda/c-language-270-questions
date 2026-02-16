//4.Write a program to find the smallest number stored in an array of size 10.Take Array values from the user.

#include<stdio.h>

int main( ){
   int a[5];
   int smallest = 0;
   printf("Enter 5 array elements: ");
   
  for( int i=0; i<5; i++ )  
      scanf("%d",&a[i]);

  for( int i=1; i<5; i++ ){
    if( a[i] < a[smallest] )
       smallest = i;
  }
      
  printf("Sum of odd numbers of an array = %d\n",a[smallest]);

  return 0;
}