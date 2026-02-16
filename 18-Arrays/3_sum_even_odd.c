//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main( ){
   int a[10];
   int even_sum  = 0, odd_sum = 0;
   printf("Enter 10 array elemenst: ");
   
  for( int i=0; i<10; i++ )
      scanf("%d",&a[i]);

  for( int i=0; i<10; i++ ){
     if( a[i] & 1)
        odd_sum+=a[i];
      else  
        even_sum+=a[i];
  }
      
  printf("Sum of odd numbers of an array = %d\n",odd_sum);
  printf("Sum of even numbers of an array = %d",even_sum);

  return 0;
}