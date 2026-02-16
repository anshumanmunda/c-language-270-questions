// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

#include<stdio.h>

int smallest_number(int[],int);
void input_array(int[],int);
void print_array(int[],int);

int main( ){
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int a[n];

  input_array(a,n);
  int result = smallest_number(a,n);
  printf("Smallest element in array = %d",a[result]);

  return 0;
}

void input_array(int a[], int n){
   printf("Enter %d array elements:\n",n);
   for( int i=0; i<n; i++ )
     scanf("%d",&a[i]);
}

int smallest_number(int a[],int n) {
  int small_index = 0;
  for( int i=1; i<n; i++ ){
     if( a[i] < a[small_index] )
       small_index = i;  
  }
  return small_index;  
}