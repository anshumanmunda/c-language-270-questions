// Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>

int main()
{
  int hcf, a,b,n;
  printf("Enter two Positive integers: ");
  scanf("%d",&n);
  
  for( hcf=(a<b)?a:b; hcf>=1; hcf--)  // 4 12
  {
    if( hcf%a==0 && hcf%b==0)
      break;
  }
  printf( ( hcf==1 )?"Co-Prime":"Not Co-Prime !"  );

  return 0;
} 