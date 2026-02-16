// 6. Write a function to swap two elements of given array with specified indices. 

#include<stdio.h>

void swap_elements( int [], int, int, int );
void print_array(int [], int);
void input_array(int [], int);

int main(){
  int n, result, i1, i2;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int a[n];
  
  input_array(a,n);
  printf("Enter two  indices of array to swap elements: ");
  scanf("%d %d",&i1, &i2);

  if( i1 >= 0 && i1<n && i2 >= 0 && i2<n  ) 
    swap_elements(a,n,i1,i2); 

  else{ 
    printf("Invalid indices !");
    return 0;
  }

  return 0;
}


void swap_elements( int a[], int n, int i1, int i2){
    int temp;
    temp = a[i1];
    a[i1] = a[i2];
    a[i2] = temp;
    print_array(a,n);
}

void print_array(int a[], int n){
  printf("----------Array After swapping----------:\n");
  for( int i=0; i<n; i++ )
  printf("%d ",a[i]);
}
void input_array(int a[], int n){
  printf("Enter %d array elements:\n",n); 
   for( int i=0; i<n; i++ )
     scanf("%d",&a[i]);
}