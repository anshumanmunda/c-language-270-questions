#include<stdio.h>

int hcf(int, int); 

int main()
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
  printf("HCF = %d",hcf(a,b));

  
  return 0;
}

int hcf(int a, int b) 
{
  int H;
  for( H= (a<b)?a:b; H>=1; H--)   // 4 12
  {
      if( a%H==0 && b%H==0 )
        return H;
  }

}