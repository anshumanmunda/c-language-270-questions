/*Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)*/
#include<stdio.h>

int factorial(int);
float combination(int,int);

int main()
{
  int n,r;
  float f;
  printf("\nEnter the value of (n): ");
  scanf("%d",&n);
  printf("Enter the value of (r): ");
  scanf("%d",&r);

   if ( r>n ){
    printf("\'r\' should not be greater than \'n\' !");
    return 0;
   }

   else if (r<0 ||n<0){
    printf("\'r\' & \'n\' should not >=0 !");
    return 0;
   }

  
  printf("Combination = %.0f",combination(n,r));
  return 0;
}

float combination(int n,int r)
{
   return factorial(n) / ( factorial(n-r)*factorial(r) );

}

int factorial(int n)
{
  int fact=1;
  for(int i=1; i<=n; i++)
    fact*=i;
  return fact;
}




