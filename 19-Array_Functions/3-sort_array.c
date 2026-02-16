// 3. Write a function to sort an array of any size. (TSRN)

#include<stdio.h>

int sort_array(int[],int);
void input_array(int[],int);
void print_array(int[],int);

int main( ){
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int a[n];

  input_array(a,n);
  sort_array(a,n);
  print_array(a,n); 

  return 0;
}

void input_array(int a[], int n){
   printf("Enter %d array elements:\n",n);
   for( int i=0; i<n; i++ )
     scanf("%d",&a[i]);
}

int sort_array(int a[],int n) {
  int temp;
   for( int i=0; i<5-1; i++ ){
    for( int j=0; j<5-1-i; j++ ){
      if( a[j] > a[j+1] ) {
        temp =  a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      } 
  }
  }

}

void print_array(int a[], int n){
  printf("Printing arrays in Sorted order:\n");
  for( int i=0; i<n; i++ )  
      printf("%d ",a[i]);
}