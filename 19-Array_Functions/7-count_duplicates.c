// 7. Write a function to count a total number of duplicate elements in an array.(Means elements that occurs 2 times in an array)


#include<stdio.h>

void count_duplicates(int[], int);
void print_array(int [], int);
void input_array(int [], int);

int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int a[n];
  
  input_array(a,n);
  count_duplicates(a,n);

  return 0;
}

void count_duplicates(int a[], int n){  //   1 2 4 5 6 2 5 6 9 4 
  int duplicate = 0; 
  for(int i=0; i<n; i++){
    int count = 0;
    for(int j=0; j<n; j++ ){
       if( a[i] == a[j] ){
         count++;
        if(count>=2){
          duplicate++;
          break;
        }
        
       }
      
    }
  }
  printf("Number of duplicate elements: %d",duplicate);
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