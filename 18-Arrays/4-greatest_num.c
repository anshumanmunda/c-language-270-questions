//4.Write a program to find the greatest number stored in an array of size 10.Take Array values from the user.

#include<stdio.h>

int main( ){
   int a[5];
   int greatest = 0;
   printf("Enter 5 array elements: ");
   
  for( int i=0; i<5; i++ )  // 1 2 3 4 5 
      scanf("%d",&a[i]);

  for( int i=1; i<5; i++ ){
    if( a[i] > a[greatest] )
       greatest = i;
  }
      
  printf("Sum of odd numbers of an array = %d\n",a[greatest]);

  return 0;
}