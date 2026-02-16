// 7. Write a function to sort n array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>
#include<string.h>

void sort(int*,int); 
void input_array(int*,int); 
void print_array(int*,int); 

int main(){  
  int size;
  printf("Enter the number of elements if an array: ");
  scanf("%d",&size);
  int a[size];

  input_array(a,size);
  sort(a,size);
  return 0;
}

void sort(int* a,int size){
  int i,j,temp;
  for( i=0; i<size; i++ ){
    for( j=0; j<size-1-i; j++ ){
      if( *(a+j) > *(a+j+1) ){
         temp = *(a+j);
         *(a+j) = *(a+j+1);
         *(a+j+1) = temp;
      }

    }
  }
  print_array(a,size); 
} 

void input_array(int* a,int size){
 printf("Enter array Elements:\n");
  for( int i=0; i<size; i++ )
    scanf("%d",&a[i]);
} 

void print_array(int* a,int size){
  printf("Array in sorted order:\n");
  for( int i=0; i<size; i++ )
    printf("%d ",*(a+i));
} 