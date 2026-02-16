// 8. Write a function to print all unique elements in an array.
#include<stdio.h>

void print_unique(int[], int);
void print_array(int [], int);
void input_array(int [], int);

int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int a[n];
  
  input_array(a,n);
  print_unique(a,n);
  
  return 0;
}

void print_unique(int a[], int n){  

  for( int i=0; i<n; i++ ){
      int count = 0;
    for( int j=0; j<n; j++ ){
       if( a[i] == a[j] ){
          count++;
        if( count >=2 )
          break;
       }
    }
    if( count==1 )
      printf("%d ",a[i]);
  }

}

void print_array(int a[], int n){
  printf("----------Array Elements----------:\n");
  for( int i=0; i<n; i++ )
  printf("%d ",a[i]);
}
void input_array(int a[], int n){
  printf("Enter %d array elements:\n",n); 
   for( int i=0; i<n; i++ )
     scanf("%d",&a[i]);
}