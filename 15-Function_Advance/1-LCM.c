#include<stdio.h>

int lcm(int, int); 

int main()
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
  printf("LCM = %d",lcm(a,b));

  
  return 0;
}

int lcm(int a, int b) 
{
  int L;
  for( L= (a>b)?a:b; L<=a*b; L+=L)  
  {
      if( L%a==0 && L%b==0 )
        return L;
  }

}