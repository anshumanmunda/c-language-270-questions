// Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.

#include<stdio.h>

int adjecent_duplicate(int [], int);
void print_array(int [], int);
void input_array(int [], int);

int main(){
  int n, result;
  printf("Enter the size of array (size > 1): ");
  scanf("%d",&n);
  int a[n];
  
  input_array(a,n);
  result = adjecent_duplicate(a,n);
  printf("The first occurrence of duplicate value: %d",result);

  return 0;
}

int adjecent_duplicate(int a[], int n){  // 1 2 3 3 4 5 6 6
  int falg = 0, i; 
  for( i=0; i<n-1; i++){
      if( a[i] == a[i+1] ){
        falg++;
        break; 
      }
       
  }
  return a[i];
}
void print_array(int a[], int n){
  printf("Array Elements:\n");
  for( int i=0; i<n; i++ )
  printf("%d ",a[i]);
}
void input_array(int a[], int n){
  printf("Enter %d array elements:\n",n); 
   for( int i=0; i<n; i++ )
     scanf("%d",&a[i]);
}