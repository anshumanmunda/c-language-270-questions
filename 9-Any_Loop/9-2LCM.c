// WAP a program to calculate LCM of 2 nunbers. (My method)
#include<stdio.h>
int main()
{
  int L, a, b, c, i=2;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);  // 4, 6
  c = (a>b)?a:b;
  for( L=c; L<=a*b; i++)
  {
    if(L%a == 0 && L%b == 0)
    {
    printf("LCM = %d", L);
    break;
    }
    L = c;        // 9 7 
    L*=i;  // 9*7 = 63
  }

}