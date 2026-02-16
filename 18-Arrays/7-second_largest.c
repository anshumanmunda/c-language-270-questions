//7. Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>
#include<limits.h>

int main(){
  int a[5], max = INT_MIN, second_max = INT_MIN;
  
  printf("Enter 5 array elements: ");
  for( int i=0; i<5; i++ )
     scanf("%d",&a[i]);

  //  Largest Element
  for( int i=0; i<5; i++ ){
     if( a[i] > max )
      max = a[i];
  }

  // Second Largest
  for( int i=0; i<5; i++ ){
     if( a[i] <max && a[i] > second_max )
         second_max = a[i];
  }
  printf("Second largest Element = %d",second_max);

  return 0;
}