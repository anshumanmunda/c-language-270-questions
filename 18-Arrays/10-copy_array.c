// Write a program in C to copy the elements of one array into another array. Take array values from the user.

#include<stdio.h>

int main(){
  int a1[5], a2[5];
  int n = 5;
  printf("Enter 5 Array Elements: ");
  for(int i=0; i<n; i++) 
    scanf("%d",&a1[i]);
    
    for( int i=0; i<n; i++ )
    a2[i] = a1[i];

    printf("Elements of 2nd array:\n");
    for(int i=0; i<n; i++) 
      printf("%d ",a2[i]);

  return 0;    
  }