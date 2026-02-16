// 8. Write a function to merge two arrays in a given array. [ void merge(int *arr, int size, int *arr2, int size2, int *arr3); ]

#include<stdio.h> 
#include<string.h>

void merge (int*, int, int*, int, int*, int);
void input_array(int*,int); 
void print_array(int*,int); 

int main(){
  int size1, size2, size3;
  printf("Enter the size of Array 1 and Array 2: ");
  scanf("%d %d",&size1, &size2);
  int arr[size1];
  int arr2[size2];
  size3 = size1+size2;
  int arr3[size3];
  
  if( size1<=0 || size2<=0 ){
    printf("Enter a valid array size !");
    return 0;
  }
  printf("Enter %d elements of Array 1: ",size1);
  input_array(arr, size1);

  printf("Enter %d elements of Array 2: ",size2);
  input_array(arr2, size2);

  merge(arr, size1,arr2, size2, arr3, size3);

  return 0;
}

void merge (int *arr, int size1, int *arr2, int size2, int *arr3, int size3){
    int i, j=0;
  for( i=0; i<size1; i++ )
    *(arr3+i) = *(arr+i);

  for( i; i<size3; i++,j++ )
    *(arr3+i) = *(arr2+j);

  print_array(arr3,size3);    
}

void input_array(int* a,int size){
  for( int i=0; i<size; i++ )
    scanf("%d",&a[i]);
} 

void print_array(int* a,int size){
  printf("Merged Array Elements :\n");
  for( int i=0; i<size; i++ )
    printf("%d ",*(a+i));
} 