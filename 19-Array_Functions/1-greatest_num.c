// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>

int greatest_number(int[],int);
void input_array(int[],int);
void print_array(int[],int);

int main( ){
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int a[n];

  input_array(a,n);
  int result = greatest_number(a,n);
  printf("Greatest element in array = %d",a[result]);

  return 0;
}

void input_array(int a[], int n){
   printf("Enter %d array elements:\n",n);
   for( int i=0; i<n; i++ )
     scanf("%d",&a[i]);
}

int greatest_number(int a[],int n) {
  int max_index = 0;
  for( int i=1; i<n; i++ ){
     if( a[i] > a[max_index] )
       max_index = i;  
  }
  return max_index;  
}

// completed