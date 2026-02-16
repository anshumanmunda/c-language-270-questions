#include<stdio.h>
int prime(int);

int main()
{
  int n;
  printf("Enter a numbers: ");
  scanf("%d",&n);
  printf( (prime(n))? "Prime" :"Not Prime" );
  
  return 0;
}

int prime(int n)
{
  int i;
  for(i=2; i<n; i++)
   {
      if( n%i==0 )
      break;
   }
    return (n==i)? 1:0;
}

