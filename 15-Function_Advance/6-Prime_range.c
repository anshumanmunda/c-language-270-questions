#include<stdio.h>
void prime(int, int);

int main()
{
  int n,b;
  printf("Prime number between (a-b)\nEnter the value of a & b: ");
  scanf("%d %d",&n,&b); 
  prime(n,b);
  
  return 0;
}

void prime(int n, int b)  //  10 - 30
{
  int i,j;
  for(i=n; i<=b; i++)
   {
      for(j=2; j<i; j++)
      {
        if( i%j==0)
          break;
      }
      if(i==j)
        printf("%d ",j);
   }

}

