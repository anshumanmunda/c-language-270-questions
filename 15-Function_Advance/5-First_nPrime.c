#include<stdio.h>
void Nprime(int);

int main()
{
  int n;
  printf("First (n) Prime number\nEnter the value of (n): ");
  scanf("%d",&n);
  Nprime(n);
  
  return 0;
}

void Nprime(int n)  // 
{
  int i,j,count=0;
  for(i=2; ; i++)
   {
      if(count == n)
        break;

      for(j=2; j<i; j++)
      {
        if( i%j==0)
          break;
      }
      if(i==j)
      {
        printf("%d ",i);
        count++;
      } 

   }

}

