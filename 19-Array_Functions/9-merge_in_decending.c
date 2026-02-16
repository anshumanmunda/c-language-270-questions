
#include<stdio.h>

void merge_decsc(int[], int, int[], int);
void input_array(int[], int);
void print_array(int[], int);
void sort_array(int[], int);

int main(){
  int n1, n2;
  printf("Enter the size of array : ");
  scanf("%d",&n1);
  n2 = n1;
  int a1[n1], a2[n2];

  printf("Enter %d elements of Array 1:\n",n1);
  input_array(a1,n1);

  printf("Enter %d elements of Array 2:\n",n2);
  input_array(a2,n2);
  
  merge_decsc(a1,n1, a2, n2);

  return 0;
}


void merge_decsc(int a1[], int n1, int a2[], int n2){
 
  int n3 = n1 + n2;
  int a3[n3], i, j=0;
  for( int i=0; i<n1; i++ )  
    a3[i] = a1[i];          
     
  for( i; i<n3; i++, j++ )   
    a3[i] = a2[j];

  printf("----------Array Elements----------:\n");
  print_array(a3,n3);    
  sort_array(a3,n3);    
}

void print_array(int a[], int n){
  for( int i=0; i<n; i++ )
    printf("%d ",a[i]);
}

void input_array(int a[], int n){
   for( int i=0; i<n; i++ )
     scanf("%d",&a[i]);
}

void sort_array(int a[], int n){
   int temp;
   for( int i=0; i<n; i++ ){  
    for( int j=0; j<n; j++ ){
       if( a[i]>a[j] ){
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
       }
    }
   }
   printf("\n----------Sorted Array----------\n");
   print_array(a,n);
}