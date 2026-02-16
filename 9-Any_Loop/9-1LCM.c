// WAP a program to calculate LCM of 2 nunbers.
#include<stdio.h>
int main()
{
  int L, a, b, i=2;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);  // 4, 6
  for( L=(a>b)?a:b; L<=a*b; L++)
  {
    if(L%a == 0 && L%b == 0)
    {
    printf("LCM = %d", L);
    break;
    }
  }

}