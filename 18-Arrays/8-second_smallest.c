//8. Write a program to find second smallest in an array.Take array values from the user.

#include<stdio.h>
#include<limits.h>

int main(){
  int a[5], min = INT_MAX, second_min = INT_MAX;
  
  printf("Enter 5 array elements: ");
  for( int i=0; i<5; i++ )
     scanf("%d",&a[i]);

  //  smallest Element   
  for( int i=0; i<5; i++ ){
     if( a[i] < min )
      min = a[i];
  }

  // Second smallest    
  for( int i=0; i<5; i++ ){
     if( a[i] > min && a[i] < second_min )
         second_min = a[i];
  }
  printf("Second smallest Element = %d",second_min);

  return 0;
}