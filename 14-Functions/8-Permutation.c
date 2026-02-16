/*Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)*/
#include<stdio.h>

int factorial(int);
float permutation(int,int);

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

  
  printf("permutation = %.2f",permutation(n,r));
  return 0;
}

float permutation(int n,int r)
{
   return factorial(n) / factorial(n-r) ;

}

int factorial(int n)
{
  int fact=1;
  for(int i=1; i<=n; i++)
    fact*=i;
  return fact;
}



