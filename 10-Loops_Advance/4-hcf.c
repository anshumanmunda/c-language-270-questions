// Write a program to calculate HCF of two numbers
#include<stdio.h>

int main()
{
  int hcf, a,b,t;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
  
  t = (a<b)?a:b;  // 8 12
  for(hcf=t ; hcf>=1;hcf-- )
  {
    if(a%hcf==0 && b%hcf==0)
    {
      printf("HCF = %d",hcf);
      break;
    }
   
  }

  return 0;
}