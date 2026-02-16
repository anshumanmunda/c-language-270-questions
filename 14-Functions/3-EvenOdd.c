/* Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
*/
#include<stdio.h>
int even_odd (int);

int main()
{
  int n;
  printf( (even_odd(n)?"Even":"Odd" ));
  return 0;
} 

int even_odd (int n)
{
 printf("Enter a number: ");  
 scanf("%d",&n); 
 return ( (n&1)? 0 : 1 );
}
  