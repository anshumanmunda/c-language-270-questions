//9.Write a program to sort elements of an array in descending order of size 10. Take array values from the user.

#include<stdio.h>

int main( ){
   int a[5], temp;
   printf("Enter 5 array elements: ");
   
  for( int i=0; i<5; i++ )  // 10 80 30 -4 5 
      scanf("%d",&a[i]);
      
  for( int i=0; i<5-1; i++ ){
    for( int j=0; j<5-1-i; j++ ){
      if( a[j] < a[j+1] ) {
        temp =  a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      } 
  }
  }

  printf("Sorted in descending order:\n");
  for( int i=0; i<5; i++ )  
      printf("%d ",a[i]);

  return 0;
}