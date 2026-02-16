#include<stdio.h>
int main()
{
  int i, n;
  printf("Enter a number: ");
  scanf("%d",&n); 
  while(n)
{
  printf("%d",n%10);
  n/=10;
}
  return 0;
}

  // for(i=n ;i>0; i=i/10)
  // printf("%d",i%10);
